//#ifndef	CALIFICACION_H
//Guardas
//#define CALIFICACION_H

#include <iostream>
#include <stdlib.h>

// Inclusion de librerias
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Calificacion {
private: //Atributos
	int id;
	float calificacionJuradoUno;
	float calificacionJuradoDos;
	string comentarios;

public:           //Metodos
	Calificacion(); //Constructor
    Calificacion(int id, float calificacionJuradoUno, float calificacionJuradoDos, string comentarios);
	// Gets and sets
    int getId();
    void setId(int id);
    float setCalificacionJuradoUno();
	void setCalificacionJuradoUno(float calificacionJuradoUno);
    float setCalificacionJuradoDos();
	void setCalificacionJuradoDos(float calificacionJuradoDos);
	string getComentarios();
    void setComentarios ();
};
//#endif /* !CALIFICACION_H */