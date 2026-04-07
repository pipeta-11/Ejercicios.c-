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
