#include <iostream>
using namespace std;
string parImpar(int num);

int main(){
	int numero;
	string cadena;
	cout << "Ingrese el numero deseado: ";
	cin >> numero;
	cadena =parImpar(numero);
	cout << "El numero ingresado es: " << cadena;
	return 0;
}
string parImpar(int num){
	string resultado;
	if (num % 2 == 0){
		resultado = "Par";
	}else if (num % 2 == 1){
		resultado = "Impar";
	}
	return resultado;
}
