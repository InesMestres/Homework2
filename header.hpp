#ifndef TIME_H
#define TIME_H
#include <string>

class Time{
private:
    int horas;
    int minutos;
    int segundos;
    std::string referencia;

public:
    Time();
    Time(int tiempo_horas);
    Time(int tiempo_minutos);
    Time(int tiempo_segundos);
    Time(int tiempo_horas, int tiempo_minutos, int tiempo_segundos);
};

#endif;