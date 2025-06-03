#include <iostream>
using namespace std;

int Factorial (int b);

double suma (double a);

int main(){
	int n; 
	
	cout<<"Ingrese el valor de n: ";
	cin>>n;
	
	if(n>0){
		float Suma=suma(n);
	
		cout<<"La suma es: "<<Suma;
	}
	else{
		cout<<"ERROR: Ingrese un valor para n que sea mayor que cero.";
		while(n<=0){
			cout<<"\nIngrese nuevamente el valor de n: ";
			cin>>n;
		}
			float Suma=suma(n);
	
			cout<<"La suma es: "<<Suma;		
	}
	return 0;
}

int Factorial (int b){
	int F;
	F=1;
	for(int i=1;i<=b;i++){
		F=F*i;
	}
	return F;
}

double suma (double a){
	double S=0.0;
	
	for(int i=1;i<=a;i++){
		S=S+(Factorial(i)/(2.0*i));
	}
	return S;
}
