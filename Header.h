#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#define windowSize 60
#define bufferSize 40
#define arraySize bufferSize + windowSize

struct dev_sample
{
	char name_device[20];
	double input;
	double kf_rlx_sin;
	double inp_res;
	int amt_ch;
	struct dev_sample* next;
};

char Sel_menu (void);
void Table (struct dev_sample* head, int count);
void Search (struct dev_sample* head, int count);
void File_w (struct dev_sample* head, int count);
struct dev_sample* File_r(struct dev_sample* head, int* count);
struct dev_sample* Data_input (struct dev_sample*, int* count);
struct dev_sample* Add_itm (struct dev_sample* head, int count);
struct dev_sample* Clr_itm (struct dev_sample* head, int count);
struct dev_sample* Edt_itm (struct dev_sample* head, int count);
struct dev_sample* Bubble (struct dev_sample* head, int count);

#endif // !HEADER_H
