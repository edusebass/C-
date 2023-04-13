// Funciones con parámetros UTILIZAR RETURN sin prototipo
#include <iostream>
using namespace std;



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

string cliente(string pro, string name, string surname){
	string datos;
	datos = pro + " " + name + " " + surname;
	return datos;
}

int main (){
	string pro, name, surname;
	cout << "Primer cliente" << endl;
	cout << "Ingrese su profesion en iniciales: ";
	cin >> pro;
	cout << "Ingrese su nombre: ";
	cin >> name;
	cout << "Ingrese su apellido: ";
	cin >> surname;

	encabezado();
	frase();
	cout << cliente(pro, name, surname) << endl;
	saludos();
	servicios();
	personal();
}

// con parametros con return sin prototipo

#include <iostream>
#include <conio.h>
using namespace std;  

int suma(int x, int y){
	int z;
	z = x + y;
	return z;
}

int main(){
	int x, y, z;
	cout << "Ingrese el primer numero" << endl;
	cin >> x;
	cout << "Ingrese el primer numero" << endl;
	cin >> y;
	cout << "La suma es: " << suma(x, y);
}