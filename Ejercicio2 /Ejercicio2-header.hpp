#ifndef CURSO_H
#define CURSO_H
#include <string>
#include <iomanip>
#include<stdexcept>
#include <vector>
#include <list>
#include <algorithm>
#include <map>

//De la clase estudiante salen 
class Estudiante{
    
    private:
    std::string nombre_completo;
    int legajo;
    std::map<std::string, float> cursos;

    public:
    //Constructor:
    Estudiante(std::string nombre_estudiante, int legajo_estudiante, std::map<std::string,float> notas_estudiante);

    //Gets son los que permiten obtener la información individual
    std::string get_nombre() const;
    int get_legajo() const;
    int get_promedio() const;

};


class Curso{
    private:
        std::vector<std::shared_ptr<Estudiante>> estudiantes_curso;

        int cantidad = 0;
        const int capacidad = 20;

    public:
        Curso::Curso(int cantidad);
        void inscribir_estudiante(std::shared_ptr<Estudiante>estudiante_nuevo);
        void desinscribir_estudiante(int legajo);
        void buscar_estudiante(int legajo);
        bool curso_completo() const;
        void imprimir_lista_estudiantes() const; //orden alfabético: sort()
        //copia_curso;
        /*v. Dado que algunos cursos comparten la mayor parte de los estudiantes, se
desea poder hacer una copia del objeto curso. Justifique su respuesta con
un comentario en el código (esta puede llevar varias líneas), indicando de
que tipo de copia se trata y como la hizo.*/


};

#endif