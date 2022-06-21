#include "Header.h"

struct dev_sample* Data_input(struct dev_sample* head, int* count) {

	char choos = NULL;
	int count_func = 0;
	struct dev_sample* pcurrent = NULL, * psave = NULL;

	if (head != NULL)
	{
		while (1)
		{
			printf("������� ����� ������ (������ ����� ���������): �/�?\n");
			while ((choos = getchar()) == '\n') {
				printf("������� ��������� ��������, ���������� ���: ");
				while (getchar() != '\n') continue;
			}
			choos = toupper(choos);

			switch (choos)
			{
			case '�':
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

			case '�':
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
				printf("��������� ����: ");
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

		printf("�������� ����������:\n");
		while (scanf("%s", pcurrent->name_device) != 1) {
			printf("������� ��������� ��������, ���������� ���: ");
			while (getchar() != '\n') continue;
		}

		printf("�������� �������� �� �����:\n");
		while (scanf("%lf", &pcurrent->input) != 1) {
			printf("������� ��������� ��������, ���������� ���: ");
			while (getchar() != '\n') continue;
		}

		printf("�������� �������� ���������� �������:\n");
		while (scanf("%lf", &pcurrent->kf_rlx_sin) != 1) {
			printf("������� ��������� ��������, ���������� ���: ");
			while (getchar() != '\n') continue;
		}

		printf("�������� ��������� ���� �� �����:\n");
		while (scanf("%lf", &pcurrent->inp_res) != 1) {
			printf("������� ��������� ��������, ���������� ���: ");
			while (getchar() != '\n') continue;
		}

		printf("���������� �������:\n");
		while (scanf("%d", &pcurrent->amt_ch) != 1) {
			printf("������� ��������� ��������, ���������� ���: ");
			while (getchar() != '\n') continue;
		}

		while (getchar() != '\n') continue;

		*count = count_func;

		choos = NULL;
		printf("���������� ������: �/�?\n");
		while ((choos = getchar()) == '\n') {
			printf("������� ��������� ��������, ���������� ���: ");
			while (getchar() != '\n') continue;
		}
		choos = toupper(choos);
		psave = pcurrent;
		pcurrent = head;

			switch (choos)
			{
			case '�':
				continue;

			case '�':
				break;
				break;

			default:
				while ((choos = getchar()) == '\n') {
					choos = toupper(choos);
					printf("�������� ��������\n");
					while (getchar() != '\n') continue;
					break;
				}
			}

		printf("���� ��������.\n");
		while (getchar() != '\n') continue;

		return head;
	}
}