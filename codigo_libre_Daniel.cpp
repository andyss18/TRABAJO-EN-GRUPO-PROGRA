#include <iostream>

using namespace std;

unsigned long long factorial(int n) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}
unsigned long long calculo_coeficientes(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

// Funcion para calcular la extension del binomio
void extension(int exponente) {
    unsigned long long coeficientes[66]; // Asumimos un tamano maximo de 65 para inicializar el array

    // Calcular los coeficientes binomiales
    for (int k = 0; k <= exponente; ++k) {
        coeficientes[k] = calculo_coeficientes(exponente, k);
    }

    // Imprimir el desarrollo del binomio
    system("cls");
    cout << endl << "        Desarrollo del binomio:" << endl << endl;
    for (int k = 0; k <= exponente; ++k) {
        if (k > 0) cout << " + ";
        if (coeficientes[k] > 1) {
            cout << coeficientes[k];
        }
        if (exponente - k > 0) {
            cout << "a";
            if (exponente - k > 1) cout << "^" << (exponente - k);
        }
        if (k > 0) {
            cout << "b";
            if (k > 1) cout << "^" << k;
        }
    }
    cout << endl << endl;
    system("pause");}

int main() {
    int exponente, op;
    do {
        system("cls"); // Limpiar pantalla
        cout << "Desarrollo del Binomio" << endl;
        cout << "-------------------" << endl;
        cout << "1 - Ingresar potencia a desarrollar" << endl;
        cout << "2 - Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> op;

        switch (op) {
            case 1: {
            	system("cls");
                cout << "Este programa calcula el desarrollo de un binomio entre 1 y 65" << endl << endl;
                cout << "Ingrese el exponente del binomio que desea desarrollar: ";
                cin >> exponente;
                if (exponente <= 0) {
                	system("cls");
                    cout << endl << "Error: El exponente debe ser un numero entero positivo." << endl << endl;
                    system("pause");
                    break;
                }
                if (exponente >= 66) {
                	system("cls");
                    cout << endl << "Error: El numero no puede ser mayor que 65" << endl << endl;
                    system("pause");
                    break;
                }
                extension(exponente);
                break;
            }
            case 2: {
                system("cls"); 
                cout << "Saliendo del sistema..." << endl;
                break;
            }
            default: {
                system("cls"); 
                cout << "Opcion no valida! seleccione una opcion valida." << endl;
                system("pause");
                break;
            }
        }
    } while (op != 2); // El bucle sigue hasta que el usuario ingresa 2 para salir

    return 0;
}

