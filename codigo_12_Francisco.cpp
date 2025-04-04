#include <iostream>
using namespace std;

void decimalToHex(int n) {
    if (n == 0) { cout << "0"; return; }
    string hex = "";
    char hexDigits[] = "0123456789ABCDEF";

    while (n) {
        hex = hexDigits[n % 16] + hex;
        n /= 16;
    }
    cout << hex;
}

int main() {
    int decimal;
    cout << "Introduce un número decimal: ";
    cin >> decimal;
    cout << "El número hexadecimal es: "; 
    decimalToHex(decimal);
    cout << endl;
    return 0;
}


