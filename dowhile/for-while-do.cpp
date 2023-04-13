//for
#include "iostream"

using namespace std;
int main() 
{
    for(float i = 300.10; i <= 1000.00; i += 250.20) {+
    	cout << "Se presenta 3 valores con la variable for"
        cout << "$" << i << endl;
    }  
}

#include "iostream"

using namespace std;
int main() 
{
    for(int i = 1001; i <= 1003; i ++) {
        cout << i << endl;
    }
	
	cout << "\n";
	
    for(int i = 50; i >= 47; i --) {
    	cout << i << endl;
	}
}

#include "iostream"

using namespace std;
int main() 
{
	int inicio, fin;
	cout << "Ingrese un numero de inicio: ";
	cin >> inicio;
	
	cout << "Ingrese un numero de fin: ";
	cin >> fin; 

    for(int i = inicio; i <= fin; i ++) {
        cout << i << endl;
    }
}

// con ingreso de variable y que vea si es mayor o menor
#include "iostream"

using namespace std;
int main() 
{
	int i, a, b;
	cout << "Ingrese el primer numero: ";
	cin >> a;
	
	cout << "Ingrese el segundo numero: ";
	cin >> b;
	
	if (a < b) {	
		for(int i = a; i <= b; i++ ) {
	        cout << i << endl;
	    }
	}
	else {	
		for(int i = b; i <= a; i++ ) {
	        cout << i << endl;
	    }
	}   
}
