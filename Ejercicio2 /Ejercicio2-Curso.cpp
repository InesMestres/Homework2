#include "Ejercicio2-header.hpp"
#include "Ejercicio2-Estudiante.cpp"
#include <memory>

Curso::Curso(int cantidad_curso){
    cantidad = cantidad_curso;
}

void Curso::inscribir_estudiante(std::shared_ptr<Estudiante> estudiante_nuevo){
    if (curso_completo() == true){
        std::cout<<"No se pueden inscribir mas alumnos, el curso esta completo"<< std::endl;
        return;
    }
    
    for(std::shared_ptr<Estudiante> estudiante_presente : estudiantes_curso){
        if(estudiante_presente -> get_legajo() == estudiante_nuevo -> get_legajo()){
            std::cout<<"El estudiante ya esta inscripto."<< std::endl;
            return;
        }
    
    estudiantes_curso.push_back(estudiante_nuevo);
    cantidad ++;
    
    }
}

void Curso::desinscribir_estudiante(int legajo_estudiante){
    
    for(auto iterador_estudiantes = estudiantes_curso.begin(); iterador_estudiantes != estudiantes_curso.end(); iterador_estudiantes++){
        if((*iterador_estudiantes) -> get_legajo() == legajo_estudiante){
            estudiantes_curso.erase(iterador_estudiantes);
            std::cout<<"El estudiante con legajo: " << legajo_estudiante << "ha sido desinscripto."<< std::endl;
            return;
        }
    }
    std::cout<<"No se ha podido hallar el estudiante con legajo: "<< legajo_estudiante << std::endl;
    return;
}

void Curso::buscar_estudiante(int legajo_estudiante){
    for(std::shared_ptr<Estudiante> estudiante_presente : estudiantes_curso){
        if(estudiante_presente -> get_legajo() == legajo_estudiante){
            std::cout<<"El estudiante con el legajo presentado esta inscrito en el curso."<< std::endl;
            return;
        }
    }
    std::cout<<"El estudiante con el legajo presentado no esta inscrito en el curso."<< std::endl;
    return;
}

bool Curso::curso_completo() const{
    if (cantidad >= capacidad){return true;}
    else{
        return false;
    }
}

void Curso::imprimir_lista_estudiantes() const{
    for(std::shared_ptr<Estudiante> estudiante_presente : estudiantes_curso){
        std::cout << estudiante_presente -> get_nombre() << ", Legajo: " << estudiante_presente->get_legajo() << std::endl;
    }
}

/*iv. Imprimir la lista de estudiantes en orden alfabético. Para ello, utilice el
algoritmo std::sort() en <algorithm>, el cual requerirá sobreescribir el
operador “<”, y sobreescriba el operador “<<” (del método y clase que
correspondan) para presentar los datos por pantalla.*/