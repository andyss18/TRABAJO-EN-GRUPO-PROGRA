#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int opcion;

    while (true) {
        cout << "Seleccione un programa a ejecutar:" << endl;
        cout << "13. Programa que dibuje figuras" << endl;
        cout << "14. Programa que mueva un punto" << endl;
        cout << "21. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 13:
                system("g++ Codigo 13 - Andy Carrera.cpp -o Codigo 13 - Andy Carrera && Codigo 13 - Andy Carrera");  // Compila y ejecuta
                break;
            case 14:
                system("g++ codigo 14 - Andy Carrera.cpp -o codigo 14 - Andy Carrera && codigo 14 - Andy Carrera");  // Compila y ejecuta
                break;
            case 21:
                cout << "Saliendo..." << endl;
                return 0;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    }

    return 0;
}

