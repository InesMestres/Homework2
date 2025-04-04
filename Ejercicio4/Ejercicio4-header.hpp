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
    double get_balance();

    void depositar(double cantidad_dinero);
    virtual int retirar();
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

