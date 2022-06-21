#include "Header.h"

void Search(struct dev_sample* head, int count) {

	int i = 1, src_num, succes = 0, src_int;
	char src_str[33];
	double src_lf;
	struct dev_sample* pcurrent = head, * psave = NULL;

	if (head == NULL || count < 1) {
		printf("Отсутствуют данные!\n");
	}
	else {
		Table(head, count);
		printf("Номер поля по которому необходимо произвести поиск: ");
		while (scanf("%d", &src_num) != 1) {
			printf("Неверно введенное значение, попробуйте еще: ");
			while (getchar() != '\n');
		}

		switch (src_num)
		{
		case 1:
			printf("Введите запрос для поиска:\n");
			scanf("%s", src_str);
			while (getchar() != '\n');

			while (pcurrent != NULL)
			{
				if (strcoll(src_str, pcurrent->name_device) == 0) {
					succes++;
					printf("|%2.d | %-15s | %-20.2lf | %-30.2lf | %-25.2lf | %-21d |\n", i, pcurrent->name_device, pcurrent->input, pcurrent->kf_rlx_sin, pcurrent->inp_res, pcurrent->amt_ch);
				}
				pcurrent = pcurrent->next;
				i++;
			}
				if (succes == 0) {
					printf("Ничего не найдено.\n");
					while (getchar() != '\n');
				}
			break;

		case 2:
			printf("Введите запрос для поиска:\n");
			scanf("%lf", &src_lf);
			while (getchar() != '\n');

			while (pcurrent != NULL)
			{
				if (pcurrent -> input == src_lf) {
					succes++;
					printf("|%2.d | %-15s | %-20.2lf | %-30.2lf | %-25.2lf | %-21d |\n", i, pcurrent->name_device, pcurrent->input, pcurrent->kf_rlx_sin, pcurrent->inp_res, pcurrent->amt_ch);
				}
				pcurrent = pcurrent->next;
				i++;
			}
			if (succes == 0) {
				printf("Ничего не найдено.\n");
				while (getchar() != '\n');
			}
			break;

		case 3:
			printf("Введите запрос для поиска:\n");
			scanf("%lf", &src_lf);
			while (getchar() != '\n');

			while (pcurrent != NULL)
			{
				if (pcurrent->kf_rlx_sin == src_lf) {
					succes++;
					printf("|%2.d | %-15s | %-20.2lf | %-30.2lf | %-25.2lf | %-21d |\n", i, pcurrent->name_device, pcurrent->input, pcurrent->kf_rlx_sin, pcurrent->inp_res, pcurrent->amt_ch);
				}
				pcurrent = pcurrent->next;
				i++;
			}
			if (succes == 0) {
				printf("Ничего не найдено.\n");
				while (getchar() != '\n');
			}
			break;

		case 4:
			printf("Введите запрос для поиска:\n");
			scanf("%lf", &src_lf);
			while (getchar() != '\n');

			while (pcurrent != NULL)
			{
				if (pcurrent->inp_res == src_lf) {
					succes++;
					printf("|%2.d | %-15s | %-20.2lf | %-30.2lf | %-25.2lf | %-21d |\n", i, pcurrent->name_device, pcurrent->input, pcurrent->kf_rlx_sin, pcurrent->inp_res, pcurrent->amt_ch);
				}
				pcurrent = pcurrent->next;
				i++;
			}
			if (succes == 0) {
				printf("Ничего не найдено.\n");
				while (getchar() != '\n');
			}
			break;

		case 5:
			printf("Введите запрос для поиска:\n");
			scanf("%d", &src_int);
			while (getchar() != '\n');

			while (pcurrent != NULL)
			{
				if (pcurrent->amt_ch == src_int) {
					succes++;
					printf("|%2.d | %-15s | %-20.2lf | %-30.2lf | %-25.2lf | %-21d |\n", i, pcurrent->name_device, pcurrent->input, pcurrent->kf_rlx_sin, pcurrent->inp_res, pcurrent->amt_ch);
				}
				pcurrent = pcurrent->next;
				i++;
			}
			if (succes == 0) {
				printf("Ничего не найдено.\n");
				while (getchar() != '\n');
			}
			break;
		}
	}
	while (getchar() != '\n') continue;
	return;
}