#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Función que convierte un número arábigo a romano
string convertirARomanos(int numero) {
    // Lista de pares ordenados de valores y sus correspondientes representaciones romanas
    vector<pair<int, string>> valores = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"},  {90,  "XC"}, {50,  "L"}, {40,  "XL"},
        {10,  "X"},  {9,   "IX"}, {5,   "V"}, {4,   "IV"}, {1, "I"}
    };

    string resultado;
    
    // Recorremos la lista, restando el valor correspondiente y añadiendo la notación romana
    for (auto const & par : valores) {
        while (numero >= par.first) {
            resultado += par.second;
            numero -= par.first;
        }
    }
    
    return resultado;
}

int main() {
    int numero;
    
    cout << "Ingrese un número arábigo (mínimo 1,000): ";
    cin >> numero;
    
    if (numero < 1000) {
        cout << "El número debe ser al menos 1,000." << endl;
        return 1;
    }
    
    string romano = convertirARomanos(numero);
    cout << "El número " << numero << " en números romanos es: " << romano << endl;
    
    return 0;
}
