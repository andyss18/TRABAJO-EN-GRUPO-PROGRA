#include <iostream>
#include <string>
#include <algorithm> // Para reverse()

using namespace std;

bool esPalindromo(string texto) {
    // Eliminar espacios si los hay (opcional)
    texto.erase(remove(texto.begin(), texto.end(), ' '), texto.end());

    // Convertir todo a minúsculas para comparar correctamente
    transform(texto.begin(), texto.end(), texto.begin(), ::tolower);

    // Crear una copia invertida
    string invertido = texto;
    reverse(invertido.begin(), invertido.end());

    return texto == invertido;
}

int main() {
    string entrada;

    cout << "Ingresa una palabra o número: ";
    getline(cin, entrada);

    if (esPalindromo(entrada)) {
        cout << "\"" << entrada << "\" es un palíndromo." << endl;
    } else {
        cout << "\"" << entrada << "\" no es un palíndromo." << endl;
    }

    return 0;
}
