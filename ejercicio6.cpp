#include <iostream>
using namespace std;

void Fibonacci (int cant);

int main(){
	int cant;
	cout<<"*************LA SERIE FIBONACCI*************"<<endl;
	cout<<"Ingrese la cantidad de terminos para la serie Fibonacci: ";
	cin>>cant;
	
	Fibonacci (cant);
	
	return 0;
}

void Fibonacci (int cant){
	int a,b,c,suma;
	a=0;
	b=1;
	suma=0;
	
	for(int i=1;i<=cant;i++){
		cout<<a<<" ";
		suma+=a;
		c=a+b;
		a=b;
		b=c;

	}
	cout<<"\nLa suma de los terminos de la serie Fibonacci es: ";
	cout<<suma;
}
