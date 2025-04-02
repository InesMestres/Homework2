#include <iostream>
#include <iomanip>
#include "Time.h"

Time::tiempo(){
    horas = 0;
    minutos = 0;
    segundos = 0;
    referencia = "a.m."
    std::cout << std::setw(2) << std::setfill('0') << horas << "," << std::setw(2) << std::setfill('0') << minutos << "," << std::setw(2) << std::setfill('0') segundos << " " << referencia << std::endl;

}

Time::tiempo(horas_tiempo){
    horas = horas_tiempo;
    minutos = 0;
    segundos = 0;
    referencia = ""
    std::cout << std::setw(2) << std::setfill('0') << horas << "," << std::setw(2) << std::setfill('0') << minutos << "," << std::setw(2) << std::setfill('0') segundos << " " << referencia << std::endl;

}

void Time::mostrar_info(horas_tiempo, minutos_tiempo, segundos_tiempo) const{
    horas = horas_tiempo;
    minutos = minutos_tiempo;
    segundos = segundos_tiempo;
    std::cout << std::setw(2) << std::setfill('0') << horas << "," << std::setw(2) << std::setfill('0') << minutos << "," << std::setw(2) << std::setfill('0') segundos << " " << referencia << std::endl;
}