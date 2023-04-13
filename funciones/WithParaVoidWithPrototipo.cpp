// Funciones con parámetros UTILIZAR VOID con prototipo

#include <iostream>
using namespace std;

void encabezado();
void frase();
void saludos();
void servicios();
void personal();
void cliente_1(string pro, string name, string surname);

string name, surname;

int main (){
	string pro;
	cout << "Primer cliente" << endl;
	cout << "Ingrese su profesion en iniciales: ";
	cin >> pro;
	cout << "Ingrese su nombre: ";
	cin >> name;
	cout << "Ingrese su apellido: ";
	cin >> surname;
	cliente_1(pro, name, surname);
	
	cout << "CLIENTE" << endl;
	encabezado();
	frase();
	cliente_1(pro, name, surname);
	saludos();
	servicios();
	personal();
}

void cliente_1(string pro, string name, string surname){
	cout << pro << "Sr " << name << " " << surname << "\n" << endl;
}

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

//Funciones con parámetros UTILIZAR VOID con prototipo

#include <iostream>
#include <conio.h>
using namespace std;

void suma(int x, int y);

int a, b;

int main(){
	
	cout << "Ingrese el primer numero: ";
	cin >> a;
	cout << "Ingrese el segundo numero: ";
	cin >> b;
	suma(a, b);
	
}

void suma(int x, int y){
	int su;
	su = x + y;
	cout << "La suma es: " << su << endl; 
}