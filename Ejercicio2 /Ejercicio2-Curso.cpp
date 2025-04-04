#include "Ejercicio2-header.hpp"
#include "Ejercicio2-Estudiante.cpp"

Curso::Curso(int capacidad_curso){
    capacidad = capacidad_curso;
}

void Curso::inscribir_estudiante(Estudiante* estudiante_nuevo){
    if (curso_completo() == true){
        std::cout<<"No se pueden inscribir mas alumnos, el curso esta completo"<< std::endl;
        return;
    }
    
    for(Estudiante* estudiante_presente : estudiantes_curso){
        if(estudiante_presente -> get_legajo() == estudiante_nuevo -> get_legajo()){
            std::cout<<"El estudiante ya esta inscripto."<< std::endl;
            return;
        }
    
    estudiantes_curso.pushback(estudiante_nuevo);
    cantidad ++;
    
    }
}

void Curso::desinscribir_estudiante(int legajo_estudiante){
    
    for(Estudiante* estudiante_presente : estudiantes_curso){
        if(estudiante_presente -> get_legajo() == legajo_estudiante){
            estudiantes_curso.erase(estudiante_presente);
            std::cout<<"El estudiante ya ha sido desinscripto."<< std::endl;
            return;
        }
    }
    std::cout<<"No se ha podido hallar el estudiante que deseas desinscribir."<< std::endl;
    return;
}

void Curso::buscar_estudiante(int legajo_estudiante){
    for(Estudiante* estudiante_presente : estudiantes_curso){
        if(estudiante_presente -> get_legajo() == legajo_estudiante){
            std::cout<<"El estudiante con el legajo presentado esta inscrito en el curso."<< std::endl;
            return;
        }
    }
    std::cout<<"El estudiante con el legajo presentado no esta inscrito en el curso."<< std::endl;
    return;
}

bool Curso::curso_completo(){
    if (cantidad >= capacidad){return true;}
    else{
        return false;
    }
}

void Curso::imprimir_lista_estudiante(){
    for(Estudiante* estudiante_presente : estudiantes_curso){
        std::cout << estudiante_presente << ", " << std::endl;
    }
}

