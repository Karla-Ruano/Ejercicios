#include <iostream>
using namespace std;
int main(){
	int numero = 0;
	int sum = 0;
	
	do{
		sum += numero;
		cout << "Ingrese un numero: ";
		cin >> numero;
	}
	while (numero >= 0);
	cout << "\nLa suma posee un resultado de " << sum << endl;
	return 0;
}
