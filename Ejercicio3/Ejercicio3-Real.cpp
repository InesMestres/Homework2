#include "Ejercicio3-header.hpp"

Entero::Entero(int valor_numero){
    valor_entero = valor_numero;
}

int Entero::get_valor_entero() const{
    return valor_entero;
}

std::shared_ptr<Numero> Suma(const Numero& otro_numero){
    return Entero + numero2;
}

int Numero::Resta(const Numero& otro_numero){
    return numero1 - numero2;
}

int Numero::Multplicacion(const Numero& otro_numero){
    return numero1 * numero2;
}

int Numero::Suma(const Numero& otro_numero){
    return numero1 / numero2;
}

std::string Numero::toString(){
    return (std::string)Numero;
}
