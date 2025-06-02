#include <iostream>
using namespace std;

int Numperf (int num);

int main(){
	int num;
	cout<<"Ingrese un numero: ";
	cin>>num;
	
	if(Numperf (num)==num){
		cout<<num<<" es un numero perfecto.";
	}
	else{
		cout<<num<<" no es un numero perfecto.";
	}
}

int Numperf (int num){
	int suma;
	suma=0;
	for(int i=1;i<num;i++){
		if(num%i==0){
			suma+=i;
		}
	}
	return suma;
}
