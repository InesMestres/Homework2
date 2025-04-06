#include <string>
#include "Ejercicio1-header.hpp"
#include <iostream>

int main(){

    int mi_horas;
    int mi_minutos;
    int mi_segundos;
    std::string mi_referencia;
    char continuar;

    do{
    try{
    std::cout << "Ingrese la hora: " << std::endl;
    std::cin >> mi_horas;
    std::cout << "Ingrese los minutos: " << std::endl;
    std::cin >> mi_minutos;
    std::cout << "Ingrese los segundos: " << std::endl;
    std::cin >> mi_segundos;
    std::cout << "Ingrese la referencia: " << std::endl;
    std::cin >> mi_referencia;


    Time t1;
    Time t2(mi_horas);
    Time t3(mi_horas, mi_minutos);
    Time t4(mi_horas, mi_minutos, mi_segundos);
    Time t5(mi_horas, mi_minutos, mi_segundos, mi_referencia);

    std::cout << "Formato Standard:" << std::endl;
    t1.mostrar_info();
    t2.mostrar_info();
    t3.mostrar_info();
    t4.mostrar_info();
    t5.mostrar_info();

    std::cout << "Formato 24hs:" << std::endl;
    t5.mostrar_24horas();
    

    std::cout << "Querrías ingresar otro horario?" << std::endl;
    
    
    std::cout << "Ingrese la hora: " << std::endl;
    std::cin >> mi_horas;
    std::cout << "Ingrese los minutos: " << std::endl;
    std::cin >> mi_minutos;
    std::cout << "Ingrese los segundos: " << std::endl;
    std::cin >> mi_segundos;
    std::cout << "Ingrese la referencia: " << std::endl;
    std::cin >> mi_referencia;

    t5.setHoras(mi_horas);
    t5.setMinutos(mi_minutos);
    t5.setSegundos(mi_segundos);
    t5.setReferencia(mi_referencia);
    t5.mostrar_info();

    }

    catch(std::invalid_argument& argumento){
        std::cerr << "¡Error!" << argumento.what() << std::endl;
    }
    
    std::cout << "¿Querrías ingresar otro horario? (si = s/no = n)";
    std::cin >> continuar;
    }while(continuar == 's');

    return 0;

}