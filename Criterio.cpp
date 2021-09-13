#include <iostream>
#include "Criterio.h"

Criterio::Criterio(){ //Constructor
    this->ID; 
    this->texto;
    this->porcentaje;
}

Criterio::Criterio(int ID, string texto, float porcentaje){ //Constructor con parametros
    this->ID = ID;
    this->texto = texto;
    this->porcentaje = porcentaje;
}

//Metodos Gets y Sets
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

