#include "Ejercicio2-header.hpp"

Curso::Curso(int capacidad_curso){
    
}

void Curso::inscribir_estudiante(Estudiante* estudiante_nuevo){
    if (curso_completo() == true){std::cout<<"No se pueden inscribir mas alumnos, el curso esta completo"<<endl;}
    for(Estudiante* in Curso){
        if(legajo)
    }
}

void Curso::desinscribir_estudiante(){
    
}

void Curso::buscar_estudiante(){

}

bool Curso::curso_completo(){
    if (cantidad >= capacidad){return true;}
    else{
        return false;
    }
}

void imprimir_lista_estudiante(){
    
}

/*

class Curso{
    private:
        std::vector<Estudiante*> estudiantes;
        int capacidad = 20;

    public:
        void inscribir_estudiante();
        void desinscribir_estudiante();
        void buscar_estudiante();
        bool curso_completo();
        void imprimir_lista_estudiantes();


};

#endif*/