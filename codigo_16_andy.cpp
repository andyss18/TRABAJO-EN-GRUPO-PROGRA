#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	cout<<"se calculará la hipotenusa, hasta que ingrese -1 en ambos datos"<<endl;
	double a,b,c;
	do {

		
		cout<<"Ingrese el dato del cateto adyacente: ";
		cin>>a;
		cout<<"Ingrese el dato del cateto opuesto: ";
		cin>>b;
		
		if (a == -1 && b == -1) { 
        	cout << "Saliendo del programa" << endl;
        	break;
    	}	
    	
		c = sqrt((a * a) + (b * b));
		
		cout<<"el resultado es: h= "<<c<<endl;
	} while(a!=-1 && b!=-1);

	return 0;	
}
