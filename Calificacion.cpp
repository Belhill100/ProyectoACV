#include <iostream>
#include "Calificacion.h"

Calificacion::Calificacion(){
    this->id; //para que se sepa que no es valido, se debe inicializar
    this->calificacionJuradoUno;
    this->calificacionJuradoDos;
    this->comentarios;
}

Calificacion::Calificacion(int id, float calificacionJuradoUno, float calificacionJuradoDos, string comentarios){
    this->id = id;
    this->calificacionJuradoUno = calificacionJuradoUno;
    this->calificacionJuradoDos = calificacionJuradoDos;
    this->comentarios = comentarios;
}

int Calificacion::getId(){
    return id;
}

void Calificacion::setId(int id){
    this->id = id;
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