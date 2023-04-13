// //fibonaci tipo 1 
// #include <iostream>
// using namespace std;

// int main()
// {
// 	int a = 0 , b = 1, c, d, e, ingreso;
	
// 	cout << "Ingrese cuantos numeros de fibonacci quiere: ";
// 	cin >> ingreso;
	
// 	if (ingreso == 1){
// 		cout << a ;
// 	}
// 	if (ingreso == 2){
// 		cout << a << " " << b ;
// 	}
// 	if (ingreso > 2){
// 		c = a + b;
// 		d = c + b;
// 		e = d + c;
// 		cout << a << " "<< b << " " << c << " " << d << " " << e;		
// 	}
// }

//fibonaci manera 2
#include <iostream>
using namespace std;

int main (){
	int a, b, c;
	
	a = 0;
	b = 1;
	cout << a << endl;
	cout << b << endl;
	
	c = a + b;
	cout << c <<endl;
	
	a = b;
	b = c;
	c = a + b;
	cout << c << endl;
	
	a = b;
	b = c;
	c = a + b;
	cout << c << endl;
	
	a = b;
	b = c;
	c = a + b;
	cout << c << endl;
	
	a = b;
	b = c;
	c = a + b;
	cout << c << endl;
}