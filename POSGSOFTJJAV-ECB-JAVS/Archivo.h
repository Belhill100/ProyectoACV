#ifndef ARCHIVO_H
#define ARCHIVO_H

#include <iostream>
#include <string>
#include <fstream> //libreria para crear y exportar a .txt
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
	//constructores
	Archivo();
	Archivo(string nombre); 
	//gets/sets
	string getNombre();
	void setNombre(string nombre);
	int getNumActas();
	//metodos
	void agregarCriterio();
	void modificarCriterio();
	void agregarActa();
	void calificarActa();//busca un acta y la califica
	void mostrarActa();
	void resumenActas();
};
#endif