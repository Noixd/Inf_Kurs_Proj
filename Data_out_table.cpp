#include "Header.h"

void Table(struct dev_sample* head, int count) {

	int i = 1;
	struct dev_sample* pcurrent = NULL;

	if (head == NULL || count < 1) {
		printf("����������� ������!\n");
	}
	else {
		pcurrent = head;

		printf("| � |   1. ��������   | 2. �������� �� ����� | 3. �������� ���������� ������� | 4. �������� ��� �� ������ | 5. ���������� ������� |\n");
		while (pcurrent != NULL) {
			printf("|%2.d | %-15s | %-20.2lf | %-30.2lf | %-25.2lf | %-21d |\n", i, pcurrent -> name_device, pcurrent -> input, pcurrent -> kf_rlx_sin, pcurrent -> inp_res, pcurrent -> amt_ch );
			i++;
			pcurrent = pcurrent->next;
		}
	}
	while (getchar() != '\n') continue;
}