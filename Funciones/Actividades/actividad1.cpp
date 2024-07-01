#include <iostream>
#include <cmath>
using namespace std;

//FUNCION PARA CALCULAR EL AREA DEL CIRCULO
double AreaCirculo (int r){
    double Area;
    Area=pow(r,2)*M_PI;
    return Area;
}

//PRINCIPAL
int main(){
    int n1;
    cout<<"Ingrese el radio"<<endl;
    cin>>n1;
    cout<<"El area del circulo es: "<<AreaCirculo(n1)<<endl;
    return 0;
}