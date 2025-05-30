#include <iostream>
using namespace std;

float Suma (float a,float b);

void Resta (float a, float b);

float Multiplicacion (float a,float b);

void Division (float a,float b);

int main(){
	float num1,num2,producto,suma;
	cout<<"************************************************************"<<endl;
	cout<<"                        CALCULADORA                                 ";
	cout<<"\n************************************************************"<<endl;
	
	cout<<"Ingrese el primer numero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	
	cout<<endl;
	
	cout<<"*---------------SUMA-----------------*"<<endl;
	suma=Suma(num1,num2);
	cout<<"La suma de "<<num1<<" + "<<num2<<" es: "<<suma;
	
	cout<<"\n\n*---------------RESTA-----------------*";	
	Resta(num1,num2);
	Resta(num2,num1);
	
	cout<<"\n\n*---------------MULTIPLICACION-----------------*";	
	producto=Multiplicacion(num1,num2);
	cout<<"\nEl producto de "<<num1<<" * "<<num2<<" es: "<<producto;	

	cout<<"\n\n*---------------DIVISION-----------------*";	
	Division(num1,num2);
	Division(num2,num1);
	
	return 0;
}

float Suma (float a,float b){
	float Adicion;
	Adicion= a+b;
	
	return Adicion; 
}

void Resta (float a,float b){
	float Sustraccion;
	Sustraccion= a-b;
	 
	 cout<<"\nLa resta de "<<a<<" - "<<b<<" es: "<<Sustraccion;
}

float Multiplicacion (float a,float b){
	float Producto;
	Producto=a*b;
	
	return Producto;
}

void Division (float a,float b){
	float Div;

	if(b==0){
		cout<<"\nError: La division entre 0 no existe";
	}
	else{
		Div=a/b;	
		cout<<"\nLa division de "<<a<<"/"<<b<<" es: "<<Div;
	}
}
