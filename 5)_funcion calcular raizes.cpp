#include <iostream>
#include <cmath>
using namespace std;
void calcularRaices(double a, double b, double c, double *raiz1, double *raiz2, bool *sonReales) 
{
    double discriminante = b * b - 4 * a * c;

    if (discriminante >= 0) {
        *sonReales = true;
        *raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        *raiz2 = (-b - sqrt(discriminante)) / (2 * a);
    } else {
        *sonReales = false;
        *raiz1 = -b / (2 * a);
        *raiz2 = sqrt(-discriminante) / (2 * a);
    }
}

int main() {
    double a, b, c;
    double raiz1, raiz2;
    bool sonReales;

    cout << "Ingrese los coeficientes de la ecuacion cuadratica " << endl;
    cout << "Coeficiente a: ";
    cin >> a;
    cout << "Coeficiente b: ";
    cin >> b;
    cout << "Coeficiente c: ";
    cin >> c;

    if (a==0) {
        cout << "El coeficiente 'a' no puede ser 0 en una ecuacion cuadratica." << endl;
        return 1;
    }

    calcularRaices(a, b, c, &raiz1, &raiz2, &sonReales);
    
    if (sonReales) {
        if (raiz1 == raiz2) {
            cout << "Las raices son reales e iguales." << endl;
            cout << "x1 = x2 = " << raiz1 << endl;
        } else {
            cout << "Las raices son reales y diferentes." << endl;
            cout << "x1 = " << raiz1 << ", x2 = " << raiz2 << endl;
        }
    } else {
        cout << "Las raices son complejas y diferentes." << endl;
        cout << "x1 = " << raiz1 << " + " << raiz2 << "i, x2 = " << raiz1 << " - " << raiz2 << "i" << endl;
    }
    return 0;
}

