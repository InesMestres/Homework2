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
#include <memory>


class Numero{
    private:
    
    public:
    virtual~Numero(){};
    virtual std::shared_ptr<Numero> suma(const Numero& otro_numero) const = 0;
    virtual std::shared_ptr<Numero> Resta(const Numero& otro_numero) const = 0;
    virtual std::shared_ptr<Numero> Multiplicacion(const Numero& otro_numero) const = 0;
    virtual std::shared_ptr<Numero> Division(const Numero& otro_numero) const = 0;
    virtual std::string toString() const = 0;

};

class Entero: public Numero{
    private:
    int valor_entero;
    public:
    Entero(int valor_entero);
    int get_valor_entero() const;
    std::shared_ptr<Numero> Suma(const Numero& otro_numero);
    std::shared_ptr<Numero> Resta(const Numero& otro_numero);
    std::shared_ptr<Numero> Multiplicacion(const Numero& otro_numero);
    std::shared_ptr<Numero> Division(const Numero& otro_numero);

};

class Real: public Numero{
    private:
    int valor_real;
    public:
    Real(int valor_real);
    int get_valor_real() const;
    std::shared_ptr<Numero> Suma(const Numero& otro_numero);
    std::shared_ptr<Numero> Resta(const Numero& otro_numero);
    std::shared_ptr<Numero> Multiplicacion(const Numero& otro_numero);
    std::shared_ptr<Numero> Division(const Numero& otro_numero);
};

class Complejo: public Numero{
    private:
    int valor_complejo;
    public:
    Complejo(int valor_complejo);
    int get_valor_complejo() const;
    std::shared_ptr<Numero> Suma(const Numero& otro_numero);
    std::shared_ptr<Numero> Resta(const Numero& otro_numero);
    std::shared_ptr<Numero> Multiplicacion(const Numero& otro_numero);
    std::shared_ptr<Numero> Division(const Numero& otro_numero);
};


#endif