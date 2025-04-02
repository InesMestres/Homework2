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
    if(horas_tiempo < 0 || horas_tiempo > 24){throw std::invalid_argument("EL valor de horas es inválido");}
    horas = horas_tiempo;
    minutos = 0;
    segundos = 0;
    referencia = ""
    std::cout << std::setw(2) << std::setfill('0') << horas << "," << std::setw(2) << std::setfill('0') << minutos << "," << std::setw(2) << std::setfill('0') segundos << " " << referencia << std::endl;
}

Time::tiempo(minutos_tiempo){
    if(minutos_tiempo < 0 || minutos_tiempo > 60){throw std::invalid_argument("EL valor de minutos es inválido");}
    horas = 0;
    minutos = minutos_tiempo;
    segundos = 0;
    referencia = ""
    std::cout << std::setw(2) << std::setfill('0') << horas << "," << std::setw(2) << std::setfill('0') << minutos << "," << std::setw(2) << std::setfill('0') segundos << " " << referencia << std::endl;

}

Time::tiempo(segundos_tiempo){
    if(segundos_tiempo < 0 || segundos_tiempo > 60){throw std::invalid_argument("El valor de sengundos es inválido");}
    horas = 0;
    minutos = 0;
    segundos = segundos_tiempo;
    referencia = ""
    std::cout << std::setw(2) << std::setfill('0') << horas << "," << std::setw(2) << std::setfill('0') << minutos << "," << std::setw(2) << std::setfill('0') segundos << " " << referencia << std::endl;

}

void Time::mostrar_info(horas_tiempo, minutos_tiempo, segundos_tiempo) const{
    
    if(horas_tiempo < 0 || horas_tiempo > 24){throw std::invalid_argument("EL valor de horas es inválido");}
    if(minutos_tiempo < 0 || minutos_tiempo > 60){throw std::invalid_argument("EL valor de minutos es inválido");}
    if(segundos_tiempo < 0 || segundos_tiempo > 60){throw std::invalid_argument("El valor de sengundos es inválido");}

    horas = horas_tiempo;
    minutos = minutos_tiempo;
    segundos = segundos_tiempo;
    std::cout << std::setw(2) << std::setfill('0') << horas << "," << std::setw(2) << std::setfill('0') << minutos << "," << std::setw(2) << std::setfill('0') segundos << " " << referencia << std::endl;
}