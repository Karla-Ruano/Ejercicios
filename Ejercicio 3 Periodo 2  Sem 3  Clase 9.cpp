#include <iostream>
#include <cmath>
using namespace std;

float pitagoras(float,float);
int main(){
	float cateto1,cateto2,hipotenusa = 0;
	cout << "Ingrese cateto 1: ";
	cin >> cateto1;
	cout << "Ingrese cateto 2: ";
	cin >> cateto2;
	hipotenusa = pitagoras(cateto1,cateto2);
	cout << "La hipotenusa del triangulo es: ";
	cout << hipotenusa;
	return 0;
}
float pitagoras(float x, float y){
	float result = 0;
	result = sqrt(pow(x,2)+pow(y,2));
	return result;
}
