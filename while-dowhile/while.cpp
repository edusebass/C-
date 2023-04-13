#include "iostream"

using namespace std;
int main() 
{
	int inicio, fin, i;
	string color;
	
	cout << "Ingrese el inicio: ";
	cin >> inicio;
	
	cout << "Ingrese el final: ";
	cin >> fin;
	
	i = inicio;
	
	while ( i <= fin ) {
		cout <<i << "   Ingrese un color: ";
		cin >> color;
		
		i ++;
	}
}

// /////////////////////////////////////////////////////////////////

#include "iostream"

using namespace std;
int main() 
{
	int i;
	i = 1;
	
	while(i <= 100) {
		cout << i << ". Hola mundo" << endl;
		
		i ++;
	}
}