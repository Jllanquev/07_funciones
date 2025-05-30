#include <iostream>
using namespace std;

int Primo (int a);

int positivo (int num);

int main(){
	int num,Positivo;
	cout<<"Ingrese un numero entero positivo: ";
	cin>>num;
	
	Positivo=positivo(num);
	
	if(Primo(Positivo)==2){
		cout<<"El numero "<<Positivo<<" es primo";
	}
	else{
		cout<<"El numero "<<Positivo<<" no es primo";
		
	}
	
	return 0;
}
int Primo (int a){
	int suma;
	suma=0;
	
	for(int i=1;i<=a;i++){
		if(a%i==0){
			suma++;
		}
		
	}
	return suma;
}

int positivo (int num){


	while(num<0){
		cout<<"Ingrese un numero positivo: ";
		cin>>num;
	}
	
	return num;
}
