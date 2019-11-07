#include <iostream>
#include <string>
using namespace std;
void intercambio (int*, int*);
//Prototipo de funcion
; int main()
{
	int a, b;
	cout << "Introduce primer valor: ";
	cin >> a;
	cout << "Introduce segundo valor: ";
	cin >> b;
	cout << endl;
	cout << "Valor de a: " << a <<  "valor de b:" << b << endl;
	intercambio(&a, &b);
	cout << endl << "Despues del intercambio:" << endl << endl;
		  cout << "Valor de la a:" << a <<  "Valor de b : " << b << endl;
	system("pause");
		  return 0;
}
 void intercambio(int* x, int *y)
 {
	 int z;
	 z = *x;
	 *x = *y;
	 *y = z;
 }