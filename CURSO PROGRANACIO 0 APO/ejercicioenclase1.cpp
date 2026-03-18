/*
Ejerciico 1
Autor: Mirian LL
Fecha: 06 de marzo del 2026
Enunciado suma de dos enteros(I/O)
            Pida dos numeros enteros y muestre la suma de dichos numeros.
            
*/
#include <iostream>
using namespace std;

int main (){
    //Declarar
    int numero1 = 0, numero2 = 0;

    //Entrada de datos
    cout << "Ingrese el primer numero:"<< endl;
    cin >> numero1;

    cout << "Ingrese el segundo numero:"<< endl;
    cin >> numero2;

    // Proceso

    int suma = numero1 + numero2;

    // Resutado

    cout <<"Suma =" <<suma << endl;

    return 0;

}

