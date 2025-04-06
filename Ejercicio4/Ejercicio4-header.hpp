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


/*4. Se tiene una clase abstracta que representa una cuenta de banco genérica. Esta clase
tiene los siguiente atributos y métodos:
i. balance: el total de la cuenta (tipo double).
ii. titularCuenta: nombre del dueño de la cuenta (string).
iii. depositar(): deposita una cantidad de dinero en la cuenta.
iv. retirar(): retira una cantidad de dinero de la cuenta (método virtual puro).
v. mostrarInfo(): muestra la información de la cuenta (método virtual puro) que
consta del balance, el tipo de cuenta y el nombre del titular.

De esta clase se derivan dos subclases:
CajaDeAhorro:
• El método retirar() impide retirar más dinero del que existe en el balance.
• Se realizará un descuento de $20 del balance luego de mostrar más de 2 veces
la información de la cuenta.
CuentaCorriente:
• El método retirar() permite retirar dinero de la caja de ahorro si no existen
suficientes fondos en este tipo de cuenta.
• En caso de que la caja de ahorro tampoco tenga dinero, se imprimirá un aviso
de que la cuenta no posee dinero. Utilizar friend para esto.
Se pide:
a. Establecer los especificadores de acceso (public, private y private) en los atributos y
métodos de todas las clases, explicando su elección en función de la seguridad y la la
flexibilidad para futuros requerimientos de cambio.
b. Escriba el código para implementar todas clases.
c. Escriba el código que permita probar los puntos mencionados para CajaDeAhorro y
CuentaCorriente.*/

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
    virtual void mostrar_info(std::string titularCuenta, double balance, std::string tipo_de_cuenta) = 0;
};


class cajaDeAhorro: public Banco{

    private: 
    int cantidadVecesInfo = 0;

    public:
    cajaDeAhorro(double balance, std::string titularCuenta);
    bool retirar(double cantidad_dinero) override;
    void mostrar_info();
};



class cuentaCorriente: public Banco{
    
    private:
    double balance; 

    public:
    cuentaCorriente(std::string titularCuenta, double balance, std::shared_ptr<cajaDeAhorro> cajaAhorro);
    bool retirar(double cantidad_dinero) override;
    void mostrar_info();
    
};

#endif
