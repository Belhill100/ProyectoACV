#ifndef	ACTA_H
//Guardas
#define ACTA_H

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <iterator>
#include "Calificacion.h"

// Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

typedef enum{
   APROBADO, RECHAZADO
}Estado;

class Acta{
private: //Atributos
	string fecha;
	int numActa;
	string nombreEstudiante;
	string nombreTrabajo;
	string nombreDirector;
    string nombreCoDirector;
    string nombreJuradoUno;
    string nombreJuradoDos;
    vector<Calificacion> calificaciones;
    string comentariosGenerales;
    Estado estado;
    float notaFinal;

public:           //Metodos
	Acta(); //Constructor
    void exportarTexto();
    void verResumen();
    void CalcularNota();
	// Gets and sets
    
};
#endif /* !ACTA_H */