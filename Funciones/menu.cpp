#include <iostream>
using namespace std;

int saldo=0;

//Funcion para depositar dinero
void depositar(){
    saldo += 100;
    cout<<"Se han depositado 100 unidades. Nuevo saldo: "<<saldo<<endl;
}

//Funcion para retirar dinero
void retirar(){
    if (saldo >= 100){
        saldo -= 100;
        cout<<"Se han retirado 100 unidades. Nuevo saldo: "<<saldo<<endl;
    } else {
        cout<<"Saldo insuficiente."<<endl;
    }
}

//Funcion para mostrar el saldo
void mostrarSaldo(){
    cout<<"Saldo actural: "<<saldo<<endl;
}

void menu(){
    int opcion;
    do {
        cout<<"\n--- Cajero Automatico ---"<<endl;
        cout<<"1. Depositar 100"<<endl;
        cout<<"2. Retirar 100"<<endl;
        cout<<"3. Mostrar Saldo"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Seleccione una opcion"<<endl;
        cin>>opcion;

        switch (opcion){
            case 1:
                depositar();
                break;
            case 2:
                retirar();
                break;
            case 3:
                mostrarSaldo();
                break;
            case 4:
                cout<<"Saliendo..."<<endl;
                break;
            default:
                cout<<"Opcion no valida. Intente de nuevo";
                break;
        }
    } while (opcion != 4);
}

int main(){
    menu();
    return 0;
}
