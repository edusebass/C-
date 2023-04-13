//sin prototopio sin parametros
#include <iostream>
#include <conio.h>
using namespace std;

string nom1, nom2, nom3, ap1, ap2, ap3;

void encabezado (){
	cout << "\t\tDESARROLLADORES DE SOFTWARE ALFA" << endl;
	cout << "\tDepartamento de gestion de proyecto" << endl;
	cout << "\tSector las Universidades- Calle Isabel Catolica y Toledo" << endl;
	cout << "\tTelefonos: 02 2968-789" << endl;
	cout << "\tRuc: 1 712366467001 \n" << endl;	
}
void frase(){
	cout << "La combinacion de exito en los negocios es: Haz lo que hace mejor y haz mas de lo que haces\n" << endl;
}
void cliente_1(){
	string pro;
	cout << "Primer cliente" << endl;
	cout << "Ingrese su profesion en iniciales: ";
	cin >> pro;
	cout << "Ingrese su nombre: ";
	cin >> nom1;
	cout << "Ingrese su apellido: ";
	cin >> ap1;
}
void cliente_2(){
	string pro;
	cout << "Segundo cliente" << endl;
	cout << "Ingrese su profesion en iniciales: ";
	cin >> pro;
	cout << "Ingrese su nombre: ";
	cin >> nom2;
	cout << "Ingrese su apellido: ";
	cin >> ap2;
}
void cliente_3(){
	string pro;
	cout << "Tercer cliente" << endl;
	cout << "Ingrese su profesion en iniciales: ";
	cin >> pro;
	cout << "Ingrese su nombre: ";
	cin >> nom3;
	cout << "Ingrese su apellido: ";
	cin >> ap3;
}
void saludos(){
	cout << "La empresa Desarrolladores De Software Alfa le da la mas cordial bienvenida\n" << endl;
}
void servicios(){
	cout << "Nuestros servicios son:" << endl;
	cout << "\t *Crear y desarrollar nuevos programas o sistemas" << endl;
	cout << "\t *Evaluar sistemas nuevos y existentes" << endl;
	cout << "\t *Mejorar programas existentes" << endl;
	cout << "\t *Realizar el mantenimiento correspondiente en los sistemas existentes" << endl;
	cout << "\t *Elaborar manuales operativos y especificaciones tecnicas de los sistemas.\n" << endl;
}
void personal(){
	cout << "Nuestro equipo de trabajo en las áreas de" << endl;
	cout << "Tecnologia (David Zuleta)"	<< endl;
	cout << "Educacion (Sinai Franco) " << endl;
	cout << "Bancario (Suyay Miranda)" << endl;
}


int main (){
	cliente_1();
	cliente_2();
	cliente_3();
	cout << "PRIMER CLIENTE" << endl;
		encabezado();
		frase();
		cout << "Sr. " << nom1 << " " << ap1 << "\n" << endl;
		saludos();
		servicios();
		personal();
	cout << endl;
	cout << "SEGUNDO CLIENTE" << endl;
		encabezado();
		frase();
		cout << "Sr. "<< nom2 << " " << ap2 << "\n" << endl;
		saludos();
		servicios();
		personal();
	cout << endl;
	cout << "TERCER CLIENTE" << endl;
	 	encabezado();
		frase();
		cout << "Sr. " << nom3 << " " << ap3 << "\n" <<endl;
		saludos();
		servicios();
		personal();
}
