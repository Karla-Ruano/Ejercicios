#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int m,y,c=0,p=0;
	cout << "Ingresar cantidad de numeros: ";
	cin >> m;
	while(c < m){
		cout << "Ingresa un numero: " << endl;
		cin >> y;
		if(y > 0)
		p = p + 1;
		c = c + 1;
	}
	cout << " La cantidad de positivos: " << p << endl;
	getch();
	return 0;
}
