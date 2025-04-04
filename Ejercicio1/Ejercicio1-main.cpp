#include <string>
#include "Ejercicio1-header.hpp"


int main(){

    int mi_horas = 10;
    int mi_minutos = 3;
    int mi_segundos = 44;
    std::string mi_referencia = "p.m.";

    Time t1;
    Time t2(mi_horas);
    Time t3(mi_horas, mi_minutos);
    Time t4(mi_horas, mi_minutos, mi_segundos);
    Time t5(mi_horas, mi_minutos, mi_segundos, mi_referencia);
    
    t1.mostrar_info();
    t2.mostrar_info();
    t3.mostrar_info();
    t4.mostrar_info();
    t5.mostrar_info();

    t2.getHoras();
    t3.setMinutos(18);
    t3.mostrar_info();
    

    return 0;

}