#include <iostream>
using namespace std;

int Factorial (int m);

void Positivo (int m,int n);

int main(){
	int m,n,combinatorio;
	cout<<"Ingrese el valor de m: ";
	cin>>m;
	cout<<"Ingrese el valor de n: ";
	cin>>n;
	if(m>=0&&n>=0){
		combinatorio=Factorial(m)/(Factorial(m-n)*Factorial(n));
	
		cout<<"El combinatorio de "<<m<<" sobre "<<n<<" es: "<<combinatorio;		
	}
	else{
		cout<<"m y n deben ser numeros positivos o iguales que cero";
		
		Positivo(m,n);
	}
	

	return 0;
}

int Factorial (int m){
	int F;
	F=1;
	
	for(int i=1;i<=m;i++){
		F=F*i;
	}
	return F;
}

void Positivo (int m,int n){
	int Combinatorio;
	
	while(m<0||n<0){
		cout<<"\nIngrese un numero positivo para m: ";
		cin>>m;
		cout<<"Ingrese un numero postivo para n: ";
		cin>>n;	
	}
	
	Combinatorio=Factorial(m)/(Factorial(m-n)*Factorial(n));
	
	cout<<"El combinatorio de "<<m<<" sobre "<<n<<" es: "<<Combinatorio;	
	
}
