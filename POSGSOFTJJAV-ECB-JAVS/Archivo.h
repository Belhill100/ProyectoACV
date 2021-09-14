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
    map<int, Acta> actas; 

public:		
	Archivo();
	Archivo(string nombre); 
	string getNombre();
	void setNombre(string nombre);
	int getNumActas();
	void agregarCriterio();
	void modificarCriterio();
	void agregarActa();
	void calificarActa();
	void mostrarActa();
};
#endif