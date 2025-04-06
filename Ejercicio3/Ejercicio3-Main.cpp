#include "Ejercicio3-header.hpp"
#include <iostream>

int main(){

    //Pruebo clase Entero:
    auto entero1 = std::make_shared<Entero>(10);
    auto entero2 = std::make_shared<Entero>(3);

    //suma:
    auto resultado_suma_enteros = entero1 -> suma(entero2);
    std::cout << resultado_suma_enteros->toString() << std::endl;
    //resta:
    auto resultado_resta_enteros = entero1 -> resta(entero2);
    std::cout << resultado_resta_enteros->toString() << std::endl;
    //multiplicación:
    auto resultado_multiplicacion_enteros = entero1 -> multiplicacion(entero2);
    std::cout << resultado_multiplicacion_enteros->toString() << std::endl;
    //division:
    auto resultado_division_enteros = entero1 -> division(entero2);
    std::cout << resultado_division_enteros->toString() << std::endl;

    //Pruebo clase Real:
    auto real1 = std::make_shared<Real>(9.55);
    auto real2 = std::make_shared<Real>(4.23);

    //suma:
    auto resultado_suma_reales = real1 -> suma(real2);
    std::cout << resultado_suma_reales->toString() << std::endl;
    //resta:
    auto resultado_resta_reales = real1 -> resta(real2);
    std::cout << resultado_resta_reales->toString() << std::endl;
    //multiplicación:
    auto resultado_multiplicacion_reales = real1 -> multiplicacion(real2);
    std::cout << resultado_multiplicacion_reales->toString() << std::endl;
    //division:
    auto resultado_division_reales = real1 -> division(real2);
    std::cout << resultado_division_reales->toString() << std::endl;


    //Pruebo clase Complejo:
    auto complejo1 = std::make_shared<Complejo>(7.4, 4.6);
    auto complejo2 = std::make_shared<Complejo>(1.5, 9.9);

    //suma:
    auto resultado_suma_complejos = complejo1 -> suma(complejo2);
    std::cout << resultado_suma_complejos->toString() << std::endl;
    //resta:
    auto resultado_resta_complejos = complejo1 -> resta(complejo2);
    std::cout << resultado_resta_complejos->toString() << std::endl;
    //multiplicación:
    auto resultado_multiplicacion_complejos = complejo1 -> multiplicacion(complejo2);
    std::cout << resultado_multiplicacion_complejos->toString() << std::endl;
    //division:
    auto resultado_division_complejos = complejo1 -> division(complejo2);
    std::cout << resultado_division_complejos->toString() << std::endl;

    return 0;
}