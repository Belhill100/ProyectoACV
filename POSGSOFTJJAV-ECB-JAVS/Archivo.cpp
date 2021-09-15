#include <iostream>
#include "Archivo.h"

Archivo::Archivo(){
    this->nombre = "Tesis";

    Criterio criterioUno(1, "Manejo de Bibliografia", 0.10);// se inicializan los criterios bases
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
        cout << "Ingrese el porcentaje del criterio " << temp.getTexto() << ": ";//toca cambiar el porcentaje de todos para que de 100%
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
    cout << "Ingrese comentarios adicionales si lo desea : ";
    getline(cin, temporal);
    actTemporal.setComentariosGenerales(temporal);
    fflush;
    cout << "Ingrese 1 si el trabajo es de investigacion o 0 si es aplicado : ";
    cin >> tipo;
    if (tipo == 1){
        actTemporal.setTipoTrabajo(INVESTIGACION);
    }else{
        actTemporal.setTipoTrabajo(APLICADO);
    }
    for(map<int, Criterio>::iterator pCriterio = criterios.begin(); pCriterio != criterios.end(); pCriterio++){
        actTemporal.asignarCalificacion(pCriterio->second);//se le asigna un criterio a cada calificacion
    }
    actas[actTemporal.getNumActa()] = actTemporal;
}

void Archivo::calificarActa(){
    int numActa;
    cout << "Ingrese el numero del acta: ";
    cin >> numActa;
    Acta temp = actas[numActa];
    temp.calificarActa();
}

void Archivo::mostrarActa(){
    int numActa;
    cout << "Digite el numero de acta que desea mostrar: ";
    cin >> numActa;
    Acta temp = actas[numActa];

    cout << "ACTA #" << temp.getNumActa();
    cout << "\nFecha: " << temp.getFecha();
    cout << "\nAutor: " << temp.getNombreEstudiante();
    cout << "\nNombre del trabajo: " << temp.getNombreTrabajo();
    cout << "\nTipo de trabajo: " << temp.getTipoTrabajo();
    cout << "\nNombre Director: " << temp.getNombreDirector();
    cout << "\nNombre Codirector: " << temp.getNombreCoDirector();
    cout << "\nNombre Jurado #1: " << temp.getNombreJuradoUno();
    cout << "\nNombre Jurado #2: " << temp.getNombreJuradoDos();
    
    cout << "\nComentarios: " << temp.getComentariosGenerales();
    cout << "\nEstado del Trabajo: " << temp.getEstado();
    cout << "\nNota Final: " << temp.getNotaFinal();

}

void Archivo::resumenActas(){
    int numActa;
    fstream resumenFile;
    fstream ReadFile("Resumen.csv", ios::in);
    if(!ReadFile){
        fstream CreateFile("Resumen.csv", ios::out);
        CreateFile << "#Acta,Fecha,Autor,NombreDirector,NombreJurado1,NombreJurado2,Estado,NotaFinal" <<endl;
    }

    resumenFile.open("Resumen.csv", ios::app);
    for(map<int, Acta>::iterator pActa = actas.begin(); pActa != actas.end(); pActa++){
        Acta temp = pActa->second;
        cout << "ACTA #" << temp.getNumActa();
        cout << "\nFecha: " << temp.getFecha();
        cout << "\nAutor: " << temp.getNombreEstudiante();
        cout << "\nNombre Director: " << temp.getNombreDirector();
        cout << "\nNombre Jurado #1: " << temp.getNombreJuradoUno();
        cout << "\nNombre Jurado #2: " << temp.getNombreJuradoDos();
        cout << "\nEstado del Trabajo: " << temp.getEstado();
        cout << "\nNota Final: " << temp.getNotaFinal();
    }
    resumenFile.close();
}