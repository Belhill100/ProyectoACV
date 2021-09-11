//#ifndef	ACTA_H
//Guardas
//#define ACTA_H

#include <iostream>
#include <stdlib.h>
#include "Calificacion.h"

// Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;

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
    Calificacion calificaciones;
    string comentariosGenerales;
    Estado estado;
    float notaFinal;

public:           //Metodos
	Acta(); //Constructor
	// Gets and sets
    
};
//#endif /* !ACTA_H */