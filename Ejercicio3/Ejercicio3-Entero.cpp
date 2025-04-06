#include "Ejercicio3-header.hpp"
#include <memory>


Entero::Entero(int valor_numero){
    valor_entero = valor_numero;
}

int Entero::get_valor_entero() const{
    return valor_entero;
}

std::shared_ptr<Numero> Entero::suma(std::shared_ptr<Numero> otro_numero) const {
    std::shared_ptr<Entero>puntero_nuevo_entero = std::dynamic_pointer_cast<Entero>(otro_numero);
    if(puntero_nuevo_entero == nullptr){
        std::cout << "El tipo de numero no es entero; no se puede realizar operación." << std::endl;
        return nullptr;
    }
    int resultado = valor_entero + puntero_nuevo_entero -> get_valor_entero();
    return std::make_shared<Entero>(resultado);
}

std::shared_ptr<Numero> Entero::resta(std::shared_ptr<Numero> otro_numero) const{
    std::shared_ptr<Entero>puntero_nuevo_entero = std::dynamic_pointer_cast<Entero>(otro_numero);
    if(puntero_nuevo_entero == nullptr){
        std::cout << "El tipo de numero no es entero; no se puede realizar operación." << std::endl;
        return nullptr;
    }
    int resultado = valor_entero - puntero_nuevo_entero -> get_valor_entero();
    return std::make_shared<Entero>(resultado);
}

std::shared_ptr<Numero> Entero::multiplicacion(std::shared_ptr<Numero> otro_numero) const{
    std::shared_ptr<Entero>puntero_nuevo_entero = std::dynamic_pointer_cast<Entero>(otro_numero);
    if(puntero_nuevo_entero == nullptr){
        std::cout << "El tipo de numero no es entero; no se puede realizar operación." << std::endl;
        return nullptr;
    }
    int resultado = valor_entero * puntero_nuevo_entero -> get_valor_entero();
    return std::make_shared<Entero>(resultado);
}

std::shared_ptr<Numero> Entero::division(std::shared_ptr<Numero> otro_numero) const{
    std::shared_ptr<Entero>puntero_nuevo_entero = std::dynamic_pointer_cast<Entero>(otro_numero);
    if(puntero_nuevo_entero == nullptr){
        std::cout << "El tipo de numero no es entero; no se puede realizar operación." << std::endl;
        return nullptr;
    }
    int resultado = valor_entero / puntero_nuevo_entero -> get_valor_entero();
    return std::make_shared<Entero>(resultado);
}


std::string Entero::toString() const{
    return std::to_string(valor_entero);
}

