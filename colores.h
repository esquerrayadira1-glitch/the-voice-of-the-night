#include<windows.h>
void NyB();//fondo negro letra blanca
void NyN();//fondo negro letra negra
void ByN();//fondo blanco letra negra
void AyV();//fondo amarillo letra verde
void AyM();//fondo amarillo letra morada
void MyM();//fondo morado letra morada
void NyV();//fondo negro letra verde
void AyA();//fondo amarillo letra amarilla
void AGyAG();//fondo aguamarino y letra aguamarina
void AZyB();//fondo azul letra blanca
void NyR();//fondo negro letra roja
void ByV();//fondo blaco letra morada
void PyV();//fondo morado letra verde
void RyR();
void MyAZ();
void CLAROyB();
void NyAZ();
void NyG();
void NyA();
void NyB(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);	
}

void NyN(){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
}

void ByN(){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
}

void AyV(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),106);
	
}

void NyV(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	
}
void AyA(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),230);
	
}
void AyM(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),94);
	
}
void MyM(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),93);
}
void AGyAG(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),195);
}

void AZyB(){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),31);
}

void NyR(){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
}
void ByV(){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),250);
}
void PyV(){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),218);
}

void RyR(){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),196);
}

void MyAZ(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),209);
}

void CLAROyB(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),159);
}

void NyAZ(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
}
void NyG(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
}

void NyA(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
}
