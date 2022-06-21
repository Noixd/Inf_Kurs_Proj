#include "Header.h"

struct dev_sample* Edt_itm(struct dev_sample* head, int count) {

	int i = 0, edt_num;
	struct dev_sample* pcurrent = head, * psave = NULL;


	if (head == NULL || count < 1) {
		printf("Îòñóòñòâóþò äàííûå!\n");
	}
	else {
		Table(head, count);
		printf("Èçìåíèòü çàïèñü ïîä íîìåðîì: ");
		while (scanf("%d", &edt_num) != 1) {
			printf("Íåâåðíî ââåäåííîå çíà÷åíèå, ïîïðîáóéòå åùå: ");
			while (getchar() != '\n');
		}

		while ((edt_num - 1) > i) {
			pcurrent = pcurrent->next;
			i++;
		}

		printf("Âûáåðèòå ïîëå äëÿ èçìåíåíèÿ: ");
		while (scanf("%d", &edt_num) != 1) {
			printf("Íåâåðíî ââåäåííîå çíà÷åíèå, ïîïðîáóéòå åùå: ");
			while (getchar() != '\n');
		}

		switch (edt_num)
		{
		case 1: 
			printf("Íàçâàíèå óñòðîéñòâà:\n");
			while (scanf("%s", pcurrent->name_device) != 1) {
				printf("Íåâåðíî ââåäåííîå çíà÷åíèå, ïîïðîáóéòå åùå: ");
				while (getchar() != '\n') continue;
			} 
			break;

		case 2:
			printf("Çíà÷åíèå ñìåùåíèÿ íà âõîäå:\n");
			while (scanf("%lf", &pcurrent->input) != 1) {
				printf("Íåâåðíî ââåäåííîå çíà÷åíèå, ïîïðîáóéòå åùå: ");
				while (getchar() != '\n') continue;
			}
			break;

		case 3:
			printf("Çíà÷åíèå ñêîðîñòè íàðàñòàíèÿ ñèãíàëà:\n");
			while (scanf("%lf", &pcurrent->kf_rlx_sin) != 1) {
				printf("Íåâåðíî ââåäåííîå çíà÷åíèå, ïîïðîáóéòå åùå: ");
				while (getchar() != '\n') continue;
			}
			break;

		case 4:
			printf("Çíà÷åíèå âûõîäíîãî òîêà íà êàíàë:\n");
			while (scanf("%lf", &pcurrent->inp_res) != 1) {
				printf("Íåâåðíî ââåäåííîå çíà÷åíèå, ïîïðîáóéòå åùå: ");
				while (getchar() != '\n') continue;
			}
			break;

		case 5:
			printf("Êîëè÷åñòâî êàíàëîâ:\n");
			while (scanf("%d", &pcurrent->amt_ch) != 1) {
				printf("Íåâåðíî ââåäåííîå çíà÷åíèå, ïîïðîáóéòå åùå: ");
				while (getchar() != '\n') continue;
			}
			break;
			}
		while (getchar() != '\n') continue;
		printf("Èçìåíåíèÿ óñïåøíî âíåñåíû!\n");
		Table(head, count);
		}
	
	return head;
	}
