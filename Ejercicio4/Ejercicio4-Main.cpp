#include "Ejercicio4-header.hpp"

//Ejercicio 4:

int main(){

    //Creo cuenta de tipo Caja de Ahorro:

    auto cajaDeAhorro1 = std::make_shared<cajaDeAhorro>("María Castro", 1000);
    cajaDeAhorro1->mostrar_info();
    cajaDeAhorro1->mostrar_info();
    cajaDeAhorro1->depositar(100);
    cajaDeAhorro1->mostrar_info();
    cajaDeAhorro1->retirar(200);
    cajaDeAhorro1->mostrar_info();

    //Creo cuenta de tipo Cuenta Corriente:
    auto cuentaCorriente1 = std::make_shared<cuentaCorriente>("Lucio Smith", 10, cajaDeAhorro1);
    cuentaCorriente1 -> mostrar_info();
    cuentaCorriente1 -> depositar(10);
    cuentaCorriente1 -> mostrar_info();
    cuentaCorriente1 -> retirar(1500);
    cuentaCorriente1 -> retirar(600);
    cuentaCorriente1 -> retirar(10);

    return 0;
}