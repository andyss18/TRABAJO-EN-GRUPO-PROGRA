#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int opcion;

    while (true) {
    	system("cls");
        cout << "Seleccione un programa a ejecutar:" << endl;
        cout << "1. Calculadora Basica" << endl; //Daniel Huertas
        cout << "2. Numero Par o Impar" << endl; //Daniel Huertas
        cout << "3. Sistema de Conversiones" << endl; //Daniel Huertas
        cout << "12. programa numeros decimales a hexadecimales"<<endl;
		cout << "13. Programa que dibuje figuras" << endl;
        cout << "14. Programa que mueva un punto" << endl;
        cout << "15. Cajero automatico" << endl;
        cout << "16. Programa que calculo la hipotenusa" << endl;
        cout << "18. Agenda Telefonica" << endl; //Daniel Huertas
        cout << "21. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                system("g++ codigo_01_Daniel.cpp -o codigo_01_Daniel & codigo_01_Daniel");  // Compila y ejecuta
                break;
            case 2:
                system("g++ codigo_02_Daniel.cpp -o codigo_02_Daniel & codigo_02_Daniel");  // Compila y ejecuta
                break;
            case 3:
                system("g++ codigo_03_Daniel.cpp -o codigo_03_Daniel & codigo_03_Daniel");  // Compila y ejecuta
                break;
		    case 12:
                system("g++ codigo_12_Francisco.cpp -o codigo_12_Francisco & codigo_12_Francisco");  // Compila y ejecuta
                break;
		   
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
            case 18:
                system("g++ codigo_18_Daniel.cpp -o codigo_18_Daniel & codigo_18_Daniel");  // Compila y ejecuta
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

