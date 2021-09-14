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
   APROBADO, REPROBADO
}Estado;

typedef enum{
    APLICADO, INVESTIGACION
}TipoTrabajo;

class Acta{
private: //Atributos
	string fecha;
	int numActa;
	string nombreEstudiante;
	string nombreTrabajo;
    TipoTrabajo tipoTrabajo;
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
    Acta(string fecha, string nombreEstudiante, string nombreTrabajo,
    TipoTrabajo tipoTrabajo, string nombreDirector, string nombreCoDirector, string nombreJuradoUno,
    string nombreJuradoDos, string comentariosGenerales, Estado estado, float notaFinal);
    //Se calcula la nota final teniendo en cuenta las calificaciones parciales y porcentajes
    void calcularNota();
    void calificarActa();
	// Gets and sets
    string getFecha();
    void setFecha(string fecha);
    int getNumActa();
    void setNumActa(int numActa);
    string getNombreEstudiante();
    void setNombreEstudiante(string nombreEstudiante);
    string getNombreTrabajo();
    void setNombreTrabajo(string nombreTrabajo);
    TipoTrabajo getTipoTrabajo();
    void setTipoTrabajo(TipoTrabajo tipoTrabajo);
    string getNombreDirector();
    void setNombreDirector(string nombreDirecctor);
    string getNombreCoDirector();
    void setNombreCoDirector(string nombreCoDirector);
    string getNombreJuradoUno();
    void setNombreJuradoUno(string nombreJuradoUno);
    string getNombreJuradoDos();
    void setNombreJuradoDos(string nombreJuradoDos);
    string getComentariosGenerales();
    void setComentariosGenerales(string comentariosGenerales);
    Estado getEstado();
    void setEstado(Estado estado);
    float getNotaFinal();
    void setNotaFinal(float notaFinal);
};
#endif /* !ACTA_H */