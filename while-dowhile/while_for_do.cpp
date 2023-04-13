#include "iostream"

using namespace std;
int main() 
{
	string nombre, apellido;
	int i;
	
	cout << "while" << endl;
	
    for(int i = 1; i <= 2; i ++) {
        cout << "Ingrese su nombre: " << endl;
        cin >> nombre;
    }
	
	cout << "while" << endl;
	
    while(i <= 5) {
    	cout << "Ingrese su nombre: " << endl;
        cin >> nombre;  
        
        i ++; // esto siempre se pone en el while
	  }
  cout << "do-while" << endl;
	
	  do {
  		cout << "Ingrese su nombre: " << endl;
          cin >> nombre;  
  	}
  	while(i <= 5, i --);
}