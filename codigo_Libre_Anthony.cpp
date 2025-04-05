#include <iostream>
using namespace std;

void factorizar(int numero) {
    cout << "Los factores de " << numero << " son: ";
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int numero;

    while (true) {
        cout << "Ingrese un numero (maximo 20): ";
        cin >> numero;

        if (numero > 20) {
            cout << "No se pudo realizar la operacion, por favor ingrese otro numero." << endl;
        } else {
            factorizar(numero);
            break;
        }
    }

    return 0;
}

