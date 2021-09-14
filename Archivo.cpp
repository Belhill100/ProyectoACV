#include <iostream>
#include "Archivo.h"

Archivo::Archivo(){
    this->nombre = "Vacio";
    this->numActas = 0;
    this->numCriterios = 0;
}

Archivo::Archivo(string nombre){
    this->nombre = nombre;
    this->numActas = 0;
} 

string Archivo::getNombre(){
    return nombre;
}

void Archivo::setNombre(string nombre){
    this->nombre =  nombre;
}

int Archivo::getNumActas(){
    return numActas;
}	

int Archivo::getNumCriterios(){
    return numCriterios;
}

void Archivo::agregarCriterio(Criterio criterio){
    criterio.setID(numCriterios);
    numCriterios++;
    criterios.push_back(criterio);
}

void Archivo::eliminarCriterio(int id){
    criterios.erase(criterios.begin() + id);
}

void Archivo::cambiarPorcentaje(int id, float porcentaje){
    criterios[id].setPorcentaje(porcentaje);
}

void Archivo::cambiarTexto(int id, string texto){
    criterios[id].setTexto(texto);
}

void Archivo::agregarActa(string fecha, string nombreEstudiante, string nombreTrabajo,
    TipoTrabajo tipoTrabajo, string nombreDirector, string nombreCoDirector, string nombreJuradoUno,
    string nombreJuradoDos, string comentariosGenerales, Estado estado){
        Acta actTemporal;
        actTemporal.setNumActa(numActas);
        numActas++;
        actTemporal.setFecha(fecha);
        actTemporal.setNombreEstudiante(nombreEstudiante);
        actTemporal.setNombreTrabajo(nombreTrabajo);
        actTemporal.setTipoTrabajo(tipoTrabajo);
        actTemporal.setNombreDirector(nombreDirector);
        actTemporal.setNombreCoDirector(nombreCoDirector);
        actTemporal.setNombreJuradoUno(nombreJuradoUno);
        actTemporal.setNombreJuradoDos(nombreJuradoDos);
        actTemporal.setComentariosGenerales(comentariosGenerales);
        actTemporal.setEstado(estado);
        actTemporal.CalcularNota();
}