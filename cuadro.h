#include <windows.h>
void gotoxy(int x,int y);
void tablita();
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }

void tablita() {
    	int x,y;
 	for(y=0; y<=23; y++){
 		gotoxy(0,y);
 		printf("#");
 		gotoxy(79,y);
 		printf("#");
	 }
	 for(x=0; x<=79; x++){
	 	gotoxy(x,0);
	 	printf("#");
	 	gotoxy(x,4);
	 	printf("#");
	 	gotoxy(x,19);
	 	printf("#");
	 	gotoxy(x,23);
	 	printf("#");
	 }
	 gotoxy(1,1);
	 printf("Yadira Natalie Frausto Esquerra   305");
	 gotoxy(1,4);
	 printf("#");
	 gotoxy(2,5);
	gotoxy(0,25);
}
