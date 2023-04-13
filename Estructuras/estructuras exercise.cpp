#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>



using namespace std;

struct datos_informativos {
  char nombre[30];
  char apellido[30];
  int edad;
}persona1, persona2;

int main(){
	int segundo;
  // cout << "Ingrese su nombre:\t";cin.getline(persona1.nombre,30,'\n');
  // cout << "Ingrese su apellido:\t";cin.getline(persona1.apellido,30,'\n');
  // cout << "Ingrese su edad:\t";cin >> (persona1.edad);

  // cout << "\n\n Los datos recolectados son: ";
  // cout << "\nUsted se llama " << persona1.nombre << " " << persona1.apellido  << " " << persona1.edad;
	

//  	cout << endl;
//  	cout << "Hora: " << fecha -> tm_hour << endl;
//  	cout << "Minutos: " << fecha -> tm_min << endl;
  	

  	
  	while (1 == 1 ){
	  	time_t t;
	 	t = time(NULL);
	  	struct tm*fecha;
	  	fecha = localtime(&t);
  		system("cls");
  		cout << fecha -> tm_sec;
  		
	}
//  	cout << "Dia: " << fecha -> tm_mday << endl;
//  	cout << "Dia del ano: " << fecha -> tm_yday << endl;
//  	fecha -> tm_wday;
//	cout << "Mes: " << fecha -> tm_mon + 1 << endl;  
//	cout << "Year: " << fecha -> tm_year + 1900 << endl;
	
}