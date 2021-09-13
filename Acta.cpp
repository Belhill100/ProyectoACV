#include <iostream>
#include "Acta.h"
	
    Acta::Acta(){
        this->numActa = -1; //para que sepa que se debe inicializar
        this->estado = REPROBADO;
        this->notaFinal = 0;
    }
    Acta::Acta(string fecha, int numActa, string nombreEstudiante, string nombreTrabajo,
    TipoTrabajo tipoTrabajo, string nombreDirector, string nombreCoDirector, string nombreJuradoUno,
    string nombreJuradoDos, string comentariosGenerales, Estado estado, float notaFinal){
        this->fecha = fecha;
        this->numActa = numActa;
        this->nombreEstudiante = nombreEstudiante;
        this->nombreTrabajo = nombreTrabajo;
        this->tipoTrabajo = tipoTrabajo;
        this->nombreDirector = nombreDirector;
        this->nombreCoDirector = nombreCoDirector;
        this->nombreJuradoUno = nombreJuradoUno;
        this->nombreJuradoDos = nombreJuradoDos;
        this->comentariosGenerales = comentariosGenerales;
        this->estado = estado;
        this->notaFinal = notaFinal;
    }
    
    void Acta::CalcularNota(){
        float nota = 0;
        Criterio critTemporal;
        for (vector<Calificacion>::iterator pCalificacion = calificaciones.begin();
		 pCalificacion != calificaciones.end(); pCalificacion++){
		critTemporal = pCalificacion->getCriterio();
        nota += ((pCalificacion->getCalificacionJuradoUno() + pCalificacion->getCalificacionJuradoDos()) / 2) * critTemporal.getPorcentaje();
	    }
        notaFinal = nota;
        if (notaFinal > 3.5){
            estado = APROBADO;
        }else{
            estado = REPROBADO;
        }
    }
	
    string Acta::getFecha(){
        return fecha;
    }
    void Acta::setFecha(string fecha){
        this->fecha = fecha;
    }

    int Acta::getNumActa(){
        return numActa;
    }

    void Acta::setNumActa(int numActa){
        this->numActa = numActa;
    }

    string Acta::getNombreEstudiante(){
        return nombreEstudiante;
    }

    void Acta::setNombreEstudiante(string nombreEstudiante){
        this->nombreEstudiante = nombreEstudiante;
    }

    string Acta::getNombreTrabajo(){
        return nombreTrabajo;
    }

    void Acta::setNombreTrabajo(string nombreTrabajo){
        this->nombreTrabajo;
    }

    TipoTrabajo Acta::getTipoTrabajo(){
        return tipoTrabajo;
    }
    void Acta::setTipoTrabajo(TipoTrabajo tipoTrabajo){
        this->tipoTrabajo = tipoTrabajo;
    }

    string Acta::getNombreDirector(){
        return nombreDirector;
    }

    void Acta::setNombreDirector(string nombreDirecctor){
        this->nombreDirector = nombreDirector;
    }

    string Acta::getNombreCoDirector(){
        return nombreCoDirector;
    }

    void Acta::setNombreCoDirector(string nombreCoDirector){
        this->nombreCoDirector;
    }

    string Acta::getNombreJuradoUno(){
        return nombreJuradoUno;
    }

    void Acta::setNombreJuradoUno(string nombreJuradoUno){
        this->nombreJuradoUno = nombreJuradoUno;
    }

    string Acta::getNombreJuradoDos(){
        return nombreJuradoDos;
    }

    void Acta::setNombreJuradoDos(string nombreJuradoDos){
        this->nombreJuradoDos = nombreJuradoDos;
    }

    string Acta::getComentariosGenerales(){
        return comentariosGenerales;
    }

    void Acta::setComentariosGenerales(string comentariosGenerales){
        this->comentariosGenerales = comentariosGenerales;
    }

    Estado Acta::getEstado(){
        return estado;
    }

    void Acta::setEstado(Estado estado){
        this->estado = estado;
    }

    float Acta::getNotaFinal(){
        return notaFinal;
    }

    void Acta::setNotaFinal(float notaFinal){
        this->notaFinal = notaFinal;
    }
