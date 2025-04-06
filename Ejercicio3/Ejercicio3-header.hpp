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
    float get_valor_real() const;
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
    float get_parte_real() const;
    float get_parte_imaginaria() const;

    std::shared_ptr<Numero> suma(std::shared_ptr<Numero> otro_numero) const override;
    std::shared_ptr<Numero> resta(std::shared_ptr<Numero> otro_numero) const override;
    std::shared_ptr<Numero> multiplicacion(std::shared_ptr<Numero> otro_numero) const override;
    std::shared_ptr<Numero> division(std::shared_ptr<Numero> otro_numero) const override;
    std::string toString() const override;
};


#endif