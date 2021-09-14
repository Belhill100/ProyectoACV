#ifndef	CRITERIO_H
//Guardas
#define CRITERIO_H

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <iterator>

// Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

typedef enum{
   APLICADO, INVESTIGACION
}tipoTrabajo;

class Criterio{
private: //Atributos
	int ID;
    string texto;
    float porcentaje;

public: //Metodos
    Criterio(); //Constructor
    Criterio(int ID, string texto, float porcentaje); //Constructor con parametros
	// Gets and sets
    int getID();
    void setID(int id);
    string getTexto();
    void setTexto ();
    float getPorcentaje();
    void setPorcentaje(float porcentaje);
};
#endif /* !CRITERIO_H */