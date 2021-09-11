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
	string getNombre();
};
#endif