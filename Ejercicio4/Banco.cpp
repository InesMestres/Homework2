#include "Ejercicio4-header.hpp"

Banco::Banco(){
    balance = 0;
    titularCuenta = "anon";
}

double Banco::get_balance(){
    return balance;
};

void Banco::depositar(double cantidad_dinero){
    balance += cantidad_dinero;
    return;
};

virtual int Banco::retirar(double cantidad_dinero){
    if(get_balance() < cantidad_dinero){
        std::cout << "No tienes suficiente dinero para retirar la cantidad presentada" << std::endl;
        return;
    }
    balance -= cantidad_dinero;
};

virtual void Banco::mostrar_info(){
    std::cout << "Balance: " << get_balance() << ", Tipo de cuenta: " << tipocuenta << ", Titular: " get_nombre() << std::endl;
}