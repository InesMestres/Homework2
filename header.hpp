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

    tiempo();
    void mostrar_tiempo const();
};

#endif;