#include <stdio.h>
#include <windows.h>
#include <conio.h>

#define UP 72
#define DOWN 80

typedef struct _nylones {
	char names[15];
	char character[5][20];
} nylones;

void gotoxy(int x, int y) {
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void removeCursor(void) {
	CONSOLE_CURSOR_INFO cursorInfo;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
	cursorInfo.bVisible = 0;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

char arr[8][61] = {	{"'##::: ##:'##:::'##:'##::::::::'#######::'##::: ##:'########:"},
					{" ###:: ##:. ##:'##:: ##:::::::'##.... ##: ###:: ##: ##.....::"},
					{" ####: ##::. ####::: ##::::::: ##:::: ##: ####: ##: ##:::::::"},
					{" ## ## ##:::. ##:::: ##::::::: ##:::: ##: ## ## ##: ######:::"},
					{" ##. ####:::: ##:::: ##::::::: ##:::: ##: ##. ####: ##...::::"},
					{" ##:. ###:::: ##:::: ##::::::: ##:::: ##: ##:. ###: ##:::::::"},
					{" ##::. ##:::: ##:::: ########:. #######:: ##::. ##: ########:"},
					{"..::::..:::::..:::::........:::.......:::..::::..::........::"}};
char names[10][15] = {	{"Nylon 6"},
						{"Nylon 66"},
						{"Nylon 610"},
						{"Nylon 612"},
						{"Nylon 11"},
						{"Nylon 12"},
						{"Nylon 46"},
						{"MXD 6 Nylon"},
						{"���� Nylon"},};
 					
int main() {
	int check = 0;
	system("cls");
	char c;
	removeCursor();
	system("mode con cols=105 lines=30");
	for(int i = 0; i < 8; i++) {
		for(int j = 0; j < 61; j++) {
			gotoxy(20+j, i+8);
			printf("%c", arr[i][j]);	
		}
	}
	gotoxy(40, 18);
	printf("~ Press Any Key ~");
	while(!_kbhit()) {
	}
	c = _getch();
	system("cls");
	
	while(1) {
		check = 0;
		gotoxy(30,3);
		printf("�˾ƺ��� ���� ���Ϸ��� �����ϼ���.");
		for(int i = 0; i < 21; i++) {
			for(int j = 0; j < 41; j++) {
				if(i == 0 || i == 20 || j == 0 || j == 40) {
					gotoxy(25+j,5+i); 
					printf("��");
				}
			}
		}
		for(int i = 0; i < 10; i++) {
			gotoxy(40,7+i*2);
			printf("%s",names[i]);
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		while(1) {
			if(_kbhit()) {
				c = _getch();
				if(c == 13) break;
				if(c == -32) {
					c = _getch();
					if(c == UP) {
						gotoxy(35,7+check*2);
						printf("  ");
						check -= 1;
						if(check < 0) check = 8;
					}
					else if(c == DOWN) {
						gotoxy(35,7+check*2);
						printf("  ");
						check += 1;
						if(check > 8) check = 0;	
					}
				} 
			}
			gotoxy(35,7+check*2);
			printf("��"); 
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		system("cls");
		switch(check) {
			case 0:
				gotoxy(40,3);
				printf("Nylon 6");
				for(int i = 0; i < 19; i++) {
					for(int j = 0; j < 51; j++) {
						if(i == 0 || i == 18 || j == 0 || j == 50) {
							gotoxy(22+j,5+i); 
							printf("��");
						}
					}
				}
				gotoxy(27,8);
				printf("������ ���");
				gotoxy(27,11);
				printf("������ ���");
				gotoxy(27,14);
				printf("Filler ��ȭ ����");
				gotoxy(27,17);
				printf("����ǰ�� ���");
				gotoxy(27,20);
				printf("�������ũ�� ����� ����ġ����ȭ�� ũ��.");
				Sleep(5000);
				system("cls");
				break;
			case 1:
				gotoxy(40,3);
				printf("Nylon 66");
				for(int i = 0; i < 19; i++) {
					for(int j = 0; j < 51; j++) {
						if(i == 0 || i == 18 || j == 0 || j == 50) {
							gotoxy(22+j,5+i); 
							printf("��");
						}
					}
				}
				gotoxy(27,9);
				printf("������ �ſ� ���");
				gotoxy(27,12);
				printf("�ڱ��ȭ��");
				gotoxy(27,15);
				printf("������ ���");
				gotoxy(27,18);
				printf("�ٸ� ������ Nylon6�� ���");
				Sleep(5000);
				system("cls");
				break;
			case 2:
				gotoxy(40,3);
				printf("Nylon 610");
				for(int i = 0; i < 19; i++) {
					for(int j = 0; j < 51; j++) {
						if(i == 0 || i == 18 || j == 0 || j == 50) {
							gotoxy(22+j,5+i); 
							printf("��");
						}
					}
				}
				gotoxy(27,11);
				printf("����");
				gotoxy(27,16);
				printf("��������� �۴�");
				Sleep(5000);
				system("cls");
				break;
			case 3:
				gotoxy(40,3);
				printf("Nylon 612");
				for(int i = 0; i < 19; i++) {
					for(int j = 0; j < 51; j++) {
						if(i == 0 || i == 18 || j == 0 || j == 50) {
							gotoxy(22+j,5+i); 
							printf("��");
						}
					}
				}
				gotoxy(27,11);
				printf("����");
				gotoxy(27,16);
				printf("��������� �۴�");
				Sleep(5000);
				system("cls");
				break;
			case 4:
				gotoxy(40,3);
				printf("Nylon 11");
				for(int i = 0; i < 19; i++) {
					for(int j = 0; j < 51; j++) {
						if(i == 0 || i == 18 || j == 0 || j == 50) {
							gotoxy(22+j,5+i); 
							printf("��");
						}
					}
				}
				gotoxy(27,11);
				printf("������");
				gotoxy(27,16);
				printf("�������");
				Sleep(5000);
				system("cls");
				break;
			case 5:
				gotoxy(40,3);
				printf("Nylon 12");
				for(int i = 0; i < 19; i++) {
					for(int j = 0; j < 51; j++) {
						if(i == 0 || i == 18 || j == 0 || j == 50) {
							gotoxy(22+j,5+i); 
							printf("��");
						}
					}
				}
				gotoxy(27,9);
				printf("������ �۴�");
				gotoxy(27,12);
				printf("�������");
				gotoxy(27,15);
				printf("����Ư�� ���");
				gotoxy(27,18);
				printf("������ ���");
				Sleep(5000);
				system("cls");
				break;
			case 6:
				gotoxy(40,3);
				printf("Nylon 46");
				for(int i = 0; i < 19; i++) {
					for(int j = 0; j < 51; j++) {
						if(i == 0 || i == 18 || j == 0 || j == 50) {
							gotoxy(22+j,5+i); 
							printf("��");
						}
					}
				}
				gotoxy(27,9);
				printf("����Ư�� ���");
				gotoxy(27,12);
				printf("����� Ư�� ���");
				gotoxy(27,15);
				printf("����ݼ� ���");
				gotoxy(27,18);
				printf("�����µ��� ����");
				Sleep(5000);
				system("cls");
				break;
			case 7:
				gotoxy(40,3);
				printf("MXD 6 Nylon");
				for(int i = 0; i < 19; i++) {
					for(int j = 0; j < 53; j++) {
						if(i == 0 || i == 18 || j == 0 || j == 52) {
							gotoxy(22+j,5+i); 
							printf("��");
						}
					}
				}
				gotoxy(27,9);
				printf("����� �� ����� ���� ġ�� �� ������ȭ�� �۴�.");
				gotoxy(27,12);
				printf("�������µ��� ����");
				gotoxy(27,15);
				printf("���������� �۾� ���м����� ����");
				gotoxy(27,18);
				printf("���强 ���");
				Sleep(5000);
				system("cls");
				break;
			case 8:
				gotoxy(40,3);
				printf("���� Nylon");
				for(int i = 0; i < 19; i++) {
					for(int j = 0; j < 51; j++) {
						if(i == 0 || i == 18 || j == 0 || j == 50) {
							gotoxy(22+j,5+i); 
							printf("��");
						}
					}
				}
				gotoxy(27,11);
				printf("�������");
				gotoxy(27,16);
				printf("���� ���");
				Sleep(5000);
				system("cls");
				break;
			default:
				printf("�̰� ��¡...");
				Sleep(5000);
				system("cls");
				break;	
		} 
	}
	         
	return 0;
}
