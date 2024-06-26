#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double coeficienteA, coeficienteB, coeficienteC;
    double valorDiscriminante, solucion1, solucion2;
    double parteReal, parteImaginaria;

    cout << "Ingrese los coeficientes de la ecuacion cuadratica " << endl;
    cout << "Coeficiente a: ";
    cin >> coeficienteA;
    cout << "Coeficiente b: ";
    cin >> coeficienteB;
    cout << "Coeficiente c: ";
    cin >> coeficienteC;

    if (coeficienteA == 0) {
        cout << "El coeficiente 'a' no puede ser 0 en una ecuacion cuadratica." << endl;
        return 1;
    }

    valorDiscriminante = (coeficienteB * coeficienteB) - 4 * coeficienteA * coeficienteC;

    if (valorDiscriminante > 0) {
        solucion1 = (-coeficienteB + sqrt(valorDiscriminante)) / (2 * coeficienteA);
        solucion2 = (-coeficienteB - sqrt(valorDiscriminante)) / (2 * coeficienteA);
        cout << "Las raices son reales y diferentes." << endl;
        cout << "x1 = " << solucion1 << ", x2 = " << solucion2 << endl;

    } else if (valorDiscriminante < 0) {
        parteReal = -coeficienteB / (2 * coeficienteA);
        parteImaginaria = sqrt(-valorDiscriminante) / (2 * coeficienteA);
        cout << "Las raices son complejas y diferentes." << endl;
        cout << "x1 = " << parteReal << " + " << parteImaginaria << "i, x2 = " << parteReal << " - " << parteImaginaria << "i" << endl;

    } else {
        solucion1 = -coeficienteB / (2 * coeficienteA);
        cout << "Las raices son reales e iguales." << endl;
        cout << "x1 = x2 = " << solucion1 << endl;
    }

    return 0;
}
