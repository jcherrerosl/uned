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
	n1 = complex<int>(real1, imag1);
	n2 = complex<int>(real2, imag2);
	
	suma = n1 + n2;
	producto = n1 * n2;
	cout << "La suma de los números es " << suma << endl;
	cout << "El producto de los números es " << producto << endl;

	int M[2][2];
	int N[2][2];
	
	M[0][0] = real1;
	M[0][1] = imag1;
	M[1][0] = -imag1;
	M[1][1] = real1;
	
	N[0][0] = real2;
	N[0][1] = imag2;
	N[1][0] = -imag2;
	N[1][1] = real2;
	
	int S[2][2];
	int P[2][2];
	
	for (int i = 0; i < 2; i++){
	    for (int j = 0; j < 0; j++){
	    	S[i][j] = M[i][j] + N [i][j];
	    }
	}
	
	for (int i = 0; i < 2; i++){
	    for (int j = 0; j < 0; j++){
	        for (int k = 0; k < 0; k++){
	            P[i][j] = M[i][k] * N [k][j];
	        }
	    }
	}

	cout << "La suma de las matrices M y N es (" << S[0][0] << "," << S[1][0] << ")" << endl;
	cout << "El producto de las matrices M y N es (" << P[0][0] << "," << P[1][0] << ")" << endl;

	return 0;
}
