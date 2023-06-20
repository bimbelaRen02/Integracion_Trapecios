#include <iostream>
#include <cmath>
//#include "muparser-master"
using namespace std;

//Crear herencia de TrapeciosIntegracion para poder usar en el main

int main() {
    double resultado;
    double a, b; // Limites de integracion
    int n; // Numero de trapecios
    // Crear objeto de la clase TrapeciosIntegracion
    TrapeciosIntegracion integracion = new TrapeciosIntegracion();

    // Solicitar los valores de entrada al usuario
    cout << "Ingrese el limite inferior de integracion: ";
    cin >> a;
    cout << "Ingrese el limite superior de integracion: ";
    cin >> b;
    cout << "Ingrese el numero de trapecios: ";
    cin >> n;
    
    // Solicitar la funcion al usuario
    integracion.calcularFuncion();

    // Calcular la integral utilizando el método de integracion por trapecios
    resultado = integracion.calcularIntegral();

    // Imprimir el resultado
    cout << "El resultado de la integral es: " << resultado << endl;
    
    getchar();
    return 0;
}