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
		case 'а':
			head = Data_input(head, &count);
			break;

		case 'б':
			Table(head, count);
			break;

		case 'в':
			head = Add_itm(head, count);
			break;

		case 'г':
			head = Clr_itm(head, count);
			break;

		case 'д':
			head = Edt_itm(head, count);
			break;

		case 'е':
			Search(head, count);
			break;

		case 'ж':
			head = Bubble(head, count);
			break;

		case 'з':
			File_w(head, count);
			break;

		case 'и':
			head = File_r(head, &count);
			break;

		case '0':
			printf("Завершение программы.");
			return 0;
					
		default:
			printf("Неверное значение");
			while (getchar() != '\n');
			break;
		}
	}
}

