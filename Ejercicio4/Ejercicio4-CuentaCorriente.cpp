#include "Ejercicio4-header.hpp"
#include <iostream>
#include <memory>

cuentaCorriente::cuentaCorriente(std::string titularCuenta, double BalanceUsuario, std::shared_ptr<cajaDeAhorro> puntero): Banco(titularCuenta, BalanceUsuario), puntero_cajaAhorro(puntero){}

bool cuentaCorriente::retirar(double cantidad_dinero){
    
    if(get_balance() >= cantidad_dinero){
        balance -= cantidad_dinero;
        std::cout << "El dinero ha sido retirado de esta cuenta corriente." << std::endl;
        return true;
    }
    std::cout << "No hay suficiente dinero en esta cuenta para realizar esta operación. Se analiza el dinero disponible en la caja de ahorro." << std::endl;
    
    if(puntero_cajaAhorro -> get_balance() >= cantidad_dinero){
        puntero_cajaAhorro -> retirar(cantidad_dinero);
        std::cout << "El dinero requerido será retirado de la caja de ahorro." << std::endl;
        return true;
    }

    std::cout << "No hay suficiente dinero ni en la caja de ahorro ni en la cuenta corriente para hacer este retiro de dinero." << std::endl;
    return false;
}

void cuentaCorriente::mostrar_info() const{
    std::cout << "Titular de cuenta:" << get_titular() << ".Tipo de cuenta: Cuenta Corriente. Balance: $" << get_balance() << std::endl; 
    return;
}