#include <iostream>
using namespace std;

int main(){
	int a, b, c, d, e, mayor;
	cout << "Ingrese el primer numero: ";
	cin >> a;
	cout << "Ingrese el segundo numero: ";
	cin >> b;
	cout << "Ingrese el tercer numero: ";
	cin >> c;
	cout << "Ingrese el cuarto numero: ";
	cin >> d;
	cout << "Ingrese el quinto numero: ";
	cin >> e;
	if(a > b)
	mayor = a;
	else if(b > a)
	mayor = b;
	if(mayor > c)
	mayor = mayor;
	else if(c > mayor)
	mayor = c;
	if(mayor > d)
	mayor = mayor;
	else if(d > mayor)
	mayor = d;
	if(mayor > e)
	mayor = mayor;
	else if(e > mayor)
	mayor = e;
	cout << "El numero mayor es: " << mayor;
}
