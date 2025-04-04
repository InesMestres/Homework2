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
    Estudiante(std::string nombre_completo, int legajo, std::list<int> cursos);

    //Gets son los que permiten obtener la información individual
    std::string get_nombre() const;
    int get_legajo() const;
    int get_promedio() const;

};


class Curso{
    private:
        std::vector<Estudiante*> estudiantes_curso;
        int cantidad = 0;
        const int capacidad = 20;

    public:
        Curso::Curso(int cantidad);
        void inscribir_estudiante(Estudiante* nuevo);
        void desinscribir_estudiante(int legajo);
        void buscar_estudiante(int legajo);
        bool curso_completo() const;
        void imprimir_lista_estudiantes() const;


};

#endif