#include "iostream"

using namespace std;
int main() 
{
	int val;
	do {
		cin >> val;
	}
	while(val > 0); // si esto se cumple la accion de do se hace y se sigue ejecutando
					// no hay un limite de inputs
}
///////////////////////////////////////////////////////////////////////

#include "iostream"

using namespace std;
int main() 
{
	int val;
	do {
		cin >> val;
	}
	while(val >=5 && val <= 10); // si esto se cumple la accion de do se hace y se sigue ejecutando
					// no hay un limite de inputs
}
