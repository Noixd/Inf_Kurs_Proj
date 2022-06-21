#include "Header.h"

struct dev_sample* Data_input(struct dev_sample* head, int* count) {

	char choos = NULL;
	int count_func = 0;
	struct dev_sample* pcurrent = NULL, * psave = NULL;

	if (head != NULL)
	{
		while (1)
		{
			printf("Создать новый список (старый будет переписан): Д/Н?\n");
			while ((choos = getchar()) == '\n') {
				printf("Неверно введенное значение, попробуйте еще: ");
				while (getchar() != '\n') continue;
			}
			choos = toupper(choos);

			switch (choos)
			{
			case 'Д':
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

			case 'Н':
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
				printf("Повторите ввод: ");
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

		printf("Название устройства:\n");
		while (scanf("%s", pcurrent->name_device) != 1) {
			printf("Неверно введенное значение, попробуйте еще: ");
			while (getchar() != '\n') continue;
		}

		printf("Значение смещения на входе:\n");
		while (scanf("%lf", &pcurrent->input) != 1) {
			printf("Неверно введенное значение, попробуйте еще: ");
			while (getchar() != '\n') continue;
		}

		printf("Значение скорости нарастания сигнала:\n");
		while (scanf("%lf", &pcurrent->kf_rlx_sin) != 1) {
			printf("Неверно введенное значение, попробуйте еще: ");
			while (getchar() != '\n') continue;
		}

		printf("Значение выходного тока на канал:\n");
		while (scanf("%lf", &pcurrent->inp_res) != 1) {
			printf("Неверно введенное значение, попробуйте еще: ");
			while (getchar() != '\n') continue;
		}

		printf("Количество каналов:\n");
		while (scanf("%d", &pcurrent->amt_ch) != 1) {
			printf("Неверно введенное значение, попробуйте еще: ");
			while (getchar() != '\n') continue;
		}

		while (getchar() != '\n') continue;

		*count = count_func;

		choos = NULL;
		printf("Продолжить запись: Д/Н?\n");
		while ((choos = getchar()) == '\n') {
			printf("Неверно введенное значение, попробуйте еще: ");
			while (getchar() != '\n') continue;
		}
		choos = toupper(choos);
		psave = pcurrent;
		pcurrent = head;

			switch (choos)
			{
			case 'Д':
				continue;

			case 'Н':
				break;
				break;

			default:
				while ((choos = getchar()) == '\n') {
					choos = toupper(choos);
					printf("Неверное значение\n");
					while (getchar() != '\n') continue;
					break;
				}
			}

		printf("Ввод завершён.\n");
		while (getchar() != '\n') continue;

		return head;
	}
}