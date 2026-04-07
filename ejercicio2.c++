Ejercicio 2 – Operaciones matemáticas Solicite al usuario dos números y:
 ● Calcule suma, resta, multiplicación y división.
 ● Valide que no haya división por cero.
 ● Use operadores relacionales para indicar cuál número es mayor. 
Temas: variables, operadores, if-else. 

Código:
#include <iostream>
using namespace std;
 
int main() {
	double num1, num2;
	cout << "Ingrese el primer número: ";
	cin >> num1;
	cout << "Ingrese el segundo número: ";
	cin >> num2;
	
	cout << "Suma: " << num1 + num2 << endl;
	cout << "Resta: " << num1 - num2 << endl;
	cout << "Multiplicación: " << num1 * num2 << endl;
	
	if (num2 != 0) {
    	cout << "Division: " << num1 / num2 << endl;
	} else {
    	cout << "No se puede dividir entre cero." << endl;
	}
	if (num1 > num2) {
    	cout << num1 << " Es mayor que " << num2 << endl;
	} else if (num1 < num2) {
    	cout << num2 << " Es mayor que " << num1 << endl;
	} else {
    	cout << Ambos números son iguales." << endl;
	}
	return 0;
	
}
