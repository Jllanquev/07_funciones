#include <iostream>
using namespace std;

int Primo (int a);

int main(){
	int num;
	cout<<"Ingrese un numero entero positivo: ";
	cin>>num;
	
	if(Primo(num)==2){
		cout<<"El numero "<<num<<" es primo";
	}
	else{
		cout<<"El numero "<<num<<" no es primo";
		
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


