#include <iostream>
#include <iomanip> // para setprecision

using namespace std;

int main() {
	double	temp;
	char	unit;

	cout << "Escriba temperatura con unidades: ";
	cin >> temp >> unit;
	
	double celsius, fahrenheit, kelvin;
	
	switch (unit) {
		case 'C':
			celsius = temp;
			fahrenheit = celsius * 1.8 + 32;
			kelvin = celsius + 273.15;
			break;
		case 'F':
			fahrenheit = temp;
			celsius = (fahrenheit - 32) / 1.8;
			kelvin = celsius + 273.15;
			break;
		case 'K':
			kelvin = temp;
			celsius = kelvin - 273.15;
			fahrenheit = celsius * 1.8 + 32;
			break;
		default:
			cerr << "Unidad de temperatura inválida. Debe ser C, F o K." << endl;
			return 1;
	}
	
	cout << fixed << setprecision(2) << celsius << " C, " << fahrenheit << " F, " << kelvin << " K." << endl;
	
	return 0;
}

