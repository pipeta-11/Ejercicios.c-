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

