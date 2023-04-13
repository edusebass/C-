//INGRESAR EL AÑO ACTUAL Y QUE NACIO CON FUNCIONES Y CALVCULAR VOID CON PARAMETROS
#include <iostream>
using namespace std;

void edad(int x, int y);

int main() {
  int a, b;
  cout << "Ingrese el año en que nacio: " << endl;
  cin >> a;
  cout << "Ingrese el año actual: " << endl;
  cin >> b;
  edad(a, b);
} 

void edad(int x, int y) {
  int edad;
  edad = y - x;
  cout << "Su edad es: " << edad << endl;
}  

//INGRESAR EL AÑO ACTUAL Y QUE NACIO CON FUNCIONES Y CALVCULAR VOID SIN PARAMETROS
#include <iostream>
using namespace std;

void edad();

int main() {
  
  edad();
} 

void edad() {
  int a, b, eda;
  cout << "Ingrese el año en que nacio: " << endl;
  cin >> a;
  cout << "Ingrese el año actual: " << endl;
  cin >> b;
  eda = b- a;
} 