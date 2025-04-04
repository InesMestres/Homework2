/*3. Escriba una interfaz llamada “Numero” que indique la implementación de las
operaciones suma, resta y multiplicación de números (si desea, puede también agregar
la división), así como también un método denominado “toString” que muestra el
número en formato string.
a. De esta interfaz, se deben implementar las siguientes tres clases:
• Clase “Entero”,
• Clase “Real”,
• Clase “Complejo”
b. Verifique el funcionamiento de cada uno de estas clases mediante la
implementación de cada una de las operaciones con los números que desee e
imprima el resultado utilizando el método “toString”.*/

#ifndef NUMERO_H
#define NUMERO_H
#include <iomanip>
#include <string>


class Numero{
    private:
    
    public:
    Numero::Numero(Numero&);
    virtual int Suma() = 0;
    virtual int Resta() = 0;
    virtual int Multiplicación() = 0;
    virtual int Division() = 0;
    virtual std::string toString() = 0;

};

class Entero: public Numero{

};

class Real: public Numero{
    
};

class Entero: public Numero{
    
};



#endif