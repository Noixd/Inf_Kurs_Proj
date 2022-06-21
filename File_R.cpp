#include "Header.h"

struct dev_sample *File_r(struct dev_sample* head, int* count) {

	struct dev_sample* pcurrent = NULL, * psave = NULL;
	FILE* data_file;

		if ((data_file = fopen("DATA.txt", "r")) == NULL) {
			printf("Невозможно открыть файл");
			exit(2);
		}

		fscanf(data_file, "%d", count);

		for (int i = 0; i < *count; i++)
		{
			pcurrent = (struct dev_sample*)malloc(sizeof(struct dev_sample));

			if (head == NULL) head = pcurrent;
			else psave->next = pcurrent;

			pcurrent->next = NULL;

			fscanf(data_file, "%s", pcurrent->name_device);
			fscanf(data_file, "%lf", &pcurrent->input);
			fscanf(data_file, "%lf", &pcurrent->kf_rlx_sin);
			fscanf(data_file, "%lf", &pcurrent->inp_res);
			fscanf(data_file, "%d", &pcurrent->amt_ch);

			psave = pcurrent;

			pcurrent = head;
		}

		if (head != NULL) {
			printf("Запись прошла успешно!\n");
			Table(head, *count);
			fclose(data_file);
		}
	return head;
}