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
	vector<Criterio> criterios;
    map<string, Acta> actas; 

public:		
	Archivo();
	Archivo(string nombre); 
	string getNombre();
	void setNombre(string nombre);
	void agregarCriterio(vector<Criterio> criterios);
	void eliminarCriterio(vector<Criterio> criterios);
	void cambiarPorcentaje(vector<Criterio> criterios);
	void cambiarTexto(vector<Criterio> criterios);
};
#endif