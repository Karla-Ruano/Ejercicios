#include <iostream>
using namespace std;

void llenarpares(int[100]);
void llenarimpares(int[100]);
void mostrarpares(int[100]);
void mostrarimpares(int[100]);
int main (){
	int numeros[100];
	llenarpares(numeros);
	llenarimpares(numeros);
	mostrarpares(numeros);
	mostrarimpares(numeros);
	return 0;
}
void llenarpares(int numeros[100]){
	for(int i = 0; i < 100; i++){
		if(i % 2 == 0){numeros[i] = i;	}
	}
}
void llenarimpares(int numeros[100]){
	for(int i = 0; i < 100; i++){
		if(i % 2 == 1){numeros[i] = i;	}
	}
}
void mostrarpares(int numeros[100]){
	cout << "Numeros pares" << endl;
	for(int i = 0; i < 100; i++){
		if(i % 2 == 0){cout << numeros[i] << endl; }
	}
}
void mostrarimpares(int numeros[100]){
	cout << "Numeros impares" << endl;
	for(int i = 0; i < 100; i++){
		if(i % 2 == 1){cout << numeros[i] << endl; }
	}
}
