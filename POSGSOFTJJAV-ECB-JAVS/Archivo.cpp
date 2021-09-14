#include <iostream>
#include "Archivo.h"

Archivo::Archivo(){
    this->nombre = "Tesis";

    Criterio criterioUno(1, "Manejo de Bibliografia", 0.10);
    Criterio criterioDos(2, "Coherencia y Cohesion", 0.15);
    Criterio criterioTres(3, "Desarrollo del tema principal", 0.10);
    Criterio criterioCuatro(4, "Conclusiones Finales", 0.15);
    Criterio criterioCinco(5, "Presentacion del trabajo", 0.10);
    Criterio criterioSeis(6, "Investigacion y Profundidad del tema", 0.15);
    Criterio criterioSiete(7, "Cumplimiento de los objetivos", 0.15);
    Criterio criterioOcho(8, "Innovacion y Creatividad", 0.10);

    this->criterios[criterioUno.getID()] = criterioUno;
    this->criterios[criterioDos.getID()] = criterioDos;
    this->criterios[criterioTres.getID()] = criterioTres;
    this->criterios[criterioCuatro.getID()] = criterioCuatro;
    this->criterios[criterioCinco.getID()] = criterioCinco;
    this->criterios[criterioSeis.getID()] = criterioSeis;
    this->criterios[criterioSiete.getID()] = criterioSiete;
    this->criterios[criterioOcho.getID()] = criterioOcho;
}

string Archivo::getNombre(){
    return nombre;
}

void Archivo::setNombre(string nombre){
    this->nombre =  nombre;
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