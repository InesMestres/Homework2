#ifndef TIME_H
#define TIME_H
#include <string>
#include <iomanip>
#include<stdexcept>

class Time{
private:
    //Atributos privados propios de mi clase: 
    int horas;
    int minutos;
    int segundos;
    std::string referencia;

public: 
    //Los constructores de la clase: 
    Time();
    Time(int tiempo_horas);
    Time(int tiempo_horas, int tiempo_minutos);
    Time(int tiempo_horas, int tiempo_minutos, int tiempo_segundos);
    Time(int tiempo_horas, int tiempo_minutos, int tiempo_segundos, std::string referencia_tiempo);

    //Gets muestran atributos privados de la clase individualmente:
    int getHoras();
    int getMinutos();
    int getSegundos();
    std::string getReferencia();

    //Sets modifican atributos privados de la clase individualmente;
    void setHoras(int nuevo_horas_tiempo);
    void setMinutos(int nuevo_minutos_tiempo);
    void setSegundos(int nuevo_segundos_tiempo);
    void setReferencia(std::string nueva_referencia_tiempo);

    //Método para mostrar horas en formato de 24: 
    void mostrar_24horas();
    void mostrar_info();
};

#endif