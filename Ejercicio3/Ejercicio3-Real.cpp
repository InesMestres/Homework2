#include "Ejercicio3-header.hpp"
#include <memory>

Real::Real(float valor_numero){
    valor_real = valor_numero;
}

float Real::get_valor_real() const{
    return valor_real;
}

std::shared_ptr<Numero> Real::suma(std::shared_ptr<Numero> otro_numero) const {
    std::shared_ptr<Real>puntero_nuevo_real = std::dynamic_pointer_cast<Real>(otro_numero);
    if(puntero_nuevo_real == nullptr){
        std::cout << "El tipo de numero no es Real; no se puede realizar operación." << std::endl;
        return nullptr;
    }
    float resultado = valor_real + puntero_nuevo_real -> get_valor_real();
    return std::make_shared<Real>(resultado);
}

std::shared_ptr<Numero> Real::resta(std::shared_ptr<Numero> otro_numero) const{
    std::shared_ptr<Real>puntero_nuevo_real = std::dynamic_pointer_cast<Real>(otro_numero);
    if(puntero_nuevo_real == nullptr){
        std::cout << "El tipo de numero no es Real; no se puede realizar operación." << std::endl;
        return nullptr;
    }
    float resultado = valor_real - puntero_nuevo_real -> get_valor_real();
    return std::make_shared<Real>(resultado);
}

std::shared_ptr<Numero> Real::multiplicacion(std::shared_ptr<Numero> otro_numero) const{
    std::shared_ptr<Real>puntero_nuevo_real = std::dynamic_pointer_cast<Real>(otro_numero);
    if(puntero_nuevo_real == nullptr){
        std::cout << "El tipo de numero no es Real; no se puede realizar operación." << std::endl;
        return nullptr;
    }
    float resultado = valor_real * puntero_nuevo_real -> get_valor_real();
    return std::make_shared<Real>(resultado);
}

std::shared_ptr<Numero> Real::division(std::shared_ptr<Numero> otro_numero) const{
    std::shared_ptr<Real>puntero_nuevo_real = std::dynamic_pointer_cast<Real>(otro_numero);
    if(puntero_nuevo_real == nullptr){
        std::cout << "El tipo de numero no es Real; no se puede realizar operación." << std::endl;
        return nullptr;
    }
    if(puntero_nuevo_real -> get_valor_real() == 0){
        std::cout << "No se puede dividir por cero; no se puede realizar operación." << std::endl;
        return nullptr;
    }
    float resultado = valor_real / puntero_nuevo_real -> get_valor_real();
    return std::make_shared<Real>(resultado);
}

std::string Real::toString() const{
    return std::to_string(valor_real);
}

