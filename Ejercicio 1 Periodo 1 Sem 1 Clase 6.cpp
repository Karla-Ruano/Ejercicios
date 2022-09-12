#include <iostream>
using namespace std;

int main(){
	int suma,num = 0,n =0;
	while (n < 50){
		n = n + 1;
		num = num + 2;
		suma = suma + num;
	}
	cout << "La suma de los numeros es igual a: " << suma;
}
