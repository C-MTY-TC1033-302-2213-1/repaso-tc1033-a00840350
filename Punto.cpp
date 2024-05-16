#include "Punto.hpp"

// Constructores
Punto::Punto(){
    x = 0;
    y = 0;
 }
Punto::Punto(double _x, double _y){
    x = _x;
    y = _y;
 }

// Metodos modificadores - setters
void Punto::setX(double _x){
    x = _x;
 }
void Punto::setY(double _y){
    y = _y;
 }

// Metodos de acceso - getters
double Punto::getX(){ }
double Punto::getY(){ }

// Otros métodos
double Punto::calculaDistancia(Punto p2){ }
Punto::str(){ }