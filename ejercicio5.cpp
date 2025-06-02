#include <iostream>
using namespace std;

int MaxComunDiv (int a, int b);

int MinComunMult(int a, int b);

int main(){
	int Mcd,num1,num2,Mcm;
	cout<<"Ingrese el primer numero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	if(num1<=0||num2<=0){
		cout<<"Error: Los numeros deben ser mayores que cero.";
	}
	else{
		Mcd=MaxComunDiv(num1,num2);
		Mcm=MinComunMult(num1,num2);
		cout<<"El MCD de "<<num1<<" y "<<num2<<" es: ";
		cout<<Mcd<<endl;
		cout<<"El MCM de "<<num1<<" y "<<num2<<" es: ";
		cout<<Mcm;
	}
	return 0;
}

int MaxComunDiv (int a, int b){
	int re;
	
	while(b!=0){
		re=a%b;
		a=b;
		b=re;
	}
	
	return a;
}

int MinComunMult(int a, int b){
	int MCM;
	
	MCM=(a*b)/MaxComunDiv(a,b);
	
	return MCM;
}
