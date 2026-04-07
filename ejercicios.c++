Consola Ejercicio 1 – Evolución y paradigma (conceptual-práctico)
 Diseñe un programa que: 
1. Muestre en pantalla: 
○ Qué es un lenguaje compilado.
○ Qué es un lenguaje interpretado. 
○ A qué tipo pertenece C++.
 2. Permite al usuario seleccionar un paradigma (estructurado u orientado a objetos) y mostrar una breve explicación.
 Temas: E/S, condicionales, cadenas.

#include <iostream>
#include <string>

using namespace std;

int main() {
   
    cout << " TIPOS DE LENGUAJES \n\n";
   
    cout << "Lenguaje compilado:\n";
    cout << "Es aquel cuyo código fuente se traduce completamente a lenguaje máquina\n";
    cout << "antes de ejecutarse, generando un archivo ejecutable.\n\n";
   
    cout << "Lenguaje interpretado:\n";
    cout << "Es aquel cuyo código se ejecuta línea por línea mediante un intérprete,\n";
    cout << "sin generar un archivo ejecutable previo.\n\n";
   
    cout << "¿A qué tipo de lenguaje pertenece C++? \n\n";
    cout << "C++ pertenece al tipo: Lenguaje Compilado.\n\n";
   
    int opcion;
   
    cout << "PARADIGMAS DE PROGRAMACIÓN:\n";
    cout << "Seleccione un paradigma:\n";
    cout << "1. Estructurado\n";
    cout << "2. Orientado a Objetos\n";
    cout << "Ingrese su opcion (1 o 2): ";
    cin >> opcion;
   
    cout << "\n";
   
    if (opcion == 1) {
        cout << "Paradigma Estructurado:\n";
        cout << "Se basa en el uso de funciones, estructuras de control\n";
        cout << "(if, while, for) y una secuencia clara de instrucciones.\n";
    }
    else if (opcion == 2) {
        cout << "Paradigma Orientado a Objetos:\n";
        cout << "Se basa en el uso de clases y objetos, permitiendo\n";
        cout << "modelar entidades del mundo real con atributos y métodos.\n";
   
    }
   

    return 0;
}




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



Ejercicio 3 – Estructuras selectivas Diseñe un programa que: 
● Solicite una nota (0 a 5). 
● Determine si el estudiante:
○ Reprueba (0–2.9) 
○ Aprueba (3.0–4.5)
○ Excelente (4.6–5.0)
 ● Valide que la nota esté en rango. 
Temas: validación, condicionales anidados

Código:

#include <iostream>
using namespace std;
int main()
{
    double nota;
    cout << "Ingrese su nota de (0 a 5): ";
    cin >> nota;

    if (nota >= 0 && nota <= 5) {

        if (nota <= 2.9) {
            cout << "El estudiante REPRUEBA.";
        }
        else{
        
            if (nota>=3 && nota<= 4.5){
                cout << "El estudiante APRUEBA.";

            }
            else
            {
                cout << "El estudiante es EXCELENTE.";
            }
        }
        
    }
    else
    {
        cout << "Error su nota debe ser de (0 a 5)";
    }

    return 0;
}



Ejercicio 4 – Estructuras iterativas Desarrolle un programa que: 
● Solicite un número N.
 ● Muestre:
○ La tabla de multiplicar de N. 
○ La suma acumulada desde 1 hasta N.
○ Determine si N es primo. 
Temas: for, while, acumuladores, lógica algorítmica.

Código:
#include <iostream>

using namespace std;
int main() {
    int N;
    int suma = 0;
    int divisores = 0;

    cout << "Ingrese un número: ";
    cin >> N;

    cout << "\nTabla de multiplicar de " << N << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << N << " x " << i << " = " << N * i << endl;
    }


    for (int i = 1; i <= N; i++) {
        suma += i;
    }
    cout << "Suma acumulada desde 1 hasta " << N << ": " << suma << endl;

    if (N > 1) {
        for (int i = 1; i <= N; i++) {
            if (N % i == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            cout << N << "es primo." << endl;
        } else {
            cout << N << "no es primo." << endl;
        }
    } else {
        cout << N << “no es primo." << endl;
    }

    return 0;
}



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

