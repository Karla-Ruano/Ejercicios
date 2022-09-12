#include <iostream>
using namespace std;

int main(){
int num = 10;
cout << "Numeros pares entre el 10 y el 20";
while(num <=20 )
{
	if(num % 2 ==0)
	cout << "\nnumero par valido: " <<num;
	num = num + 1;
}	
}
