#include <iostream>
#include <cmath>
using namespace std;

void calcularRaices(int a, int b, int c, float &ra1, float &ra2, string &ReOCom){
    float dis=pow(b,2)-4*a*c;
    if (dis>0){
        ra1=(-b+sqrt(dis))/(2*a);
        ra2=(-b-sqrt(dis))/(2*a);
        ReOCom="Reales";
    } else {
        if (dis==0){
                ra1=-b/(2*a);
                ra2=ra1;
                ReOCom="Reales";
            } else {
                float Real, Imaginario;
                Real=-b/(2*a);
                Imaginario=sqrt(-dis)/(2*a);
                ra1=Real+Imaginario;
                ra2=Real-Imaginario;
                ReOCom="Complejas";
            }
        }
}

int main(){
    int a, b, c, dis;
    float ra1, ra2;
    string ReOCom;
    cout<<"Ingresa los coeficientes a, b, c en ese orden"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    calcularRaices(a, b, c, ra1, ra2, ReOCom);
    cout<<ReOCom<<endl;
    cout<<ra1<<endl;
    cout<<ra2<<endl;
    return 0;
}