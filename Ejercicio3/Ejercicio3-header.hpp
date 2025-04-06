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
#include <iostream>
#include <iomanip>
#include <string>
#include <memory>

class Numero{    
    public:
    virtual~Numero(){};
    virtual std::shared_ptr<Numero> suma(std::shared_ptr<Numero> otro_numero) const = 0;
    virtual std::shared_ptr<Numero> resta(std::shared_ptr<Numero> otro_numero) const = 0;
    virtual std::shared_ptr<Numero> multiplicacion(std::shared_ptr<Numero> otro_numero) const = 0;
    virtual std::shared_ptr<Numero> division(std::shared_ptr<Numero> otro_numero) const = 0;
    virtual std::string toString() const = 0;

};

class Entero: public Numero{
    private:
    int valor_entero;
    public:
    Entero(int valor_entero);
    int get_valor_entero() const;
    std::shared_ptr<Numero> suma(std::shared_ptr<Numero> otro_numero) const override;
    std::shared_ptr<Numero> resta(std::shared_ptr<Numero> otro_numero) const override;
    std::shared_ptr<Numero> multiplicacion(std::shared_ptr<Numero> otro_numero) const override;
    std::shared_ptr<Numero> division(std::shared_ptr<Numero> otro_numero) const override;
    std::string toString() const override;
};

class Real: public Numero{
    private:
    float valor_real;
    public:
    Real(float valor_real);
    int get_valor_real() const;
    std::shared_ptr<Numero> suma(std::shared_ptr<Numero> otro_numero) const override;
    std::shared_ptr<Numero> resta(std::shared_ptr<Numero> otro_numero) const override;
    std::shared_ptr<Numero> multiplicacion(std::shared_ptr<Numero> otro_numero) const override;
    std::shared_ptr<Numero> division(std::shared_ptr<Numero> otro_numero) const override;
    std::string toString() const override;
};

class Complejo: public Numero{
    private:
    float parte_real;
    float parte_imaginaria;
    public:
    Complejo(float parte_real, float parte_imaginaria);
    int get_valor_complejo() const;
    std::shared_ptr<Numero> suma(std::shared_ptr<Numero> otro_numero) const override;
    std::shared_ptr<Numero> resta(std::shared_ptr<Numero> otro_numero) const override;
    std::shared_ptr<Numero> multiplicacion(std::shared_ptr<Numero> otro_numero) const override;
    std::shared_ptr<Numero> division(std::shared_ptr<Numero> otro_numero) const override;
    std::string toString() const override;
};


#endif