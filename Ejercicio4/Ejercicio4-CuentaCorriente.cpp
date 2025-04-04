#include "Ejercicio4-header.hpp"
#include <iostream>


int cuentaCorriente::retirar(){
    if(get_balance() < balance){
        std::cout << "No es posible realizar esta transaccion porque no hay suficiente dinero disponible." << std::endl;
    }
}