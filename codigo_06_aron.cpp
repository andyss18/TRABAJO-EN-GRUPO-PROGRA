#include <iostream>
#include <string>

using namespace std;

string unidades(int n) {
    string u[] = {"cero", "uno", "dos", "tres", "cuatro", "cinco",
                  "seis", "siete", "ocho", "nueve"};
    return u[n];
}

string decenas(int n) {
    string d[] = {"diez", "once", "doce", "trece", "catorce", "quince",
                  "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
    string d2[] = {"", "", "veinte", "treinta", "cuarenta", "cincuenta",
                   "sesenta", "setenta", "ochenta", "noventa"};

    if (n < 10)
        return unidades(n);
    else if (n >= 10 && n < 20)
        return d[n - 10];
    else {
        int dec = n / 10;
        int uni = n % 10;
        if (uni == 0)
            return d2[dec];
        else if (dec == 2)
            return "veinti" + unidades(uni);
        else
            return d2[dec] + " y " + unidades(uni);
    }
}

string centenas(int n) {
    string c[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos",
                  "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

    if (n == 100)
        return "cien";
    
    int cent = n / 100;
    int resto = n % 100;

    if (cent == 0)
        return decenas(resto);
    else
        return c[cent] + (resto > 0 ? " " + decenas(resto) : "");
}

string miles(int n) {
    if (n < 1000)
        return centenas(n);

    int mil = n / 1000;
    int resto = n % 1000;

    string parteMil = (mil == 1) ? "mil" : centenas(mil) + " mil";
    if (resto == 0)
        return parteMil;
    else
        return parteMil + " " + centenas(resto);
}

int main() {
    int numero;

    cout << "Ingresa un número entre 0 y 9999: ";
    cin >> numero;

    if (numero < 0 || numero > 9999) {
        cout << "Número fuera de rango." << endl;
    } else {
        cout << "En letras: " << miles(numero) << endl;
    }

    return 0;
}
