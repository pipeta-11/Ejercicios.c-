Ejercicio 5 – Funciones y modularización Implemente un menú con funciones separadas:
 1. Calcular el área de un círculo.
 2. Calcular factorial.
 3. Verificar si un número es par o impar. Cada operación debe estar en una función independiente. 
Temas: funciones, paso de parámetros. 

Código:

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double area, radio;
    cout << "Ingrese el radio: ";
    cin >> radio;
   
    area = 3.1416 * pow(radio,2);
    cout << "El area del circulo es: "<< area << endl;
   
    int numero;
    long long factorial = 1;

    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El factorial no existe para números negativos." << endl;
    } else {
        for (int i = 1; i <= numero; i++) {
            factorial *= i;  
        }
        cout << "El factorial de " << numero << " es: " << factorial << endl;
    }

    int numero2;
   
    cout << "Ingrese un número: ";
    cin >> numero2;
       
    if (numero2 % 2 == 0) {
        cout << "El numero es PAR" << endl;
    } else {
        cout << "El numero es IMPAR" << endl;
    }

    return 0;
}
