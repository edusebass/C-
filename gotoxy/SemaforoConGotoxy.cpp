#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#define color SetConsoleTextAttribute
using namespace std;
void gotoxy(int x,int y){
 HANDLE hcon;
 hcon = GetStdHandle(STD_OUTPUT_HANDLE);
 COORD dwPos;
 dwPos.X = x;
 dwPos.Y= y;
 SetConsoleCursorPosition(hcon,dwPos);
}
void cuadrossemaforo(){
	//marco
	for(int linea_hori=10; linea_hori<=40;linea_hori++)
	{
	gotoxy(linea_hori,4); cout<<"#"; //fila superior
	gotoxy(linea_hori,30); cout<<"#"; //fila inferior
	 }
	for(int linea_vertical=4; linea_vertical<=30;linea_vertical++)
	{
	gotoxy(10,linea_vertical); cout<<"*"; //COLUMNA superior
	gotoxy(40,linea_vertical); cout<<"*"; //COLUMNA inferior
	}
	
}
void primercuadro(){
	for(int i=18; i<=32;i++)
	{
	gotoxy(i,14); cout<<"."; //fila superior
	gotoxy(i,20); cout<<"."; //fila inferior
	 }
	for(int i=14; i<=20;i++)
	{
	gotoxy(18,i); cout<<"."; //COLUMNA superior
	gotoxy(32,i); cout<<"."; //COLUMNA inferior
	}
	for(int i=18; i<=32;i++)
	{
	gotoxy(i,22); cout<<"."; //fila superior
	gotoxy(i,28); cout<<"."; //fila inferior
	 }
	for(int i=22; i<=28;i++)
	{
	gotoxy(18,i); cout<<"."; //COLUMNA superior
	gotoxy(32,i); cout<<"."; //COLUMNA inferior
	}
	//
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	color(hConsole, 2);
	for(int i=18; i<=32;i++)
	{
	gotoxy(i,6); cout<<"."; //fila superior
	gotoxy(i,12); cout<<"."; //fila inferior
	 }
	for(int i=6; i<=12;i++)
	{
	gotoxy(18,i); cout<<"."; //COLUMNA superior
	gotoxy(32,i); cout<<"."; //COLUMNA inferior
	}
	
	
}
void segundocuadro(){
	for(int i=18; i<=32;i++)
	{
	gotoxy(i,22); cout<<"."; //fila superior
	gotoxy(i,28); cout<<"."; //fila inferior
	 }
	for(int i=22; i<=28;i++)
	{
	gotoxy(18,i); cout<<"."; //COLUMNA superior
	gotoxy(32,i); cout<<"."; //COLUMNA inferior
	}
	for(int i=18; i<=32;i++)
	{
	gotoxy(i,6); cout<<"."; //fila superior
	gotoxy(i,12); cout<<"."; //fila inferior
	 }
	for(int i=6; i<=12;i++)
	{
	gotoxy(18,i); cout<<"."; //COLUMNA superior
	gotoxy(32,i); cout<<"."; //COLUMNA inferior
	}
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	color(hConsole, 6);
	for(int i=18; i<=32;i++)
	{
	gotoxy(i,14); cout<<"."; //fila superior
	gotoxy(i,20); cout<<"."; //fila inferior
	 }
	for(int i=14; i<=20;i++)
	{
	gotoxy(18,i); cout<<"."; //COLUMNA superior
	gotoxy(32,i); cout<<"."; //COLUMNA inferior
	}

	
}
void tercercuadro(){
	for(int i=18; i<=32;i++)
	{
	gotoxy(i,14); cout<<"."; //fila superior
	gotoxy(i,20); cout<<"."; //fila inferior
	 }
	for(int i=14; i<=20;i++)
	{
	gotoxy(18,i); cout<<"."; //COLUMNA superior
	gotoxy(32,i); cout<<"."; //COLUMNA inferior
	}
	for(int i=18; i<=32;i++)
	{
	gotoxy(i,6); cout<<"."; //fila superior
	gotoxy(i,12); cout<<"."; //fila inferior
	 }
	for(int i=6; i<=12;i++)
	{
	gotoxy(18,i); cout<<"."; //COLUMNA superior
	gotoxy(32,i); cout<<"."; //COLUMNA inferior
	}
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	color(hConsole, 4);
	for(int i=18; i<=32;i++)
	{
	gotoxy(i,22); cout<<"."; //fila superior
	gotoxy(i,28); cout<<"."; //fila inferior
	 }
	for(int i=22; i<=28;i++)
	{
	gotoxy(18,i); cout<<"."; //COLUMNA superior
	gotoxy(32,i); cout<<"."; //COLUMNA inferior
	}
	
	
	
	
	
}
int main() {
	string nombre;
	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;
	int color;
	cout << "Semaforo \nIngrese un color \n1)Verde \n2)Amarillo \n3)Rojo \n=";
	cin >> color;
	if (color == 1){
		cuadrossemaforo();
		primercuadro();	
	}
	if (color == 2){
		cuadrossemaforo();
		segundocuadro();	
	}
	if (color == 3){
		cuadrossemaforo();
		tercercuadro();	
	}

}