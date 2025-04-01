#include <iostream>
#include <iomanip>
#include "Time.h"

Time::tiempo(){
    horas = 0;
    minutos = 0;
    segundos = 0;
    referencia = "a.m."
}

void Time::mostrar_info() const{

    std::cout << std::setw(2) << std::setfill('0') << horas << "," << std::setw(2) << std::setfill('0') << minutos << "," << std::setw(2) << std::setfill('0') segundos << " " << referencia << std::endl;
}