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
        std::cout << "El tipo de numero no es Complejo; no se puede realizar operación." << std::endl;
        return nullptr;
    }
    float resultado_real = parte_real + puntero_nuevo_complejo -> get_parte_real();
    float resultado_imaginaria = parte_imaginaria + puntero_nuevo_complejo -> get_parte_imaginaria();
    return std::make_shared<Complejo>(resultado_real,resultado_imaginaria);
}

std::shared_ptr<Numero>Complejo::resta(std::shared_ptr<Numero> otro_numero) const{
    std::shared_ptr<Complejo>puntero_nuevo_complejo = std::dynamic_pointer_cast<Complejo>(otro_numero);
    if(puntero_nuevo_complejo == nullptr){
        std::cout << "El tipo de numero no es Complejo; no se puede realizar operación." << std::endl;
        return nullptr;
    }
    float resultado_real = parte_real - puntero_nuevo_complejo -> get_parte_real();
    float resultado_imaginaria = parte_imaginaria - puntero_nuevo_complejo -> get_parte_imaginaria();
    return std::make_shared<Complejo>(resultado_real,resultado_imaginaria);
}

std::shared_ptr<Numero> Complejo::multiplicacion(std::shared_ptr<Numero> otro_numero) const{
    std::shared_ptr<Complejo>puntero_nuevo_complejo = std::dynamic_pointer_cast<Complejo>(otro_numero);
    if(puntero_nuevo_complejo == nullptr){
        std::cout << "El tipo de numero no es Complejo; no se puede realizar operación." << std::endl;
        return nullptr;
    }
    float resultado_real = (parte_real * puntero_nuevo_complejo -> get_parte_real()) - (parte_imaginaria *  puntero_nuevo_complejo -> get_parte_imaginaria());
    float resultado_imaginaria = (parte_real * puntero_nuevo_complejo -> get_parte_imaginaria()) + (parte_imaginaria * puntero_nuevo_complejo -> get_parte_real()); 
    return std::make_shared<Complejo>(resultado_real,resultado_imaginaria);
}

std::shared_ptr<Numero> Complejo::division(std::shared_ptr<Numero> otro_numero) const{
    std::shared_ptr<Complejo>puntero_nuevo_complejo = std::dynamic_pointer_cast<Complejo>(otro_numero);
    if(puntero_nuevo_complejo == nullptr){
        std::cout << "El tipo de numero no es Complejo; no se puede realizar operación." << std::endl;
        return nullptr;
    }
    float a = parte_real;
    float b = parte_imaginaria;
    float c = puntero_nuevo_complejo -> get_parte_real();
    float d = puntero_nuevo_complejo -> get_parte_imaginaria();
    
    if(c==0 && d==0){
        std::cout<<"No se puede realizar esta operación, se divide por cero"<<std::endl;
        return nullptr;
    }

    float resultado_real = (a*c + b*d)/(c*c+d*d);
    float resultado_imaginaria = (b*c - a*d)/(c*c+d*d);

    return std::make_shared<Complejo>(resultado_real, resultado_imaginaria);
}


std::string Complejo::toString() const{
    return std::to_string(parte_real) + "+" + std::to_string(parte_imaginaria) + "i";
}

