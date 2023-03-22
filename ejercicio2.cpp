#include <iostream>
#include <complex>

using namespace std;

int main() {
	double real1, imag1, real2, imag2;

	cout << "Primer número complejo\n";
	cout << "Introduzca la parte real: ";
	cin >> real1;
	cout << "Introduzca la parte imaginaria: ";
	cin >> imag1;

	cout << "Segundo número complejo\n";
	cout << "Introduzca la parte real: ";
	cin >> real2;
	cout << "Introduzca la parte imaginaria: ";
	cin >> imag2;
	
	cout << "Los números complejos son\n";
	cout << real1 << " + " << imag1 << "i" << endl;
	cout << real2 << " + " << imag2 << "i" << endl;
	
	complex<double> z1(real1, imag1);
	complex<double> z2(real2, imag2);
	cout << "Suma: " << z1 + z2 << endl;
	cout << "Producto: " << z1 * z2 << endl;
	
	double M[2][2] = {{real1, -imag1}, {imag1, real1}};
	double N[2][2] = {{real2, -imag2}, {imag2, real2}};
	
	double suma[2][2] = {{M[0][0] + N[0][0], M[0][1] + N[0][1]}, {M[1][0] + N[1][0], M[1][1] + N[1][1]}};
	double producto[2][2] = {{M[0][0] * N[0][0] + M[0][1] * N[1][0], M[0][0] * N[0][1] + M[0][1] * N[1][1]}, {M[1][0] * N[0][0] + M[1][1] * N[1][0], M[1][0] * N[0][1] + M[1][1] * N[1][1]}};
	
	cout << "Matriz suma: " << endl;
	cout << suma[0][0] << " " << suma[0][1] << endl;
	cout << suma[1][0] << " " << suma[1][1] << endl;
	cout << "Matriz producto: " << endl;
	cout << producto[0][0] << " " << producto[0][1] << endl;
	cout << producto[1][0] << " " << producto[1][1] << endl;
	
	return 0;
}
