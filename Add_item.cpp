#include "Header.h"

struct dev_sample* Add_itm(struct dev_sample* head, int count) {

	int i=0, add_num;
	struct dev_sample* pcurrent = head, * psave = NULL, * pnew = (struct dev_sample*)malloc(sizeof(struct dev_sample));


	if (head == NULL || count < 1) {
		printf("����������� ������!\n");
	}
	else {
		Table(head, count);
		printf("�������� ������ ����� ������ ��� �������: ");
		while (scanf("%d", &add_num) != 1 || add_num < 0 || add_num > count) {
			printf("������� ��������� ��������, ���������� ���: ");
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

		printf("�������� ����������:\n");
		while (scanf("%s", pnew->name_device) != 1) {
			printf("������� ��������� ��������, ���������� ���: ");
			while (getchar() != '\n');
		}

		printf("�������� �������� �� �����:\n");
		while (scanf("%lf", &pnew->input) != 1) {
			printf("������� ��������� ��������, ���������� ���: ");
			while (getchar() != '\n');
		}

		printf("�������� �������� ���������� �������:\n");
		while (scanf("%lf", &pnew->kf_rlx_sin) != 1) {
			printf("������� ��������� ��������, ���������� ���: ");
			while (getchar() != '\n');
		}

		printf("�������� ��������� ���� �� �����:\n");
		while (scanf("%lf", &pnew->inp_res) != 1) {
			printf("������� ��������� ��������, ���������� ���: ");
			while (getchar() != '\n');
		}

		printf("���������� �������:\n");
		while (scanf("%d", &pnew->amt_ch) != 1) {
			printf("������� ��������� ��������, ���������� ���: ");
			while (getchar() != '\n');
		}
		while (getchar() != '\n') continue;
		Table(head, count);
	}
	
	return head;
}