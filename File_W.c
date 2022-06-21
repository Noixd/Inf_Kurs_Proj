#include "Header.h"

void File_w(struct dev_sample* head, int count) {

	struct dev_sample* pcurrent = head;
	FILE* data_file;

	if (head == NULL || count < 1) {
		printf("Îòñóòñòâóþò äàííûå!\n");
	}
	else
	{

		data_file = fopen("DATA.txt", "w");

		fprintf(data_file, "%d\n", count);
		while (pcurrent != NULL) {

			fprintf(data_file, "%s\n%lf\n%lf\n%lf\n%d\n", pcurrent->name_device, pcurrent->input, pcurrent->kf_rlx_sin, pcurrent->inp_res, pcurrent->amt_ch);

			pcurrent = pcurrent->next;
		}

		printf("Çàïèñü ïðîøëà óñïåøíî!\n");
		fclose(data_file);
		while (getchar() != '\n') continue;

		return;
	}
}
