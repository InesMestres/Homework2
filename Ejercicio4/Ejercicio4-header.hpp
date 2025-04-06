#ifndef BANCO_H
#define BANCO_H
#include <iostream>
#include <string>
#include <iomanip>
#include<stdexcept>
#include <vector>
#include <list>
#include <algorithm>
#include <map>
#include <memory>


//Clase abstracta Banco:
class Banco{

    protected: 
    std::string titularCuenta; //protegido para mantener privacidad del usuario.
    double balance; //protected (privado desde el main) para proteger información de cantidad de dinero del usuario.

    public: //Los siguientes métodos son públicos para que que el banco y sus clientes puedan hacer modificaciones a sus cuentas. 
    Banco(std::string titularCuenta, double balance);

    double get_balance() const;
    std::string get_titular() const;

    void depositar(double cantidad_dinero);
    virtual bool retirar(double cantidad_dinero) = 0;
    virtual void mostrar_info() const = 0;
};


class cajaDeAhorro: public Banco{

    private: 
    mutable int cantidadVecesInfo = 0;

    public:
    cajaDeAhorro(std::string titularCuenta, double balance);
    bool retirar(double cantidad_dinero) override;
    void mostrar_info() const override;
};


class cuentaCorriente: public Banco{
    
    private:
    std::shared_ptr<cajaDeAhorro> puntero_cajaAhorro; 

    public:
    cuentaCorriente(std::string titularCuenta, double balance, std::shared_ptr<cajaDeAhorro> puntero_cajaAhorro);
    bool retirar(double cantidad_dinero) override;
    void mostrar_info()const override;
    
};

#endif
