#include "Header.h"

struct dev_sample* Edt_itm(struct dev_sample* head, int count) {

	int i = 0, edt_num;
	struct dev_sample* pcurrent = head, * psave = NULL;


	if (head == NULL || count < 1) {
		printf("����������� ������!\n");
	}
	else {
		Table(head, count);
		printf("�������� ������ ��� �������: ");
		while (scanf("%d", &edt_num) != 1) {
			printf("������� ��������� ��������, ���������� ���: ");
			while (getchar() != '\n');
		}

		while ((edt_num - 1) > i) {
			pcurrent = pcurrent->next;
			i++;
		}

		printf("�������� ���� ��� ���������: ");
		while (scanf("%d", &edt_num) != 1) {
			printf("������� ��������� ��������, ���������� ���: ");
			while (getchar() != '\n');
		}

		switch (edt_num)
		{
		case 1: 
			printf("�������� ����������:\n");
			while (scanf("%s", pcurrent->name_device) != 1) {
				printf("������� ��������� ��������, ���������� ���: ");
				while (getchar() != '\n') continue;
			} 
			break;

		case 2:
			printf("�������� �������� �� �����:\n");
			while (scanf("%lf", &pcurrent->input) != 1) {
				printf("������� ��������� ��������, ���������� ���: ");
				while (getchar() != '\n') continue;
			}
			break;

		case 3:
			printf("�������� �������� ���������� �������:\n");
			while (scanf("%lf", &pcurrent->kf_rlx_sin) != 1) {
				printf("������� ��������� ��������, ���������� ���: ");
				while (getchar() != '\n') continue;
			}
			break;

		case 4:
			printf("�������� ��������� ���� �� �����:\n");
			while (scanf("%lf", &pcurrent->inp_res) != 1) {
				printf("������� ��������� ��������, ���������� ���: ");
				while (getchar() != '\n') continue;
			}
			break;

		case 5:
			printf("���������� �������:\n");
			while (scanf("%d", &pcurrent->amt_ch) != 1) {
				printf("������� ��������� ��������, ���������� ���: ");
				while (getchar() != '\n') continue;
			}
			break;
			}
		while (getchar() != '\n') continue;
		printf("��������� ������� �������!\n");
		Table(head, count);
		}
	
	return head;
	}