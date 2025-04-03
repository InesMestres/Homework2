#include <iostream>
#include "Ejercicio2-header.hpp"
#include <vector>
#include <string>

Estudiante::Estudiante(std::string nombre_estudiante, int legajo_estudiante, std::list<std::string> notas_estudiante){
    nombre_completo = nombre_estudiante;
    legajo = legajo_estudiante;
    //cursos = notas_estudiante;

}

std::string Estudiante::get_nombre()const {return nombre_completo;}
int Estudiante::get_legajo() const {return legajo;}
//std::list<std::string>get_promedio(){return (notas_estudiante/len(notas_estudiante);}
