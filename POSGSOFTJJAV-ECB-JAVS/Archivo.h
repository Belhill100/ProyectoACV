#ifndef ARCHIVO_H
#define ARCHIVO_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iterator>
#include "Acta.h"
#include "Criterio.h"

using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::iterator;
using std::map;

class Archivo{
private:
	string nombre;
	int numActas;
	int numCriterios;
	map<int, Criterio> criterios;
    map<string, Acta> actas; 

public:		
	Archivo();
	Archivo(string nombre); 
	string getNombre();
	void setNombre(string nombre);
	int getNumActas();
	int getNumCriterios();
	void agregarCriterio(Criterio criterio);
	void eliminarCriterio(int index);
	void cambiarPorcentaje(int id, float porcentaje);
	void cambiarTexto(int id, string texto);
	void agregarActa(string fecha, string nombreEstudiante, string nombreTrabajo,
    TipoTrabajo tipoTrabajo, string nombreDirector, string nombreCoDirector, string nombreJuradoUno,
    string nombreJuradoDos, string comentariosGenerales, Estado estado);
};
#endif