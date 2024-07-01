#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b, c, dis;
    float ra1, ra2;
    cout<<"Ingresa los coeficientes a, b, c en ese orden"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    dis=pow(b,2)-4*a*c;
    if (dis>0){
        ra1=(-b+sqrt(dis))/(2*a);
        ra2=(-b-sqrt(dis))/(2*a);
        cout<<ra1<<endl;
        cout<<ra2<<endl;
    } else {
        if (dis==0){
                ra1=-b/(2*a);
                ra2=ra1;
                cout<<ra1<<endl;
                cout<<ra2<<endl;
            } else {
                float Real, Imaginario;
                Real=-b/(2*a);
                Imaginario=sqrt(-dis)/(2*a);
                cout<<Real<<"+"<<Imaginario<<"i"<<endl;
                cout<<Real<<"-"<<Imaginario<<"i"<<endl;
            }
        }
    return 0;
}