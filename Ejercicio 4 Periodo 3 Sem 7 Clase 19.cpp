#include <iostream>
using namespace std;
int main(){
	int num1, num2, c;
	cout << "Ingresar el primero numero: ";
	cin >> num1;
	cout << "Ingresar el segundo numero: ";
	cin >> num2;
	c = num1;
	while (c > num2){
		cout << c << endl;
		c--;
	}
	return 0;
}
