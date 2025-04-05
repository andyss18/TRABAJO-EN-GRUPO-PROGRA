#include<iostream>
using namespace std;

int main(){
    int op, num1, num2;

    do {
    	system("cls"); // Limpiar pantalla
        cout << "Calculadora Basica" << endl;
        cout << "-------------------" << endl;
        cout << "1 - Suma" << endl;
        cout << "2 - Resta" << endl;
        cout << "3 - Multiplicacion" << endl;
        cout << "4 - Division" << endl;
        cout << "0 - Salir " << endl;
        cout << "Seleccione una operacion: ";
        cin >> op;

        switch (op) {
            case 1: {
                system("cls"); // Limpiar pantalla
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                cout << "La suma es: " << num1 + num2 << endl;
                system ("pause");
            	break;
            	
            }
            case 2: {
                system("cls"); // Limpiar pantalla
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                cout << "La resta es: " << num1 - num2 << endl;
                system ("pause");
                break;
                
            }
            case 3: {
                system("cls"); // Limpiar pantalla
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                if (num1 == 0 || num2 == 0) {
                    cout << "No se puede multiplicar por cero" << endl;
                } else {
                    cout << "La multiplicacion es: " << num1 * num2 << endl;
                }
                system ("pause");
                break;
            }
            case 4: {
                system("cls"); // Limpiar pantalla
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                if (num2 == 0) {
                    cout << "No se puede dividir por cero" << endl;
                } else {
                    cout << "La division es: " << num1 / num2 << endl;
                }
                system ("pause");
                break;
            }
            case 0: {
                system("cls"); // Limpiar pantalla
                cout << "Saliendo de la calculadora..." << endl;
                break;
            }
            default: {
                system("cls"); // Limpiar pantalla
                cout << "Opcion no valida! seleccione una opcion valida." << endl;
                system ("pause");
                break;
            }
        }
    } while (op != 0); // El bucle sigue hasta que el usuario ingresa 0

    return 0;
}

