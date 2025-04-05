#include <iostream>
#include <string>
#include <sstream>
#include <vector>
std::string convertirUnidad(int num) {
    switch (num) {
        case 1: return "uno";
        case 2: return "dos";
        case 3: return "tres";
        case 4: return "cuatro";
        case 5: return "cinco";
        case 6: return "seis";
        case 7: return "siete";
        case 8: return "ocho";
        case 9: return "nueve";
        default: return "";
    }
}
std::string convertirDecena(int num) {
    switch (num) {
        case 10: return "diez";
        case 11: return "once";
        case 12: return "doce";
        case 13: return "trece";
        case 14: return "catorce";
        case 15: return "quince";
        case 16: return "dieciseis";
        case 17: return "diecisiete";
        case 18: return "dieciocho";
        case 19: return "diecinueve";
        case 20: return "veinte";
        case 30: return "treinta";
        case 40: return "cuarenta";
        case 50: return "cincuenta";
        case 60: return "sesenta";
        case 70: return "setenta";
        case 80: return "ochenta";
        case 90: return "noventa";
        default: return "";
    }
}

std::string convertirDecenas(int num) {
    if (num < 10) return convertirUnidad(num);
    if (num < 20) return convertirDecena(num);
    int decena = (num / 10) * 10;
    int unidad = num % 10;
    return convertirDecena(decena) + (unidad ? " y " + convertirUnidad(unidad) : "");
}

std::string convertirCentena(int num) {
    if (num < 100) return convertirDecenas(num);
    int centena = num / 100;
    int resto = num % 100;
    return (centena == 1 ? "cien" : convertirUnidad(centena) + "Numero fuera de lo permitido en leer") + (resto ? " " + convertirDecenas(resto) : "");
}

std::string convertirNumero(float numero) {
    int parteEntera = static_cast<int>(numero);
    int parteDecimal = static_cast<int>((numero - parteEntera) * 100);
    std::string resultado = convertirCentena(parteEntera);
    if (parteDecimal > 0) {
        resultado += " punto " + convertirDecenas(parteDecimal);
    }
    return resultado;
}

int main() {
    float numero;
    std::cout << "Ingrese un numero: ";
    std::cin >> numero;
    std::cout << "El numero en letras es: " << convertirNumero(numero) << std::endl;
    return 0;
}

