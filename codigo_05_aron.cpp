#include <iostream>
#include <string>

using namespace std;

string convertirARomano(int numero) {

    int valores[] =    {1000, 900, 500, 400, 100,  90,  50,  40,  10,   9,   5,   4,   1};
    string romanos[] = {"M", "CM","D", "CD","C", "XC","L", "XL","X", "IX","V", "IV","I"};

    string resultado = "";

    // Mientras el número sea mayor que 0
    for (int i = 0; i < 13; i++) {
        while (numero >= valores[i]) {
            resultado += romanos[i];
            numero -= valores[i];
        }
    }

    return resultado;
}

int main() {
    int numero;

    cout << "Ingresa un número (mínimo 1000): ";
    cin >> numero;

    if (numero < 1000) {
        cout << "El número debe ser mayor o igual a 1000." << endl;
    } else {
        string romano = convertirARomano(numero);
        cout << "Número romano: " << romano << endl;
    }

    return 0;
}
