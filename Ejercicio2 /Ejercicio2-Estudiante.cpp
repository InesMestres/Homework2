#include <iostream>
#include "Ejercicio2-header.hpp"
#include <vector>
#include <string>

Estudiante::Estudiante(std::string nombre_estudiante, int legajo_estudiante, std::map<std::string,float> notas_estudiante){
    nombre_completo = nombre_estudiante;
    legajo = legajo_estudiante;
    cursos = notas_estudiante;

}

std::string Estudiante::get_nombre()const{
    return nombre_completo;
}

int Estudiante::get_legajo() const{
    return legajo;
}

float Estudiante::get_promedio() const{
    if(notas_estudiante.empty()){
        return 0;
    }
    float promedio = 0;
    for(float nota: notas_estudiante){
        promedio += nota;
    }
    return (promedio/notas_estudiante.size());
}