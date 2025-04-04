#include "Ejercicio4-header.hpp"
#include <iostream>

cajaDeAhorro::cajaDeAhorro(){
    tipoDeCuenta = "Caja de Ahorro";
    cantidadVecesInfo = 0;
}

int cajaDeAhorro::retirar(int cantidad_dinero){
    if(get_balance() < balance){
        std::cout << "No se puede hacer esta transacción porque no hay suficiente dinero en la cuenta" << std::endl;
        return 0;
    }

    if(cantidadVecesInfo >= 2){
        balance -= (0.8)*cantidad_dinero;
        return 1;
    }

    balance -= cantidad_dinero;
    return 1;

}




