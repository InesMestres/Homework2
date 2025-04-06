#include "Ejercicio3-header.hpp"
#include <memory>

Complejo::Complejo(float valor_real_numero, float valor_imaginario_numero){
    parte_real = valor_real_numero;
    parte_imaginaria = valor_imaginario_numero;

}

float Complejo::get_parte_real() const{
    return parte_real;
}

float Complejo::get_parte_imaginaria() const{
    return parte_imaginaria;
}

std::shared_ptr<Numero> Complejo::suma(std::shared_ptr<Numero> otro_numero) const {
    std::shared_ptr<Complejo>puntero_nuevo_complejo = std::dynamic_pointer_cast<Complejo>(otro_numero);
    if(puntero_nuevo_complejo == nullptr){
        std::cout << "El tipo de numero no es entero; no se puede realizar operación." << std::endl;
        return nullptr;
    }
    float resultado_real = parte_real + puntero_nuevo_complejo -> get_parte_real();
    float resultado_imaginaria = parte_imaginaria + puntero_nuevo_complejo -> get_parte_imaginaria();
    return std::make_shared<Complejo>(resultado_real,resultado_imaginaria);
}

std::shared_ptr<Numero>Complejo::resta(std::shared_ptr<Numero> otro_numero) const{
    std::shared_ptr<Complejo>puntero_nuevo_complejo = std::dynamic_pointer_cast<Complejo>(otro_numero);
    if(puntero_nuevo_complejo == nullptr){
        std::cout << "El tipo de numero no es entero; no se puede realizar operación." << std::endl;
        return nullptr;
    }
    float resultado_real = parte_real - puntero_nuevo_complejo -> get_parte_real();
    float resultado_imaginaria = parte_imaginaria - puntero_nuevo_complejo -> get_parte_imaginaria();
    return std::make_shared<Complejo>(resultado_real,resultado_imaginaria);
}

std::shared_ptr<Numero> Complejo::multiplicacion(std::shared_ptr<Numero> otro_numero) const{
    std::shared_ptr<Complejo>puntero_nuevo_complejo = std::dynamic_pointer_cast<Complejo>(otro_numero);
    if(puntero_nuevo_complejo == nullptr){
        std::cout << "El tipo de numero no es entero; no se puede realizar operación." << std::endl;
        return nullptr;
    }
    float resultado_real = (parte_real * puntero_nuevo_complejo -> get_parte_real()) - (parte_imaginaria *  puntero_nuevo_complejo -> get_parte_imaginaria());
    float resultado_imaginaria = (parte_real * puntero_nuevo_complejo -> get_parte_imaginaria()) + (parte_imaginaria * puntero_nuevo_complejo -> get_parte_real()); 
    return std::make_shared<Complejo>(resultado_real,resultado_imaginaria);
}

std::shared_ptr<Numero> Complejo::division(std::shared_ptr<Numero> otro_numero) const{
    std::shared_ptr<Complejo>puntero_nuevo_complejo = std::dynamic_pointer_cast<Complejo>(otro_numero);
    if(puntero_nuevo_complejo == nullptr){
        std::cout << "El tipo de numero no es entero; no se puede realizar operación." << std::endl;
        return nullptr;
    }
    float resultado_real = ((parte_real * puntero_nuevo_complejo -> get_parte_real()) + (parte_imaginaria *  puntero_nuevo_complejo -> get_parte_imaginaria()))/((puntero_nuevo_complejo -> get_parte_real())^2 + (puntero_nuevo_complejo -> get_parte_imaginaria())^2);
    float resultado_imaginaria = ((parte_imaginaria * puntero_nuevo_complejo -> get_parte_real()) - (parte_real *  puntero_nuevo_complejo -> get_parte_imaginaria()))/((puntero_nuevo_complejo -> get_parte_real())^2 + (puntero_nuevo_complejo -> get_parte_imaginaria())^2);
    return std::make_shared<Entero>(resultado_real, resultado_imaginaria);
}


std::string Real::toString() const{
    return std::to_string(valor_real);
}

