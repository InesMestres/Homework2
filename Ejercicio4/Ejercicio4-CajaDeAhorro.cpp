#include "Ejercicio4-header.hpp"
#include <iostream>

cajaDeAhorro::cajaDeAhorro(std::string titular, double balance_inicial):Banco(titular, balance_inicial){}

bool cajaDeAhorro::retirar(double cantidad_dinero){
    if(get_balance() < cantidad_dinero){
        std::cout << "No se puede retirar $" << cantidad_dinero << "porque no hay suficiente dinero en la cuenta" << std::endl;
        return false;
    }
    balance -= cantidad_dinero;
    std::cout << "Se retiraron " << cantidad_dinero << std::endl;

    if(cantidadVecesInfo > 2){
        balance -= 20;
        std::cout << "Además, se descontaron $20 debido a que se mostró la información de la cuenta mas de dos veces." << std::endl;
    }
    return true;
}

void cajaDeAhorro::mostrar_info() const{
    cantidadVecesInfo ++;
    std::cout << "Titular de cuenta:" << get_titular() << ".Tipo de cuenta: Caja de Ahorro. Balance: $" << get_balance() << std::endl; 
    return;
}