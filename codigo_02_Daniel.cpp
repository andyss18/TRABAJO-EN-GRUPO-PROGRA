#include<iostream>
using namespace std;

int main(){
	int op,num;
	do {
		system("cls"); // Limpiar pantalla
        cout << "Numero Par o Impar" << endl;
        cout << "-------------------" << endl;
        cout << "1 - Consultar numero " << endl;
        cout << "2 - Salir" << endl;
        cout << "Seleccione una operacion: ";
        cin >> op;
        
    switch (op){
    	case 1: {
    		system("cls"); // Limpiar pantalla
    		cout<<"Ingrese el numero: ";
    		cin>>num;
    		if (num % 2 == 0) {
			cout << "El numero es PAR." <<endl;
			system("pause");} 
			else {
  			cout << "El numero es IMPAR." <<endl;
    		system("pause");
			break;}
		case 2: {
			system("cls"); // Limpiar pantalla
            cout << "Saliendo de la calculadora..." << endl;
			break;}
		default: {
                system("cls"); // Limpiar pantalla
                cout << "Opcion no valida! seleccione una opcion valida." << endl;
                system ("pause");
                break;}	
		}	
	}	
}while (op != 2); // El bucle sigue hasta que el usuario ingresa 2
return 0;}
