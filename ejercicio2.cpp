#include <iostream>
using namespace std;

int Suma (int a,int b);

void Resta (int a, int b);

int Multiplicacion (int a, int b);

void Division (int a, int b);

int main(){
	int num1,num2,producto,suma;
	cout<<"Ingrese el primer numero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	
	suma=Suma(num1,num2);
	cout<<"La suma de "<<num1<<" + "<<num2<<" es: "<<suma;
	
	Resta(num1,num2);
	Resta(num2,num1);
	
	producto=Multiplicacion(num1,num2);
	cout<<"\nEl producto de "<<num1<<" * "<<num2<<" es: "<<producto;	
	
	Division(num1,num2);
	Division(num2,num1);
	
	return 0;
}

int Suma (int a,int b){
	int Adicion;
	Adicion= a+b;
	
	return Adicion; 
}

void Resta (int a, int b){
	int Sustraccion;
	Sustraccion= a-b;
	 
	 cout<<"\nLa resta de "<<a<<" - "<<b<<" es: "<<Sustraccion;
}

int Multiplicacion (int a,int b){
	int Producto;
	Producto=a*b;
	
	return Producto;
}

void Division (int a,int b){
	int Div;
	Div=a/b;
	
	cout<<"\nLa divicion de "<<a<<"/"<<b<<" es: "<<Div;
	
}
