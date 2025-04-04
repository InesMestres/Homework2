#ifndef BANCO_H
#define BANCO_H
#include <string>
#include <iomanip>
#include<stdexcept>
#include <vector>
#include <list>
#include <algorithm>
#include <map>

class Banco{
    private: 
    double balance; //privado para proteger información de cantidad de dinero del usuario.
    std::string titularCuenta; //privado para proteger privacidad del usuario.

    public:
    Banco();

    double get_balance();
    std::string get_nombre();

    void depositar(double cantidad_dinero);
    virtual int retirar(double cantidad_dinero);
    virtual void mostrar_info();
};

class cajaDeAhorro: public Banco{
    private:
    public:
    int retirar();
    
};

class cuentaCorriente: public Banco{
    private:
    public:
    int retirar();
    //friend;
    
};

#endif