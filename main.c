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
		case 'à':
			head = Data_input(head, &count);
			break;

		case 'á':
			Table(head, count);
			break;

		case 'â':
			head = Add_itm(head, count);
			break;

		case 'ã':
			head = Clr_itm(head, count);
			break;

		case 'ä':
			head = Edt_itm(head, count);
			break;

		case 'å':
			Search(head, count);
			break;

		case 'æ':
			head = Bubble(head, count);
			break;

		case 'ç':
			File_w(head, count);
			break;

		case 'è':
			head = File_r(head, &count);
			break;

		case '0':
			printf("Çàâåðøåíèå ïðîãðàììû.");
			return 0;
					
		default:
			printf("Íåâåðíîå çíà÷åíèå");
			while (getchar() != '\n');
			break;
		}
	}
}

