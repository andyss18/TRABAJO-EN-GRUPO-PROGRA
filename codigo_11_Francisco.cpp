#include <iostream>
using namespace std;

void decimalBinary(int n) {
    if (n > 1) 
        decimalBinary(n / 2); 
    cout << n % 2;  
}

int main() {
    int decimal;
    cout << "Introduce un numero decimal: ";
    cin >> decimal;

    cout << "El numero binario es: ";
    decimalBinary(decimal);
    cout << endl;

    return 0;
}

