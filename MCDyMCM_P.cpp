#include <iostream>
using namespace std;

void MCDyMCM(int a, int b, int *mcd, int *mcm);

int main() {
	int x, y;
	cout<<"Ingrese un numero: ";
	cin>>x;
	cout<<"Ingrese un numero: ";
	cin>>y;	
	
	if(x>0&&y>0){
		int rMCD, rMCM;
		MCDyMCM(x,y, &rMCD, &rMCM);
		cout<<"El MCD: "<<rMCD<<endl;
		cout<<"El MCM: "<<rMCM<<endl;
	}
	else{ 
		cout<<"Los numeros deben ser del conjunto de los naturales ";
	}

	return 0;	
}

void MCDyMCM(int a, int b, int *mcd, int *mcm){
	int i;
	i=1;
	*mcd = 1;
	while (i<=a && i<=b){
		if (a % i==0 && b % i ==0){
			*mcd = i;
		}
		i = i+1;
	}	
	*mcm = (a*b)/(*mcd);
		
}
