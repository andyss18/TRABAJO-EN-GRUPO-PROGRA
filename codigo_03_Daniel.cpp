#include<iostream>
using namespace std;

int main(){
	int op;
	double num,conv;
	do {
		system("cls"); // Limpiar pantalla
        cout << "Sistema de Conversiones" << endl;
        cout << "--------------------------" << endl;
        cout << "1 - Kilometros a Millas " << endl;
        cout << "2 - Millas a Kilometros " << endl;
        cout << "3 - Metros a Pulgadas " << endl;
        cout << "4 - Pulgadas a Metros " << endl;
        cout << "5 - Libras a Kilogramos " << endl;
        cout << "6 - Kilogramos a Libras " << endl;
        cout << "0 - Salir" << endl;
        cout << "Seleccione una operacion: ";
        cin >> op;
        
    switch (op){
    	case 1: {
    		system("cls"); // Limpiar pantalla
    		cout<<"Ingrese la cantidad de Kilometros a convertir: ";
    		cin>>num;
    		conv = num * (0.621371);
  			cout << "El resultado es: "<<conv<<" Millas" <<endl;
    		system("pause");
			break;}
		case 2: {
			system("cls"); // Limpiar pantalla
    		cout<<"Ingrese la cantidad de Millas a convertir: ";
    		cin>>num;
    		conv = num * (1.60934);
  			cout << "El resultado es: "<<conv<<" Kilometros" <<endl;
    		system("pause");
			break;}
		case 3: {
			system("cls"); // Limpiar pantalla
    		cout<<"Ingrese la cantidad de Metros a convertir: ";
    		cin>>num;
    		conv = num * (39.3701);
  			cout << "El resultado es: "<<conv<<" Pulgadas" <<endl;
    		system("pause");
			break;}
		case 4: {
			system("cls"); // Limpiar pantalla
    		cout<<"Ingrese la cantidad de Pulgadas a convertir: ";
    		cin>>num;
    		conv = num * (0.0254);
  			cout << "El resultado es: "<<conv<<" Metros" <<endl;
    		system("pause");
			break;}
		case 5: {
			system("cls"); // Limpiar pantalla
    		cout<<"Ingrese la cantidad de Libras a convertir: ";
    		cin>>num;
    		conv = num * (0.453592);
  			cout << "El resultado es: "<<conv<<" Kilogramos" <<endl;
    		system("pause");
			break;}
		case 6: {
			system("cls"); // Limpiar pantalla
    		cout<<"Ingrese la cantidad de Kilogramos a convertir: ";
    		cin>>num;
    		conv = num * (2.20462);
  			cout << "El resultado es: "<<conv<<" Libras" <<endl;
    		system("pause");
			break;}
		case 0: {
                system("cls"); // Limpiar pantalla
                cout << "Saliendo del Sistema de Conversiones..." << endl;
                break;}
		default: {
                system("cls"); // Limpiar pantalla
                cout << "Opcion no valida! seleccione una opcion valida." << endl;
                system ("pause");
                break;}	
		}
}while (op != 0); // El bucle sigue hasta que el usuario ingresa 0
return 0;}	
	
