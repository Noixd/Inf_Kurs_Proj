#include "Header.h"

struct dev_sample* Data_input(struct dev_sample* head, int* count) {

	char choos = NULL;
	int count_func = 0;
	struct dev_sample* pcurrent = NULL, * psave = NULL;

	if (head != NULL)
	{
		while (1)
		{
			printf("Ñîçäàòü íîâûé ñïèñîê (ñòàðûé áóäåò ïåðåïèñàí): Ä/Í?\n");
			while ((choos = getchar()) == '\n') {
				printf("Íåâåðíî ââåäåííîå çíà÷åíèå, ïîïðîáóéòå åùå: ");
				while (getchar() != '\n') continue;
			}
			choos = toupper(choos);

			switch (choos)
			{
			case 'Ä':
				count_func = 0;
				pcurrent = head;
				while (pcurrent != NULL)
				{
					psave = pcurrent->next;
					free(pcurrent);
					pcurrent = psave;
				}
				head = NULL;
				break;

			case 'Í':
				count_func = 0;
				pcurrent = head;
				while (pcurrent != NULL)
				{
					psave = pcurrent;
					pcurrent = pcurrent->next;
					count_func++;
				}
				break;

			default:
				printf("Ïîâòîðèòå ââîä: ");
				continue;
			}
			break;
		}

	}

	while (1)
	{
		count_func++;

		pcurrent = (struct dev_sample*)malloc(sizeof(struct dev_sample));

		if (head == NULL)
			head = pcurrent;
		else
			psave->next = pcurrent;
		pcurrent->next = NULL;

		printf("Íàçâàíèå óñòðîéñòâà:\n");
		while (scanf("%s", pcurrent->name_device) != 1) {
			printf("Íåâåðíî ââåäåííîå çíà÷åíèå, ïîïðîáóéòå åùå: ");
			while (getchar() != '\n') continue;
		}

		printf("Çíà÷åíèå ñìåùåíèÿ íà âõîäå:\n");
		while (scanf("%lf", &pcurrent->input) != 1) {
			printf("Íåâåðíî ââåäåííîå çíà÷åíèå, ïîïðîáóéòå åùå: ");
			while (getchar() != '\n') continue;
		}

		printf("Çíà÷åíèå ñêîðîñòè íàðàñòàíèÿ ñèãíàëà:\n");
		while (scanf("%lf", &pcurrent->kf_rlx_sin) != 1) {
			printf("Íåâåðíî ââåäåííîå çíà÷åíèå, ïîïðîáóéòå åùå: ");
			while (getchar() != '\n') continue;
		}

		printf("Çíà÷åíèå âûõîäíîãî òîêà íà êàíàë:\n");
		while (scanf("%lf", &pcurrent->inp_res) != 1) {
			printf("Íåâåðíî ââåäåííîå çíà÷åíèå, ïîïðîáóéòå åùå: ");
			while (getchar() != '\n') continue;
		}

		printf("Êîëè÷åñòâî êàíàëîâ:\n");
		while (scanf("%d", &pcurrent->amt_ch) != 1) {
			printf("Íåâåðíî ââåäåííîå çíà÷åíèå, ïîïðîáóéòå åùå: ");
			while (getchar() != '\n') continue;
		}

		while (getchar() != '\n') continue;

		*count = count_func;

		choos = NULL;
		printf("Ïðîäîëæèòü çàïèñü: Ä/Í?\n");
		while ((choos = getchar()) == '\n') {
			printf("Íåâåðíî ââåäåííîå çíà÷åíèå, ïîïðîáóéòå åùå: ");
			while (getchar() != '\n') continue;
		}
		choos = toupper(choos);
		psave = pcurrent;
		pcurrent = head;

			switch (choos)
			{
			case 'Ä':
				continue;

			case 'Í':
				break;
				break;

			default:
				while ((choos = getchar()) == '\n') {
					choos = toupper(choos);
					printf("Íåâåðíîå çíà÷åíèå\n");
					while (getchar() != '\n') continue;
					break;
				}
			}

		printf("Ââîä çàâåðø¸í.\n");
		while (getchar() != '\n') continue;

		return head;
	}
}
