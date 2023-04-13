#include <iostream>
#include <cstdlib>
#include<fstream> 
#include <cstdio>
using namespace std;

int opcion;
void menu(){ //MENU DE OPCIONES
  cout << "\nMenu" << endl;
  cout << "*1 Leer archivo" << endl;
  cout << "*2 Ingresar una frase en el archivo" << endl;
  cout << "*3 Preguntar por mas archivos y poner nombre" << endl;
  cout << "*4 Renombrar archivo" << endl;
  cout << "*5 Elminar archicvo" << endl;
  cout << "*6 Salir" << endl;
  cout << "Ingrese la opcion: "; cin >> opcion;
}
void leer_fichero(){ //LEE LOS ARCHIVOS DE FICHEROS
  string linea;
  ifstream archi("datos.txt");
  while (getline (archi, linea)) {
    cout << linea << endl;
    }
  archi.close();
}

void ingresar(){ // INGRESA ALGUNA FRASE 
  char saludo[100];
  cout << "Introduce una frase: ";
  cin >> saludo;
  ofstream archi("datos.txt", ios::app);
  archi << saludo << endl;
  archi.close();
}

void preguntar(){ // CREA UN NUEVO ARCHIVO PREGUNTANDO EL NOMBRE
  string a, nombre;
  cout << "Desea crear mas archivos 'si' o 'no': "; cin >> a;
  if (a == "si"){
    cout << "Ingrese el nombre del archivo a crear: "; cin >> nombre; 
    ofstream archi(nombre);
    archi.close();
  }
}

void renombrar(){ // RENUEVA EL NOMBRE DEL PROGRAMA SEGUN EL NOMBRE QUE QUERAMOS
  char nombrenuevo[100], nombreviejo[100];
  cout << "Ingrese el  nombre del archivo a renombrar: "; cin >> nombreviejo;
  cout << "Ingrese el nuevo nombre del archivo: "; cin >> nombrenuevo;
  rename(nombreviejo, nombrenuevo );
}

void eliminar(){ // ELIMINA ALGUN ARCHIVO QUE ESPECIFIQUEMOS
  char archivo[100];
  cout << "Ingrese el  nombre del archivo a eliminar: "; cin >> archivo;
  remove(archivo);
}
  
int main(){
  menu();
  while (opcion != 6){
    if (opcion == 1){
      leer_fichero();
      menu();
    }
    if (opcion == 2){
      ingresar(); 
      menu();
    }
    if (opcion == 3){
      preguntar();  
      menu();
    }
    if (opcion == 4){
      renombrar();  
      menu();
    }
    if (opcion == 5){
      eliminar();  
      menu();
    }
  }
  cout << "Saliendo del sistema. Gracias";
}
  
