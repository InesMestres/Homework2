/*
CajaDeAhorro:
• El método retirar() impide retirar más dinero del que existe en el balance.
• Se realizará un descuento de $20 del balance luego de mostrar más de 2 veces
la información de la cuenta.
CuentaCorriente:
• El método retirar() permite retirar dinero de la caja de ahorro si no existen
suficientes fondos en este tipo de cuenta.
• En caso de que la caja de ahorro tampoco tenga dinero, se imprimirá un aviso
de que la cuenta no posee dinero. Utilizar friend para esto.*/

#include "Ejercicio4-header.hpp"
#include "Ejercicio4-Banco.cpp"
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




