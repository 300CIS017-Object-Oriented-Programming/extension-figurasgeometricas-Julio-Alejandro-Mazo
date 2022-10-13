
#include "Triangulo.h"

Triangulo::Triangulo() {
    base = 0;
    altura = 0;
    nombreFigura = "Cuadrado";
}

Triangulo::Triangulo(float base, float altura):Triangulo() {
    this->base = base;
    this->altura = altura;
}

void Triangulo::dibujarFigura() {
    int cantidad;
    cout<<"Ingresa la cantidad de líneas para el triángulo: "<<endl;
    cin>>cantidad;
    for (int i = 1; i <= cantidad; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}

float Triangulo::calcularArea() {
    area = base * altura;
    return area;
}

float Triangulo::calcularPerimetro() {
    perimetro = altura * 3;
    return perimetro;
}