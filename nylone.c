#include <stdio.h>
#include <windows.h>
#include <conio.h>

#define UP 72
#define DOWN 80

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
						{"투명 Nylon"},};
 					
int main() {
	int check = 0;
	system("cls");
	char c;
	removeCursor();
	system("mode con cols=105 lines=30");
	for(int i = 0; i < 8; i++) {                        //nylone 출력 부분
		for(int j = 0; j < 61; j++) {
			gotoxy(20+j, i+8);
			printf("%c", arr[i][j]);	
		}
	}
	gotoxy(40, 18);
	printf("~ Press Any Key ~");
	while(!_kbhit()) {                                  //키 누를때까지 기다리기
	}
	c = _getch();
	system("cls");
	
	while(1) {
		check = 0;
		gotoxy(30,3);
		printf("알아보고 싶은 나일론을 선택하세요.");
		for(int i = 0; i < 21; i++) {                               //틀 출력하기
			for(int j = 0; j < 41; j++) {
				if(i == 0 || i == 20 || j == 0 || j == 40) {
					gotoxy(25+j,5+i); 
					printf("□");
				}
			}
		}
		for(int i = 0; i < 10; i++) {                                   //나일론 이름 출력부분
			gotoxy(40,7+i*2);
			printf("%s",names[i]);
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		while(1) {                                                      //방향키로 나일론 선택하는 부분
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
			printf("☞"); 
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		system("cls");
		switch(check) {                                                         //나일론 종류별로 출력하는 부분
			case 0:
				gotoxy(40,3);
				printf("Nylon 6");
				for(int i = 0; i < 19; i++) {
					for(int j = 0; j < 51; j++) {
						if(i == 0 || i == 18 || j == 0 || j == 50) {
							gotoxy(22+j,5+i); 
							printf("□");
						}
					}
				}
				gotoxy(27,8);
				printf("내열성 우수");
				gotoxy(27,11);
				printf("성형성 우수");
				gotoxy(27,14);
				printf("Filler 강화 용이");
				gotoxy(27,17);
				printf("내약품성 우수");
				gotoxy(27,20);
				printf("흡수율이크로 흡수시 물성치수변화가 크다.");
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
							printf("□");
						}
					}
				}
				gotoxy(27,9);
				printf("내열성 매우 우수");
				gotoxy(27,12);
				printf("자기소화성");
				gotoxy(27,15);
				printf("내마모성 우수");
				gotoxy(27,18);
				printf("다른 물성은 Nylon6와 비슷");
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
							printf("□");
						}
					}
				}
				gotoxy(27,11);
				printf("저흡성");
				gotoxy(27,16);
				printf("성형수축률 작다");
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
							printf("□");
						}
					}
				}
				gotoxy(27,11);
				printf("저흡성");
				gotoxy(27,16);
				printf("성형수축률 작다");
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
							printf("□");
						}
					}
				}
				gotoxy(27,11);
				printf("저융점");
				gotoxy(27,16);
				printf("저흡수율");
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
							printf("□");
						}
					}
				}
				gotoxy(27,9);
				printf("비중이 작다");
				gotoxy(27,12);
				printf("저흡수성");
				gotoxy(27,15);
				printf("저온특성 우수");
				gotoxy(27,18);
				printf("내마모성 우수");
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
							printf("□");
						}
					}
				}
				gotoxy(27,9);
				printf("열적특성 우수");
				gotoxy(27,12);
				printf("기계적 특성 우수");
				gotoxy(27,15);
				printf("내충격성 우수");
				gotoxy(27,18);
				printf("가공온도가 높다");
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
							printf("□");
						}
					}
				}
				gotoxy(27,9);
				printf("흡수율 및 흡수에 의한 치수 및 물성변화가 작다.");
				gotoxy(27,12);
				printf("열변형온도가 높다");
				gotoxy(27,15);
				printf("성형수축이 작아 정밀성형에 유리");
				gotoxy(27,18);
				printf("도장성 우수");
				Sleep(5000);
				system("cls");
				break;
			case 8:
				gotoxy(40,3);
				printf("투명 Nylon");
				for(int i = 0; i < 19; i++) {
					for(int j = 0; j < 51; j++) {
						if(i == 0 || i == 18 || j == 0 || j == 50) {
							gotoxy(22+j,5+i); 
							printf("□");
						}
					}
				}
				gotoxy(27,11);
				printf("비결정성");
				gotoxy(27,16);
				printf("투명성 우수");
				Sleep(5000);
				system("cls");
				break;
			default:
				printf("이건 뭐징...");
				Sleep(5000);
				system("cls");
				break;	
		} 
	}
	         
	return 0;
}