#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int opcion;

    while (true) {
        cout << "Seleccione un programa a ejecutar:" << endl;
        cout << "13. Programa que dibuje figuras" << endl;
        cout << "14. Programa que mueva un punto" << endl;
        cout << "15. Cajero automatico" << endl;
        cout << "16. Programa que calculo la hipotenusa" << endl;
        cout << "21. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 13:
                system("g++ codigo_13_andy.cpp -o codigo_13_andy & codigo_13_andy");  // Compila y ejecuta
                break;
            case 14:
                system("g++ codigo_14_andy.cpp -o codigo_14_andy && codigo_14_andy");  // Compila y ejecuta
                break;
            case 15:
                system("g++ codigo_15_andy.cpp -o codigo_15_andy & codigo_15_andy");  // Compila y ejecuta
                break;
            case 16:
                system("g++ codigo_16_andy.cpp -o codigo_16_andy && codigo_16_andy");  // Compila y ejecuta
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

