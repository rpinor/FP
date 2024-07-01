//FALTA AGREGAR MAS VALIDACIONES DE ENTRADA (Suposicion que el usuario escribe solo los numeros mostrados)
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Resultado (int Player,int Computer, int &P, int &CPU){
    if(Player==Computer){
        cout<<"Empate"<<endl;
    } else {
        if((Player>Computer)||((Computer==3)&&(Player==1))){
        cout<<"Ganaste la ronda"<<endl;
        P++;
    } else {
        cout<<"Perdiste la ronda"<<endl;
        CPU++;
        }
    }
}

int main(){
    srand(time(0));
    int NumP, NumCPU, P=0, CPU=0;
    cout<<"1. Piedra"<<endl;
    cout<<"2. Papel"<<endl;
    cout<<"3. Tijera"<<endl;
    while((P<3)&&(CPU<3)){
        NumCPU=rand()%3+1;
        cin>>NumP;
        cout<<"CPU: "<<NumCPU<<endl;
        Resultado(NumP, NumCPU, P, CPU);
    }
}