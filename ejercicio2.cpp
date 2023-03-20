#include <iostream>
#include <complex>

using namespace std;

int main() {

	int real1, real2, imag1, imag2; 
	
	cout << "Primer número complejo:\n";
	cout << "Introduzca la parte real: ";
	cin >> real1;
	cout << "Ahora, introduzca la parte imaginaria: ";
	cin >> imag1;
	
	cout << "Segundo número complejo:\n";
	cout << "Introduzca la parte real: ";
	cin >> real2;
	cout << "Ahora, introduzca la parte imaginaria: ";
	cin >> imag2;
	
	cout << "Los números introducidos son " << endl;
	cout << real1 << "+" << imag1 << "i" << endl;
	cout << real2 << "+" << imag2 << "i" << endl;
	
	complex<int> n1, n2, suma, producto;
	n1 = complex(real1, imag1);
	n2 = complex(real2, imag2);
	
	suma = n1 + n2;
	producto = n1 * n2;
	cout << "La suma de los números es " << suma << endl;
	cout << "El producto de los números es " << producto << endl;

	int matrix1[2][2];
	int matrix2[2][2];
	
	return 0;
}
