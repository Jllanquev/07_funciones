#include <iostream>
using namespace std;
void Triangulo(int b);

int main(){
	int base;
	cout<<"Ingrese la base del triangulo: ";
	cin>>base;
	
	Triangulo(base);
	
	return 0;
}

void Triangulo(int b){
	
	for(int i=b;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}	
		
		cout<<"\n";
		
	}

}
