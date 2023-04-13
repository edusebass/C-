{}#include <iostream>
using namespace std;
int main() {
    int i, j, mult, grado;
    cout << "Ingrese el numero de grado: "<< endl;
    cin >> grado;

	switch(grado){
		default:
			while(grado > 6 ){
			cout << "Ingrese el grado otra vez, porfavor: ";
			cin >> grado;
		}
		
		case 1:
		i = 2;
			while( i <= 2) {
				j = 0;
				cout << "TABLA DEL " << i << endl;
					while( j <=10) {
						mult = i * j;
						cout << i << " * " << j << " = " << mult << endl;
						j++;
					}
				i++;
			}
		
			break;
		case 2:
		i = 3;
			while( i <= 4) {
				j = 0;
				cout << "TABLA DEL " << i << endl;
					while( j <=10) {
						mult = i * j;
						cout << i << " * " << j << " = " << mult << endl;
						j++;
					}
				i++;
			}
		
			break;
		
		case 3:
		i = 5;
			while( i <= 6) {
				j = 0;
				cout << "TABLA DEL " << i << endl;
					while( j <=10) {
						mult = i * j;
						cout << i << " * " << j << " = " << mult << endl;
						j++;
					}
				i++;
			}
		
			break;	
		case 4:
		i = 7;
			while( i <= 8) {
				j = 0;
				cout << "TABLA DEL " << i << endl;
					while( j <=10) {
						mult = i * j;
						cout << i << " * " << j << " = " << mult << endl;
						j++;
					}
				i++;
			}
		
			break;	
			
		case 5:
		i = 9;
			while( i <= 9) {
				j = 0;
				cout << "TABLA DEL " << i << endl;
					while( j <=10) {
						mult = i * j;
						cout << i << " * " << j << " = " << mult << endl;
						j++;
					}
				i++;
			}
		
			break;
		
		case 6:
		i = 0;
			while( i <= 10) {
				j = 0;
				cout << "TABLA DEL " << i << endl;
					while( j <=10) {
						mult = i * j;
						cout << i << " * " << j << " = " << mult << endl;
						j++;
					}
				i++;
			}
		
			break;		
	}
}