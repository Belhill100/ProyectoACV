#ifndef VIEW_H
#define VIEW_H

//Incluimos las librerias
#include <iostream>
#include <stdlib.h>
#include "Archivo.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

//Definicion de la clase view
class View{ 
private:
	Archivo archivoTesis;
public:		
	View();
	void mostrarMenu();
};

#endif