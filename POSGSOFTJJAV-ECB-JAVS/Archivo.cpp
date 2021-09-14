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

void Archivo::agregarCriterio(){
    int cont = 1;
    float porcentaje;
    string texto;
    for(map<int, Criterio>::iterator pCriterio = criterios.begin(); pCriterio != criterios.end(); pCriterio++){
        Criterio temp = pCriterio->second;
        cout << "Ingrese el porcentaje del criterio " << temp.getTexto() << ": ";
        cin >> porcentaje;
        temp.setPorcentaje(porcentaje);
        cont++;
    }
    cout << "Ingrese el porcentaje del nuevo criterio: ";
    cin >> porcentaje;
    cout << "Ingrese el texto del nuevo criterio: ";
    cin >> texto;
    Criterio criterioNuevo(cont, texto, porcentaje);
    this->criterios[cont] = criterioNuevo;
}

int Archivo::getNumActas(){
    return numActas;
}

void Archivo::modificarCriterio(){
    int opc, id;
    float porcentaje;
    string texto;
    cout << "Ingrese el id del criterio que desea modificar: ";
    cin >> id;
    cout << "Desea modificar el porcentaje? 1.Si 0.No \nOPC: ";
    cin >> opc;
    if(opc == 1){
        cout << "Digite el nuevo porcentaje: ";
        cin >> porcentaje;
        for(map<int, Criterio>::iterator pCriterio = criterios.begin(); pCriterio != criterios.end(); pCriterio++){
		    Criterio temp = pCriterio->second;
		    if(temp.getID() == id){
			    temp.setPorcentaje(porcentaje);
		    }
        }
    }
    cout << "Desea modificar el texto? 1.Si 0.No \nOPC: ";
    cin >> opc;
    if(opc == 1){
        cout << "Digite el nuevo texto: ";
        getline(cin, texto);
        for(map<int, Criterio>::iterator pCriterio = criterios.begin(); pCriterio != criterios.end(); pCriterio++){
		    Criterio temp = pCriterio->second;
		    if(temp.getID() == id){
			    temp.setTexto(texto);
		    }
        }
    }   
}

void Archivo::agregarActa(){
    int tipo;
    Acta actTemporal;
    string temporal;
    actTemporal.setNumActa(numActas);
    numActas++;
    cout << "Ingrese la fecha : ";
    getline(cin, temporal);
    actTemporal.setFecha(temporal);
    fflush;
    cout << "Ingrese el nombre del autor : ";
    getline(cin, temporal);
    actTemporal.setNombreEstudiante(temporal);
    fflush;
    cout << "Ingrese el nombre del trabajo : ";
    getline(cin, temporal);
    actTemporal.setNombreTrabajo(temporal);
    fflush;
    cout << "Ingrese el nombre del director : ";
    getline(cin, temporal);
    actTemporal.setNombreDirector(temporal);
    fflush;
    cout << "Ingrese el nombre del co director en caso de haber uno, si no, escriba 'Vacio' : ";
    getline(cin, temporal);
    actTemporal.setNombreCoDirector(temporal);
    fflush;
    cout << "Ingrese el nombre del jurado uno : ";
    getline(cin, temporal);
    actTemporal.setNombreJuradoUno(temporal);
    fflush;
    cout << "Ingrese el nombre del jurado dos : ";
    getline(cin, temporal);
    actTemporal.setNombreJuradoDos(temporal);
    fflush;
    cout << "Ingrese 1 si el trabajo es de investigacion o 0 si es aplicado : ";
    cin >> tipo;
    if (tipo == 1){
        actTemporal.setTipoTrabajo(INVESTIGACION);
    }else{
        actTemporal.setTipoTrabajo(APLICADO);
    }
    for(map<int, Criterio>::iterator pCriterio = criterios.begin(); pCriterio != criterios.end(); pCriterio++){
        actTemporal.asignarCalificacion(pCriterio->second);
    }
    actas[actTemporal.getNumActa()] = actTemporal;
}

void Archivo::calificarActa(){
    cout << "Ingrese el numero del acta";
}