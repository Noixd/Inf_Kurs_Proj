#include "Header.h"

int main(int argc, char* argv[]) {

	setlocale(LC_ALL, "ru");
	system("chcp 1251 > NULL");

	int count=0;
	char menu;

	dev_sample* head = NULL;

	while (1) {

		menu = Sel_menu();

		switch (menu)
		{
		case '�':
			head = Data_input(head, &count);
			break;

		case '�':
			Table(head, count);
			break;

		case '�':
			head = Add_itm(head, count);
			break;

		case '�':
			head = Clr_itm(head, count);
			break;

		case '�':
			head = Edt_itm(head, count);
			break;

		case '�':
			Search(head, count);
			break;

		case '�':
			head = Bubble(head, count);
			break;

		case '�':
			File_w(head, count);
			break;

		case '�':
			head = File_r(head, &count);
			break;

		case '0':
			printf("���������� ���������.");
			return 0;
					
		default:
			printf("�������� ��������");
			while (getchar() != '\n');
			break;
		}
	}
}

