#ifndef Triangulo_hpp
#define Triangulo_hpp

using namespace std;

#include <stdio.h>
#include "Punto.hpp"
#include <string>
#include <math.h>

class Triangulo{
private:
Punto v1, v2, v3;

public:
// Constructores
Triangulo();
Triangulo(Punto _v1, Punto _v2, Punto _v3);

// Metodos modificadores - setters
void setVertice1(Punto _v1);
void setVertice2(Punto _v2);
void setVertice3(Punto _v3);

// Metodos de acceso - getters
Punto getVertice1();
Punto getVertice2();
Punto getVertice3();

// Otros métodos
double perimetro();
double area();
string str();
};

#endif /* Triangulo_hpp */