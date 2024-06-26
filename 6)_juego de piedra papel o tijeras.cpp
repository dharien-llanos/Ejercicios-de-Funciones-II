#include <iostream>
#include <cstdlib>  

using namespace std;

int main() {
    int puntajeUsuario = 0;
    int puntajeComputadora = 0;

    cout << "Bienvenido al juego de Piedra, Papel y Tijeras!" << endl;
    cout << "Gana el primero que llegue a 3 puntos." << endl << endl;

    
    srand(123); 

    
    while (puntajeUsuario < 3 && puntajeComputadora < 3) {
       
        cout << "Puntaje - Usuario: " << puntajeUsuario << " Computadora: " << puntajeComputadora << endl;
        cout << endl;

        
        int eleccionUsuario;
        cout << "Elige tu jugada: (0) Piedra, (1) Papel, (2) Tijeras: ";
        cin >> eleccionUsuario;

      
        while (eleccionUsuario < 0 || eleccionUsuario > 2) {
            cout << "Elección inválida. Elige nuevamente: (0) Piedra, (1) Papel, (2) Tijeras: ";
            cin >> eleccionUsuario;
        }

        
        int eleccionComputadora = rand() % 3;

        
        switch (eleccionUsuario) {
            case 0: cout << "Usuario eligió: Piedra" << endl; break;
            case 1: cout << "Usuario eligió: Papel" << endl; break;
            case 2: cout << "Usuario eligió: Tijeras" << endl; break;
        }
        switch (eleccionComputadora) {
            case 0: cout << "Computadora eligió: Piedra" << endl; break;
            case 1: cout << "Computadora eligió: Papel" << endl; break;
            case 2: cout << "Computadora eligió: Tijeras" << endl; break;
        }

       
        if (eleccionUsuario == eleccionComputadora) {
            cout << "Empate en esta ronda!" << endl;
        } else if ((eleccionUsuario == 0 && eleccionComputadora == 2) ||
                   (eleccionUsuario == 1 && eleccionComputadora == 0) ||
                   (eleccionUsuario == 2 && eleccionComputadora == 1)) {
            cout << "Ganaste esta ronda!" << endl;
            puntajeUsuario++;
        } else {
            cout << "La computadora ganó esta ronda!" << endl;
            puntajeComputadora++;
        }

        cout << "---------------------------------" << endl;
    }

   
    cout << "RESULTADO FINAL:" << endl;
    cout << "Puntaje - Usuario: " << puntajeUsuario << " Computadora: " << puntajeComputadora << endl;
    if (puntajeUsuario > puntajeComputadora) {
        cout << "¡Felicidades! ¡Ganaste el juego!" << endl;
    } else {
        cout << "¡La computadora gana el juego!" << endl;
    }

    return 0;
}

