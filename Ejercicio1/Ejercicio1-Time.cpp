#include <iostream>
#include <iomanip>
#include "Ejercicio1-header.hpp"

//Sin parámetros: todo 0
Time::Time(){
    horas = 0;
    minutos = 0;
    segundos = 0;
    referencia = "a.m.";
}

//Muestra horas:
Time::Time(int horas_tiempo){
    if(horas_tiempo < 0 || horas_tiempo > 12){throw std::invalid_argument("EL valor de horas es inválido");}
    horas = horas_tiempo;
    minutos = 0;
    segundos = 0;
    referencia = "a.m.";
}

//Muestra horas y minutos: 
Time::Time(int horas_tiempo, int minutos_tiempo){
    if(horas_tiempo < 0 || horas_tiempo > 12){throw std::invalid_argument("EL valor de horas es inválido");}
    if(minutos_tiempo < 0 || minutos_tiempo > 59){throw std::invalid_argument("EL valor de minutos es inválido");}
    horas = horas_tiempo;
    minutos = minutos_tiempo;
    segundos = 0;
    referencia = "a.m.";
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
}

//Muestra horas, minutos y segundos en el formato pedido, con referencia: 
Time::Time(int horas_tiempo, int minutos_tiempo, int segundos_tiempo, std::string referencia_tiempo){
    if(horas_tiempo < 0 || horas_tiempo > 23){throw std::invalid_argument("EL valor de horas es inválido");}
    if(minutos_tiempo < 0 || minutos_tiempo > 59){throw std::invalid_argument("EL valor de minutos es inválido");}
    if(segundos_tiempo < 0 || segundos_tiempo > 59){throw std::invalid_argument("El valor de sengundos es inválido");}
    if(referencia_tiempo != "a.m." && referencia_tiempo != "p.m."){throw std::invalid_argument("La referencia de tiempo es inválida");}

    horas = horas_tiempo;
    minutos = minutos_tiempo;
    segundos = segundos_tiempo;
    referencia = referencia_tiempo;
}

//Permite mostrar las horas en el formato de 0 a 24: 
void Time::mostrar_24horas(){
    int horas_formato24 = horas;
    if(horas_formato24 < 0 || horas_formato24 > 23){throw std::invalid_argument("El valor de horas es inválido");}
    if(horas_formato24 != 12 && referencia == "p.m."){horas_formato24+=12;}
    if(horas_formato24 == 12 && referencia == "a.m."){horas_formato24 = 0;}
    std::cout << std::setw(2) << std::setfill('0') << horas_formato24 << ":" << std::setw(2) << std::setfill('0') << minutos << ":" << std::setw(2) << std::setfill('0') << segundos << std::endl;

}

//muestra info de horario en el formato requerido:
void Time::mostrar_info(){
    std::cout << std::setw(2) << std::setfill('0') << horas << "," << std::setw(2) << std::setfill('0') << minutos << "," << std::setw(2) << std::setfill('0') << segundos << std::endl;
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
void Time::setReferencia(std::string nueva_referencia_tiempo){
    if(nueva_referencia_tiempo != "a.m." && nueva_referencia_tiempo != "p.m."){
        throw std::invalid_argument("La referencia es inválida.");
    }
    referencia = nueva_referencia_tiempo;
}
