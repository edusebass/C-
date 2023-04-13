#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string.h>
using namespace std;

void gotoxy(int x,int y){
 HANDLE hcon;
 hcon = GetStdHandle(STD_OUTPUT_HANDLE);
 COORD dwPos;
 dwPos.X = x;
 dwPos.Y= y;
 SetConsoleCursorPosition(hcon,dwPos);
}

int cantidadpro, precio, ruc, i, sumaprecio, cantidadind, totalprecio, sumatotal, precioindtotal, totalfactura, subtotal;
string descripcion;
float iva;
string nombre, direccion, apellido;

void encabezado(){
	for(int i = 35; i< 80; i++){
		gotoxy(i, 0); cout << ".";
		gotoxy(i, 9); cout << ".";
	}
	for(int i = 0; i< 10; i++){
		gotoxy(35, i); cout << ".";
	}
	for(int i = 0; i< 32; i++){
		gotoxy(80, i); cout << ".";
	}
	for(int i = 9; i< 32; i++){
		gotoxy(0, i); cout << ".";
	}
	for(int i = 0; i< 35; i++){
		gotoxy(i, 9); cout << ".";
	}
	for(int i = 0; i< 80; i++){
		gotoxy(i, 12); cout << ".";
	}
	for(int i = 0; i< 80; i++){
		gotoxy(i, 15); cout << ".";
	}	
	for(int i = 0; i< 80; i++){
		gotoxy(i, 18); cout << ".";
	}
	for(int i = 47; i< 80; i++){
		gotoxy(i, 31); cout << ".";
	}
	for(int i = 10; i< 32; i++){
		gotoxy(47, i); cout << ".";
	}
	for(int i = 10; i< 19; i++){
		gotoxy(15, i); cout << ".";
	}
	gotoxy(55, 1); cout << "SEVEN Z.A" << endl;
	gotoxy(48, 2); cout << "SEVEN - EMPRENDE CONTIGO" << endl;
	gotoxy(40, 3); cout << "RUC: 1712446226" << endl;
	gotoxy(40, 4); cout << "AV. CONDOR ÑAN Y LIRA ÑAN" << endl;
	gotoxy(48, 5); cout << "FACTURA ELECTRONICA" << endl;
	gotoxy(41, 6); cout << "SERIE: 001-001" << endl;
	gotoxy(48, 7); cout << "0000000000000001" << endl;
	gotoxy(41, 8); cout << "FECHA: 19-04-2022" << endl;
	
}

void ingdatos(){
	cout << "DATOS PARA LA FACTURA" << endl;
	cout << "A continuacion ingrese sus datos para la factura: " << endl;
	
	cout << "Ingrese nombre: " << endl;
	cin >> nombre;
	cout << "Ingrese apellido: " << endl;
	cin >> apellido;
	cout << "Ingrese RUC: " << endl;
	cin >> ruc;
	cout << "Ingrese direccion: " << endl;
	cin >> direccion;
}

void mostrardatos(){
	gotoxy(1, 10); cout << "CLIENTE:" << endl;
	gotoxy(1, 11); cout << nombre << " " << apellido << endl;
	gotoxy(50, 10); cout << "RUC: " << endl;
	gotoxy(50, 11); cout << ruc << endl;
	gotoxy(1, 13); cout << "DIRECCION: " << endl;
	gotoxy(1, 14); cout << direccion << endl;
	gotoxy(1, 16); cout << "CANTIDAD" << endl;	
	gotoxy(1, 17); cout << cantidadind << endl;	
	gotoxy(25, 16); cout << "DETALLE" << endl;	
	gotoxy(25, 17); cout << descripcion << endl;
	gotoxy(48, 16); cout << "PRECIO UNITARIO" << endl;	
	gotoxy(48, 17); cout << precio << endl;
	gotoxy(70, 16); cout << "TOTAL" << endl;	
	gotoxy(70, 17); cout << subtotal << endl;
	gotoxy(48, 25); cout << "SUBTOTAL" << endl;	
	gotoxy(70, 25); cout << subtotal << endl;
	gotoxy(48, 28); cout << "IVA 0%" << endl;	
	gotoxy(70, 28); cout << "       " << endl;
	gotoxy(48, 28); cout << "IVA 12%" << endl;	
	gotoxy(70, 28); cout << iva << endl;
	gotoxy(48, 30); cout << "TOTAL" << endl;	
	gotoxy(70, 30); cout << totalfactura << endl;
}

void detalleProductos(){
	cout << "----A continuacion ingrese datos sobre la compra-------" << endl;
	cout << "Ingrese cuantas cantidades del producto compro: " << endl;
	cin >> cantidadind;
	cout << "De una descripcion del producto: " << endl;
	cin >> descripcion;
	cout << "Ingrese el precio del producto" << endl;
	cin >> precio;
	subtotal = precio * cantidadind;
	cout << "Subtotal: " << subtotal << endl;
	iva = (subtotal * 12)/100;
	totalfactura = subtotal * 1.12;
	
}


int main() {
	ingdatos();
	detalleProductos();
	system("cls");
	encabezado();
	mostrardatos();
	
}