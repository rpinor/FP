#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

long Generador (int RN){
	long RandomNumber;
	RandomNumber=rand()%RN+1;
	return RandomNumber;
}

int main(){
	srand(time(0));
	int a, b;
	cout<<"Ingrese la cantidad de numeros aleatorios: ";
	cin>>a;
	cout<<"Ingrese el numero maximo: ";
	cin>>b;
	for (int i=0;i<a; i++){
		int Numero = Generador(b);
		cout<<Numero<<endl;
	}
	return 0;
}

