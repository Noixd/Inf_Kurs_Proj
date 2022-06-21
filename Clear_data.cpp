#include "Header.h"

struct dev_sample* Clr_itm(struct dev_sample* head, int count) {

	int i = 0, clr_num;
	struct dev_sample* pcurrent = head, * psave = NULL;


	if (head == NULL || count < 1) {
		printf("Отсутствуют данные!\n");
	}
	else {
		Table(head, count);
		printf("Удалить запись под номером: ");
		while (scanf("%d", &clr_num) != 1) {
			printf("Неверно введенное значение, попробуйте еще: ");
			while (getchar() != '\n');
		}

		if (clr_num == 1)
		{
			pcurrent = pcurrent->next;
			head = pcurrent;
			printf("Запись успешно удалена!\n");
			while (getchar() != '\n');
			Table(head, count);
			return head;
		}

	while ((clr_num - 1) > i) {
			psave = pcurrent;
			pcurrent = pcurrent->next;
			i++;
		} 

		psave -> next = pcurrent ->next;

		free(pcurrent);
		pcurrent = psave;

		printf("Запись успешно удалена!\n");
		while (getchar() != '\n') continue;
		Table(head, count);
	}
	
	return head;
}