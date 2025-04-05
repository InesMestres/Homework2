#include <iomanip>
#include "Ejercicio2-header.hpp"
#include <memory>

//Main Ejercicio 2:

//Main que permite observar mecanismos creados en el ejercicio:
int main(){


    //Compruebo las funciones de Estudiante:
    std::string estudiante1_nombre = "María Castro";
    int estudiante1_legajo = 100;
    std::map<std::string, float> estudiante1_notas = {{"Matemática", 7}, {"Lengua", 9}, {"Programación", 8}}; 

    auto estudiante1 = std::make_shared<Estudiante>(estudiante1_nombre, estudiante1_legajo, estudiante1_notas);
    estudiante1 -> get_nombre();
    estudiante1 -> get_legajo();
    estudiante1 -> get_promedio();

    //Compruebo funciones de Curso:
    Curso mi_curso(0);
    mi_curso.inscribir_estudiante(estudiante1);
    mi_curso.buscar_estudiante(estudiante1_legajo);
    mi_curso.curso_completo();
    mi_curso.imprimir_lista_estudiantes();
    mi_curso.desinscribir_estudiante(estudiante1_legajo);
    mi_curso.imprimir_lista_estudiantes();

    return 0;
}

/*Respuesta a preguntas:

La relación entre los objetos curso y estudiante se trata de agregación:
El curso se comporta como un "todo" y los estudiantes, sus "partes", sin embargo, el ciclo de vida de los objetos no dependen del otro objeto.
Pero, si estan estrechamente relacionados.*/
