#include <iostream>
#include "Ejercicio2-header.hpp"
#include <vector>
#include <string>

Estudiante::Estudiante(std::string nombre_estudiante, int legajo_estudiante, std::map<std::string,float> notas_estudiante){
    nombre_completo = nombre_estudiante;
    legajo = legajo_estudiante;
    notas = notas_estudiante;

}

std::string Estudiante::get_nombre()const{
    return nombre_completo;
}

int Estudiante::get_legajo() const{
    return legajo;
}

float Estudiante::get_promedio() const{
    if(notas.empty()){
        return 0;
    }
    float promedio = 0;
    for(auto& materia_nota: notas){
        promedio += materia_nota.second;
    }
    return (promedio/notas.size());
}

bool Estudiante::operator<(const Estudiante& estudiante_nuevo) const{
    return get_nombre() < estudiante_nuevo.get_nombre();
}

std::ostream& operator<<(std::ostream& flujo_salida, const Estudiante& estudiante_nuevo) {
    flujo_salida << "Nombre: " << estudiante_nuevo.nombre_completo << ", Legajo: " << estudiante_nuevo.legajo;
    return flujo_salida;
}
