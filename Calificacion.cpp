#include <iostream>
#include "Calificacion.h"

Calificacion::Calificacion(){
    this->calificacionJuradoUno = 0;
    this->calificacionJuradoDos = 0;
    this->comentarios = "Vacio";
}

Calificacion::Calificacion(Criterio criterio, float calificacionJuradoUno, float calificacionJuradoDos, string comentarios){
    this->criterio = criterio;
    this->calificacionJuradoUno = calificacionJuradoUno;
    this->calificacionJuradoDos = calificacionJuradoDos;
    this->comentarios = comentarios;
}

Criterio Calificacion::getCriterio(){
    return criterio;
}

void Calificacion::setCriterio(Criterio criterio){
    this->criterio = criterio;
}

float Calificacion::getCalificacionJuradoUno(){
    return calificacionJuradoUno;
}

void Calificacion::setCalificacionJuradoUno(float calificacionJuradoUno){
    this->calificacionJuradoUno = calificacionJuradoUno;
}

float Calificacion::getCalificacionJuradoDos(){
    return calificacionJuradoDos;
}

void Calificacion::setCalificacionJuradoDos(float calificacionJuradoDos){
    this->calificacionJuradoDos = calificacionJuradoDos;
}

string Calificacion::getComentarios(){
    return comentarios;
}

void Calificacion::setComentarios(){
    this->comentarios = comentarios;
}