#include <iostream>
#include <iomanip>
#include "Ejercicio1-header.hpp"

//Sin parámetros: todo 0
Time::Time(){
    horas = 0;
    minutos = 0;
    segundos = 0;
    referencia = "a.m.";
    std::cout << std::setw(2) << std::setfill('0') << horas << "," << std::setw(2) << std::setfill('0') << minutos << "," << std::setw(2) << std::setfill('0') segundos << " " << referencia << std::endl;
}

//Muestra horas:
Time::Time(int horas_tiempo){
    if(horas_tiempo < 0 || horas_tiempo > 12){throw std::invalid_argument("EL valor de minutos es inválido");}
    horas = horas_tiempo;
    minutos = 0;
    segundos = 0;
    referencia = "a.m.";
    std::cout << std::setw(2) << std::setfill('0') << horas << "," << std::setw(2) << std::setfill('0') << minutos << "," << std::setw(2) << std::setfill('0') segundos << " " << referencia << std::endl;
}

//Muestra horas y minutos: 
Time::Time(int horas_tiempo, int minutos_tiempo){
    if(horas_tiempo < 0 || horas_tiempo > 12){throw std::invalid_argument("EL valor de horas es inválido");}
    if(minutos_tiempo < 0 || minutos_tiempo > 59){throw std::invalid_argument("EL valor de minutos es inválido");}
    horas = horas_tiempo;
    minutos = minutos_tiempo;
    segundos = 0;
    referencia = "a.m.";
    std::cout << std::setw(2) << std::setfill('0') << horas << "," << std::setw(2) << std::setfill('0') << minutos << "," << std::setw(2) << std::setfill('0') segundos << " " << referencia << std::endl;
}

//Muestra horas, minutos, y segundos, pero no se le pasa referencia de tiempo: 
Time::Time(int horas_tiempo, int minutos_tiempo, int segundos_tiempo){

    if(horas_tiempo < 0 || horas_tiempo > 23){throw std::invalid_argument("EL valor de horas es inválido");}
    if(minutos_tiempo < 0 || minutos_tiempo > 59){throw std::invalid_argument("EL valor de minutos es inválido");}
    if(segundos_tiempo < 0 || segundos_tiempo > 59){throw std::invalid_argument("El valor de sengundos es inválido");}

    horas = horas_tiempo;
    minutos = minutos_tiempo;
    segundos = segundos_tiempo;
    referencia = "a.m.";

    std::cout << std::setw(2) << std::setfill('0') << horas << "," << std::setw(2) << std::setfill('0') << minutos << "," << std::setw(2) << std::setfill('0') segundos << " " << referencia << std::endl;
}

//Muestra horas, minutos y segundos en el formato pedido, con referencia: 
Time::Time(int horas_tiempo, int minutos_tiempo, int segundos_tiempo, string referencia_tiempo) const{
    if(horas_tiempo < 0 || horas_tiempo > 23){throw std::invalid_argument("EL valor de horas es inválido");}
    if(minutos_tiempo < 0 || minutos_tiempo > 59){throw std::invalid_argument("EL valor de minutos es inválido");}
    if(segundos_tiempo < 0 || segundos_tiempo > 59){throw std::invalid_argument("El valor de sengundos es inválido");}
    if(referencia_tiempo != "a.m." && referencia_tiempo != "p.m."){throw std::invalid_argument("La referencia de tiempo es inválida");}

    horas = horas_tiempo;
    minutos = minutos_tiempo;
    segundos = segundos_tiempo;
    referencia = referencia_tiempo;

    std::cout << std::setw(2) << std::setfill('0') << horas << "," << std::setw(2) << std::setfill('0') << minutos << "," << std::setw(2) << std::setfill('0') segundos << " " << referencia << std::endl;
}

//Permite mostrar las horas en el formato de 0 a 24: 
void Time::mostrar_24horas(int horas_tiempo, int minutos_tiempo, int segundos_tiempo){
    
    if(horas_tiempo < 0 || horas_tiempo > 23){throw std::invalid_argument("El valor de sengundos es inválido");}

    horas = horas_tiempo;
    minutos = minutos_tiempo;
    segundos = segundos_tiempo;
    
}

void mostrar_info(){
    std::cout << std::setw(2) << std::setfill('0') << horas << "," << std::setw(2) << std::setfill('0') << minutos << "," << std::setw(2) << std::setfill('0') segundos << std::endl;
};



//Ahora quiero poder devolver las horas, minutos, segundos y la referencia de forma individual: 
int Time::getHoras(){return horas;}
int Time::getMinutos(){return minutos;}
int Time::getSegundos(){return segundos;}
std::string Time::getReferencia(){return referencia;}

//Para poder modificar las horasm minutos, segundos y la referencia de forma individual:

void Time::setHoras(int nuevo_horas_tiempo){horas = nuevo_horas_tiempo;}
void Time::setMinutos(int nuevo_minutos_tiempo){minutos = nuevo_minutos_tiempo;}
void Time::setSegundos(int nuevo_segundos_tiempo){segundos = nuevo_segundos_tiempo;}
void Time::setReferencia(int nueva_referencia_tiempo){referencia = nueva_referencia_tiempo;}

