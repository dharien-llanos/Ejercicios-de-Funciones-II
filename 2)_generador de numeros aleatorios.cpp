#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int cantidadNumeros;
	int valorMaximo;
	int numero_Aleatorio;
    cout << " Introdusca el valor maximo para los numeros aleatorios: "; 
    cin >> valorMaximo;
    cout << "Introdusca la cantidad de numeros aleatorios a generar: ";
    cin >> cantidadNumeros;

    cout << "Numeros aleatorios generados: ";
    for (int i = 0;i<cantidadNumeros;i++) 
	{
        numero_Aleatorio = rand() % (valorMaximo + 1);
        cout<<numero_Aleatorio << " ";
    }

    return 0;
}

