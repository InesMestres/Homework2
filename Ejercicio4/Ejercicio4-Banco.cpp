#include "Ejercicio4-header.hpp"
#include <iostream>


//Clase abstracta Banco:

//Constructor de banco:
Banco::Banco(std::string titular_cuenta_usuario, double balance_usuario){
    balance = balance_usuario;
    titularCuenta = titular_cuenta_usuario;
}

//Retorna balance (cantidad de dinero) que tiene titular en el banco:
double Banco::get_balance() const{
    return balance;
};

//Retorna titular de la cuenta de banco:
std::string Banco::get_titular() const{
    return titularCuenta;
}

//Deposita dinero ingresado como parámetro en la cuenta de banco:
void Banco::depositar(double cantidad_dinero){
    balance += cantidad_dinero;
    return;
};