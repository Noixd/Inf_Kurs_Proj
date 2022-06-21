#include "Header.h"

struct dev_sample* Add_itm(struct dev_sample* head, int count) {

	int i=0, add_num;
	struct dev_sample* pcurrent = head, * psave = NULL, * pnew = (struct dev_sample*)malloc(sizeof(struct dev_sample));


	if (head == NULL || count < 1) {
		printf("Îòñóòñòâóþò äàííûå!\n");
	}
	else {
		Table(head, count);
		printf("Äîáàâèòü äàííûå ïîñëå çàïèñè ïîä íîìåðîì: ");
		while (scanf("%d", &add_num) != 1 || add_num < 0 || add_num > count) {
			printf("Íåâåðíî ââåäåííîå çíà÷åíèå, ïîïðîáóéòå åùå: ");
			while (getchar() != '\n');
		}
		add_num--;

		while (add_num > i) {
			psave = pcurrent;
			pcurrent = pcurrent->next;
			i++;
		}

		psave = pcurrent->next;
		pcurrent->next = pnew;
		pnew->next = psave;

		printf("Íàçâàíèå óñòðîéñòâà:\n");
		while (scanf("%s", pnew->name_device) != 1) {
			printf("Íåâåðíî ââåäåííîå çíà÷åíèå, ïîïðîáóéòå åùå: ");
			while (getchar() != '\n');
		}

		printf("Çíà÷åíèå ñìåùåíèÿ íà âõîäå:\n");
		while (scanf("%lf", &pnew->input) != 1) {
			printf("Íåâåðíî ââåäåííîå çíà÷åíèå, ïîïðîáóéòå åùå: ");
			while (getchar() != '\n');
		}

		printf("Çíà÷åíèå ñêîðîñòè íàðàñòàíèÿ ñèãíàëà:\n");
		while (scanf("%lf", &pnew->kf_rlx_sin) != 1) {
			printf("Íåâåðíî ââåäåííîå çíà÷åíèå, ïîïðîáóéòå åùå: ");
			while (getchar() != '\n');
		}

		printf("Çíà÷åíèå âûõîäíîãî òîêà íà êàíàë:\n");
		while (scanf("%lf", &pnew->inp_res) != 1) {
			printf("Íåâåðíî ââåäåííîå çíà÷åíèå, ïîïðîáóéòå åùå: ");
			while (getchar() != '\n');
		}

		printf("Êîëè÷åñòâî êàíàëîâ:\n");
		while (scanf("%d", &pnew->amt_ch) != 1) {
			printf("Íåâåðíî ââåäåííîå çíà÷åíèå, ïîïðîáóéòå åùå: ");
			while (getchar() != '\n');
		}
		while (getchar() != '\n') continue;
		Table(head, count);
	}
	
	return head;
}
