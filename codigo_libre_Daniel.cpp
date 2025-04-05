#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Estructura que almacena el contacto
struct Contacto {
    string nombre;
    string telefono;};

// Clase para gestionar la agenda
class Agenda_Telefonica {
private:
    vector<Contacto> contactos;

public:
    // Método para agregar un contacto
    void Agregar_Contacto (string nombre, string telefono) {
        Contacto Nuevo_Contacto;
        Nuevo_Contacto.nombre = nombre;
        Nuevo_Contacto.telefono = telefono;
        contactos.push_back(Nuevo_Contacto);} //Agrega el contacto al final de la lista
    
    // Método para mostrar todos los contactos
    void Mostar_Contactos() {
        if (contactos.empty()) {     //comprueba si la cadena esta vacia
            cout << "No hay contactos en la agenda." << endl;
            return;}

        cout << "Lista de Contactos:" << endl;
        for (const auto& contacto : contactos) {
            cout << "Nombre: " << contacto.nombre << " | Telefono: " << contacto.telefono << endl<<endl;}
    }

    // Método para buscar un contacto por nombre
    void Buscar_Contacto(string nombre) {
        bool encontrado = false;
        for (const auto& contacto : contactos) {
            if (contacto.nombre == nombre) {
                cout << "Contacto encontrado: " << endl;
                cout << "Nombre: " << contacto.nombre << " | Telefono: " << contacto.telefono << endl<<endl;
                encontrado = true;
                break;}
        }
        if (!encontrado) {
            cout << "No se encontro el contacto con el nombre: " << nombre << endl;}
    }
};

int main() {
    Agenda_Telefonica agenda;
    int opcion;
    string nombre, telefono;

    do {
        // Menú de opciones
        system("cls"); // Limpiar pantalla
        cout << "\n Agenda Telefonica" << endl;
        cout << "-----------------------" << endl;
        cout << "1. Agregar contacto" << endl;
        cout << "2. Mostrar contactos" << endl;
        cout << "3. Buscar contacto" << endl;
        cout << "4. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
            	system("cls"); 
                cout << "Ingrese el nombre del contacto: ";
                cin.ignore(); 
                getline(cin, nombre);
                cout << "Ingrese el numero de telefono: ";
                getline(cin, telefono);
                agenda.Agregar_Contacto(nombre, telefono);
                cout << "Contacto agregado con exito!" << endl;
                system("pause");
                break;
            case 2:
            	system("cls");
                agenda.Mostar_Contactos();
                system("pause");
                break;
            case 3:
            	system("cls");
                cout << "Ingrese el nombre del contacto a buscar: ";
                cin.ignore(); 
                getline(cin, nombre);
                agenda.Buscar_Contacto(nombre);
                system("pause");
                break;
            case 4:
            	system("cls");
                cout << "Saliendo del programa...";
                break;
            default:
                cout << "Opción no valida. Intente nuevamente." << endl;}
    } while (opcion != 4);
return 0;} // El bucle sigue hasta que el usuario ingresa 4

