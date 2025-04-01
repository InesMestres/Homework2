#include <iostream>
#include <iomanip>

#include "Time.h"

void Time::mostrar_info() const{
    std cout << horas << "," << minutos << "," << segundos << std::endl;
}