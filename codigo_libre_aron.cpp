#include <iostream>
#include <string>
#include <algorithm> // Para reverse()

using namespace std;

int main() {
    string palabra;

    cout << "Ingresa una palabra: ";
    cin >> palabra;

    // Usamos reverse del STL para invertir la palabra
    reverse(palabra.begin(), palabra.end());

    cout << "Palabra al revés: " << palabra << endl;

    return 0;
}
