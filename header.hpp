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

    void tiempo();
    void tiempo_horas();
    void tiempo_minutos();
    void tiempo_segundos();
    void mostrar_tiempo const();
};

#endif;