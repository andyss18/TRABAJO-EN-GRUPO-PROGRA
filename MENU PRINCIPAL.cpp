#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int opcion;

    while (true) {
        cout << "Seleccione un programa a ejecutar:" << endl;
        cout << "7. programa conversion de numeros con decimal a letras:" << endl;
        cout << "8. tabla de multiplicar" << endl;
        cout << "9. todas las tablas de multiplicar del 1 al 10:" << endl;
        cout << "12. programa numeros decimales a hexadecimales"<< endl;
		cout << "13. Programa que dibuje figuras" << endl;
        cout << "14. Programa que mueva un punto" << endl;
        cout << "15. Cajero automatico" << endl;
        cout << "16. Programa que calculo la hipotenusa" << endl;
        cout << "17. Factores de cada numero" << endl;
        cout << "21. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion) {
           
            case 7:
                system("g++ codigo_7_anthony.cpp -o codigo_7_anthony & codigo_7_anthony");  // Compila y ejecuta
                break; 
            case 8:
                system("g++ codigo_8_anthony.cpp -o codigo_8_anthony & codigo_8_anthony");  // Compila y ejecuta
                break;
            case 9:
                system("g++ codigo_9_anthony.cpp -o codigo_9_anthony & codigo_9_anthony");  // Compila y ejecuta
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
       	    case 17:
                system("g++ codigo_Libre_Anthony.cpp -o codigo_Libre_Anthony & codigo_Libre_Anthony");  // Compila y ejecuta
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

