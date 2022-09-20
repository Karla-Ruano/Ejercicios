#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int y,num,c = 0, s = 0;
	cout << "Ingresar la cantidad de numeros que desea: ";
	cin >>num;
	while(c < num){
	cout << "Ingresar un numero: ";
	cin >>y;	
	s = s + y;
	c = c + 1;
	} 
	cout << " La suma de los numeros es: " << s << endl;
	getch();
	return 0;
}
