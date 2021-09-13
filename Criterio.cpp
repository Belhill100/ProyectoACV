#include <iostream>
#include "Criterio.h"

Criterio::Criterio(){
    this->ID; //para que se sepa que no es valido, se debe inicializar
    this->texto;
    this->porcentaje;
}

Criterio::Criterio(int ID, string texto, float porcentaje){
    this->ID = ID;
    this->texto = texto;
    this->porcentaje = porcentaje;
}

int Criterio::getID(){
    return ID;
}

void Criterio::setID(int ID){
    this->ID = ID;
}

string Criterio::getTexto(){
    return texto;
}

void Criterio::setTexto(){
    this->texto = texto;
}

float Criterio::getPorcentaje(){
    return porcentaje;
}

void Criterio::setPorcentaje(float porcentaje){
    this->porcentaje = porcentaje;
}

