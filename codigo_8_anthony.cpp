#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << " Que tabla desea ver?: ";
    cin >> numero;

    if (numero < 0 || numero > 10) {
        cout << " solo le puedo mostrar una sola tabla de multiplicar y tiene que ser de las tablas basicas (0 al 10). " << endl;
    } else {
        for (int i = 0; i <= 10; i++) {
            cout << numero << " x " << i << " = " << numero * i << endl;
        }
    }

    return 0;
}

