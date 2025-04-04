#include "Ejercicio4-header.hpp"

Banco::Banco(){
    balance = 0;
    titularCuenta = "anon";
}

void Banco::depositar(int cantidad_dinero){
    balance += cantidad_dinero;
    return;
}

virtual int retirar(){

}

virtual void mostrar_info(){
    
}