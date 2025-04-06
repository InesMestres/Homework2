#include "Ejercicio3-header.hpp"
#include <memory>

Real::Real(float valor_numero){
    valor_real = valor_numero;
}

int Real::get_valor_real() const{
    return valor_real;
}

std::shared_ptr<Numero> Real::suma(std::shared_ptr<Numero> otro_numero) const {
    std::shared_ptr<Entero>puntero_nuevo_entero = std::dynamic_pointer_cast<Entero>(otro_numero);
    if(puntero_nuevo_entero == nullptr){
        std::cout << "El tipo de numero no es entero; no se puede realizar operación." << std::endl;
        return nullptr;
    }
    int resultado = valor_real + puntero_nuevo_entero -> get_valor_entero();
    return std::make_shared<Entero>(resultado);
}

std::shared_ptr<Numero> Real::resta(std::shared_ptr<Numero> otro_numero) const{
    std::shared_ptr<Entero>puntero_nuevo_entero = std::dynamic_pointer_cast<Entero>(otro_numero);
    if(puntero_nuevo_entero == nullptr){
        std::cout << "El tipo de numero no es entero; no se puede realizar operación." << std::endl;
        return nullptr;
    }
    int resultado = valor_real - puntero_nuevo_entero -> get_valor_entero();
    return std::make_shared<Entero>(resultado);
}

std::shared_ptr<Numero> Real::multiplicacion(std::shared_ptr<Numero> otro_numero) const{
    std::shared_ptr<Entero>puntero_nuevo_entero = std::dynamic_pointer_cast<Entero>(otro_numero);
    if(puntero_nuevo_entero == nullptr){
        std::cout << "El tipo de numero no es entero; no se puede realizar operación." << std::endl;
        return nullptr;
    }
    int resultado = valor_real * puntero_nuevo_entero -> get_valor_entero();
    return std::make_shared<Entero>(resultado);
}

std::shared_ptr<Numero> Real::division(std::shared_ptr<Numero> otro_numero) const{
    std::shared_ptr<Entero>puntero_nuevo_entero = std::dynamic_pointer_cast<Entero>(otro_numero);
    if(puntero_nuevo_entero == nullptr){
        std::cout << "El tipo de numero no es entero; no se puede realizar operación." << std::endl;
        return nullptr;
    }
    int resultado = valor_real / puntero_nuevo_entero -> get_valor_entero();
    return std::make_shared<Entero>(resultado);
}


std::string Real::toString() const{
    return std::to_string(valor_real);
}

