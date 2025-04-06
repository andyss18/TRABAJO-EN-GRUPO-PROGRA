#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int opcion;
    while (true) {
    	cout << "Seleccione un programa a ejecutar:" << endl;
        cout << "1. Calculadora Basica" << endl; //Daniel Huertas
        cout << "2. Numero Par o Impar" << endl; //Daniel Huertas
        cout << "3. Sistema de Conversiones" << endl; //Daniel Huertas
        cout << "4. Determinar si una palabra o un numero es palindromo"<<endl;
        cout << "5. Conversion de numeros arabigos a romanos"<<endl; 
        cout << "6. Conversion de numeros enteros a letras"<<endl;
        cout << "7. Conversion de numeros enteros con decimal a letras"<<endl; 
        cout << "8. Una tabla de multiplicar"<<endl; 
        cout << "9. Todas las tablas de multiplicar del 1 al 10"<<endl; 
        cout << "10. Crea forma grafica la multiplicacion manual"<<endl; 
		cout << "11. Programa de conversion de numeros decimales a binario"<<endl;
		cout << "12. programa numeros decimales a hexadecimales"<<endl;
     	cout << "13. Programa que dibuje figuras" << endl;
        cout << "14. Programa que mueva un punto" << endl;
        cout << "15. Cajero automatico" << endl;
        cout << "16. Programa que calculo la hipotenusa" << endl;
        cout << "17. Factores de los numeros"<<endl; 
        cout << "18. Agenda Telefonica" << endl; //Daniel Huertas
        cout << "19. Programa contador del 1 al 100"<<endl;
        cout << "20. Palabra al reves" <<endl;
		cout << "21. Salir" << endl;
        cout << "Ingrese una opcion: ";
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
            case 4:
                system("g++ codigo_04_aron.cpp -o codigo_04_aron & codigo_04_aron");
                break;
            case 5:
                system("g++ codigo_05_aron.cpp -o codigo_05_aron & codigo_05_aron");  
                break;
            case 6:
                system("g++ codigo_06_aron.cpp -o codigo_06_aron & codigo_06_aron");  
                break;
            case 7:
                system("g++ codigo_7_anthony.cpp -o codigo_7_anthony & codigo_7_anthony");  // Compila y ejecuta
                break;
            case 8:
                system("g++ codigo_8_anthony.cpp -o codigo_8_anthony & codigo_8_anthony");  // Compila y ejecuta
                break;
            case 9:
                system("g++ codigo_9_anthony.cpp -o codigo_9_anthony & codigo_9_anthony");  // Compila y ejecuta
                break;
	        case 10:
                system("g++ codigo_10_Francisco.cpp -o codigo_10_Francisco & codigo_10_Francisco"); 
                break;
		    case 11:
                system("g++ codigo_11_Francisco.cpp -o codigo_11_Francisco && codigo_11_Francisco");  // Compila y ejecuta
                break;
		   	case 12:
                system("g++ codigo_12_Francisco.cpp -o codigo_12_Francisco & codigo_12_Francisco"); 
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
                system("g++ codigo_Libre_Anthony.cpp -o codigo_Libre_Anthony & codigo_Libre_Anthony");  
                break;
            case 18:
                system("g++ codigo_libre_Daniel.cpp -o codigo_libre_Daniel & codigo_libre_Daniel");  // Compila y ejecuta
                break;
            case 19:
                system("g++ codigo_libre_Francisco.cpp -o codigo_libre_Francisco & codigo_libre_Francisco");  // Compila y ejecuta
                break;
            case 20:
                system("g++ codigo_libre_aron.cpp -o codigo_libre_aron & codigo_libre_aron");
                break;
		    case 21:
                cout << "Saliendo..." << endl;
                return 0;
            default:
                cout << "opcion no valida! Intente de nuevo." << endl;
        }
    }
    return 0;
}

