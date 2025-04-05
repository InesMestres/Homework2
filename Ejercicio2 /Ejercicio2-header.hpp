#ifndef CURSO_H
#define CURSO_H
#include <string>
#include <iomanip>
#include<stdexcept>
#include <vector>
#include <list>
#include <algorithm>
#include <map>
#include <iostream>

//De la clase estudiante salen 
class Estudiante{
    
    private:
    std::string nombre_completo;
    int legajo;
    std::map<std::string, float> notas;

    public:
    //Constructor:
    Estudiante(std::string nombre_estudiante, int legajo_estudiante, std::map<std::string,float> notas_estudiante);

    //Gets son los que permiten obtener la información individual (nombre, legajo, promedio):
    std::string get_nombre() const;
    int get_legajo() const;
    float get_promedio() const;

    bool operator<(const Estudiante& estudiante_nuevo) const; //enseña como comparar alfabéticamente a los estudiantes. 
    friend std::ostream& operator<<(std::ostream& flujo_salida, const Estudiante& estudiante_nuevo); //enseña como imprimir los estudiantes. 

};


class Curso{
    private:
        std::vector<std::shared_ptr<Estudiante>> estudiantes_curso;

        int cantidad = 0;
        const int capacidad = 20;

    public:
        Curso(int cantidad);
        void inscribir_estudiante(std::shared_ptr<Estudiante>estudiante_nuevo);
        void desinscribir_estudiante(int legajo);
        void buscar_estudiante(int legajo);
        bool curso_completo() const; 
        void imprimir_lista_estudiantes() const; 


};

#endif