#include "Header.h"

struct dev_sample* Edt_itm(struct dev_sample* head, int count) {

	int i = 0, edt_num;
	struct dev_sample* pcurrent = head, * psave = NULL;


	if (head == NULL || count < 1) {
		printf("Отсутствуют данные!\n");
	}
	else {
		Table(head, count);
		printf("Изменить запись под номером: ");
		while (scanf("%d", &edt_num) != 1) {
			printf("Неверно введенное значение, попробуйте еще: ");
			while (getchar() != '\n');
		}

		while ((edt_num - 1) > i) {
			pcurrent = pcurrent->next;
			i++;
		}

		printf("Выберите поле для изменения: ");
		while (scanf("%d", &edt_num) != 1) {
			printf("Неверно введенное значение, попробуйте еще: ");
			while (getchar() != '\n');
		}

		switch (edt_num)
		{
		case 1: 
			printf("Название устройства:\n");
			while (scanf("%s", pcurrent->name_device) != 1) {
				printf("Неверно введенное значение, попробуйте еще: ");
				while (getchar() != '\n') continue;
			} 
			break;

		case 2:
			printf("Значение смещения на входе:\n");
			while (scanf("%lf", &pcurrent->input) != 1) {
				printf("Неверно введенное значение, попробуйте еще: ");
				while (getchar() != '\n') continue;
			}
			break;

		case 3:
			printf("Значение скорости нарастания сигнала:\n");
			while (scanf("%lf", &pcurrent->kf_rlx_sin) != 1) {
				printf("Неверно введенное значение, попробуйте еще: ");
				while (getchar() != '\n') continue;
			}
			break;

		case 4:
			printf("Значение выходного тока на канал:\n");
			while (scanf("%lf", &pcurrent->inp_res) != 1) {
				printf("Неверно введенное значение, попробуйте еще: ");
				while (getchar() != '\n') continue;
			}
			break;

		case 5:
			printf("Количество каналов:\n");
			while (scanf("%d", &pcurrent->amt_ch) != 1) {
				printf("Неверно введенное значение, попробуйте еще: ");
				while (getchar() != '\n') continue;
			}
			break;
			}
		while (getchar() != '\n') continue;
		printf("Изменения успешно внесены!\n");
		Table(head, count);
		}
	
	return head;
	}