#ifndef POLIMORFISMO_2_TRIANGULO_H
#define POLIMORFISMO_2_TRIANGULO_H

#include <iostream>
#include "FiguraGeometrica.h"

using std::cin;
using std::cout;
using std::endl;

class Triangulo: public FiguraGeometrica{
private:
    float base;
    float altura;
public:
    Triangulo();
    Triangulo(float base, float altura);
    virtual ~Triangulo() = default;

    void dibujarFigura() override;
    float calcularArea() override;
    float calcularPerimetro() override;
};



#endif //POLIMORFISMO_2_TRIANGULO_H
