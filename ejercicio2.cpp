#include <iostream>
#include <complex>

using namespace std;

int main() {

	int real1, real2, imag1, imag2; 
	
	cout << "Primer número complejo:\n"
	cout << "Introduzca la parte real: "
	cin >> real1;
	cout << "Ahora, introduzca la parte imaginaria: "
	cin >> imag1;
	
	cout << "Segundo número complejo:\n"
	cout << "Introduzca la parte real: "
	cin >> real2;
	cout << "Ahora, introduzca la parte imaginaria: "
	cin >> imag2;
	
	cout << "Los números introducidos son "endl;
	cout << real1 << "+" << imag1 << "i" endl;
	cout << real2 << "+" << imag2 << "i" endl;
	
	std::complex n1<int>, n2<int>, suma<int>, producto <int>;
	n1 = c(real1, imag1);
	n2 = c(real2, imag2);
	
	suma = n1 + n2;
	producto = n1 * n2;
	cout << "La suma de los números es " << suma endl;
	cout << "El producto de los números es " << producto endl;

	int matrix1[2][2];
	int matrix2[2][2];

	matrix1 = [[real1, -imag1], [imag1, real1]];
	matrix2 = [[real2, -imag2], [imag2, real2]];
	
	
		
	return 0;
}
