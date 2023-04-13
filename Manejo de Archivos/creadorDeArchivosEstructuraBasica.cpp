#include <iostream>
#include <fstream>
#include <iostream>

using namespace std;

void crear_fichero(){
  ofstream archi, archi2;
  archi.open("f_almachi.txt");
  archi2.open("f_eduardo.txt");
  if(archi.fail()){
    cout << "No se puede crear el archivo";
    exit(1);
  }
  archi << "ESFOT PRUEBA1 ARCHIVOñ"; //entrara dentro del archivo
  archi2 << "ESFOT PRUEBA2 ARCHIVOñ" << endl; //entrara dentro del archivo
  archi2 << "ESFOT PRUEBA2 ARCHIVOñ" << endl; //entrara dentro del archivo
}

int main() {
  crear_fichero();
}