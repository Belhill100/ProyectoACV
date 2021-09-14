#ifndef	CALIFICACION_H
//Guardas
#define CALIFICACION_H

#include <iostream>
#include <stdlib.h>
#include "Criterio.h"

// Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Calificacion {
private: //Atributos
	Criterio criterio;
	float calificacionJuradoUno;
	float calificacionJuradoDos;
	string comentarios;

public:           //Metodos
	Calificacion(); //Constructor
    Calificacion(Criterio criterio, float calificacionJuradoUno, float calificacionJuradoDos, string comentarios);
	// Gets and sets
    Criterio getCriterio();
    void setCriterio(Criterio criterio);
    float getCalificacionJuradoUno();
	void setCalificacionJuradoUno(float calificacionJuradoUno);
    float getCalificacionJuradoDos();
	void setCalificacionJuradoDos(float calificacionJuradoDos);
	string getComentarios();
    void setComentarios ();
};
#endif /* !CALIFICACION_H */