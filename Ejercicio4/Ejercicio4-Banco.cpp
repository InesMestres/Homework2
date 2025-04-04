#include "Ejercicio4-header.hpp"
#include <iostream>

Banco::Banco(){
    balance = 0;
    titularCuenta = "anon";
    tipoDeCuenta = "cuenta normal"
}

double const Banco::get_balance(){
    return balance;
};

std::string const Banco::get_nombre(){
    return titularCuenta;
}

void Banco::depositar(double cantidad_dinero){
    balance += cantidad_dinero;
    return;
};

int Banco::retirar(double cantidad_dinero){
    if(get_balance() < cantidad_dinero){
        std::cout << "No tienes suficiente dinero para retirar la cantidad presentada" << std::endl;
        return 0;
    }
    balance -= cantidad_dinero;
    return 1;
};

void Banco::mostrar_info(){
    std::cout << "Balance: " << get_balance() << ", Tipo de cuenta: " << tipoDeCuenta << ", Titular: " << get_nombre() << std::endl;
}
