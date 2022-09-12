#include <iostream>
using namespace std;

int main(){
	float calificacion;
	int mayor = 0;
	int menor = 0;
	for (int c =1; c<=5;c++){
		cout << "Ingrese su calificacion: ";
		cin >> calificacion;
		if (calificacion >= 7){
			mayor = mayor +1;
		}
		else {
			menor = menor +1;
		}
	}
	cout << "Las personas mayores o iguales a 7 son: " << mayor << endl;
	cout << "Las personas menores a 7 son: " << menor << endl;
}
