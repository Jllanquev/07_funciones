#include <iostream>
using namespace std;

int Factorial (int m);

int main(){
	int m,n,combinatorio;
	cout<<"Ingrese el valor de m: ";
	cin>>m;
	cout<<"Ingrese el valor de n: ";
	cin>>n;
	
	combinatorio=Factorial(m)/(Factorial(m-n)*Factorial(n));
	
	cout<<"El combinatorio de "<<m<<" sobre "<<n<<" es: "<<combinatorio;
	
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
