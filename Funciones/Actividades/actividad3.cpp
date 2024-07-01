#include <iostream>
#include <cmath>
using namespace std;

float Hipotenusa(int c1, int c2){
    float h=sqrt(pow(c1,2)+pow(c2,2));
    return h;
}

int main(){
    int a, b;
    cout<<"Ingrese los catetos:"<<endl;
    cin>>a;
    cin>>b;
    cout<<"La hipotenusa es: "<<Hipotenusa(a,b)<<endl;
    return 0;
}