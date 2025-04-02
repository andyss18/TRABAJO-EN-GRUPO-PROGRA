#include <iostream>
using namespace std;

void mostrarMenu();
void consultarSaldo(double saldo);
double depositar(double saldo);
double retirar(double saldo);

int main() {
    double saldo = 1000.0;  // Saldo inicial
    int opcion;

    do {
        mostrarMenu();
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                consultarSaldo(saldo);
                break;
            case 2:
                saldo = depositar(saldo);
                break;
            case 3:
                saldo = retirar(saldo);
                break;
            case 4:
                cout << "Gracias por usar el cajero automático. ¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción no válida, intente de nuevo." << endl;
        }
    } while (opcion != 4);

    return 0;
}

// Función para mostrar el menú
void mostrarMenu() {
    cout << "\n=== Cajero Automático ===" << endl;
    cout << "1. Consultar saldo" << endl;
    cout << "2. Depositar dinero" << endl;
    cout << "3. Retirar dinero" << endl;
    cout << "4. Salir" << endl;
}

void consultarSaldo(double saldo) {
    cout << "Saldo actual: $" << saldo << endl;
}

double depositar(double saldo) {
    double deposito;
    cout << "Ingrese la cantidad a depositar: $";
    cin >> deposito;
    if (deposito > 0) {
        saldo += deposito;
        cout << "Depósito exitoso. Nuevo saldo: $" << saldo << endl;
    } else {
        cout << "Cantidad inválida." << endl;
    }
    return saldo;
}

// Función para retirar dinero
double retirar(double saldo) {
    double retiro;
    cout << "Ingrese la cantidad a retirar: $";
    cin >> retiro;
    if (retiro > 0 && retiro <= saldo) {
        saldo -= retiro;
        cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
    } else {
        cout << "Fondos insuficientes o cantidad inválida." << endl;
    }
    return saldo;
}

