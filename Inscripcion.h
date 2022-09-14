#ifndef INSCRIPCION_H_INCLUDED
#define INSCRIPCION_H_INCLUDED
#include "Estudiante.h"
#include "Materia.h"
#include <stdlib.h>
#include "ListaMateria.h"
using namespace std;


class Inscripcion{
private:
    int idInscripcion;
    Estudiante est;
    string cicloAcademico;
    ListaMateria lst;
public:
    Inscripcion(){
        this->idInscripcion = 0;

    }
    Inscripcion(int id, Estudiante e, string ca){
        this->idInscripcion = id;
        this->est = e;
        this->cicloAcademico = ca;
    }
    void setIdInscripcion(int i){
        this->idInscripcion = i;
    }
    int getIdInscripcion(){
        return this->idInscripcion;
    }
    void setEstudiante(Estudiante e){
        this->est = e;
    }
    Estudiante getEstudiante(){
        return this->est;
    }
    void setCicloAcademico(string ciclo){
        this->cicloAcademico = ciclo;
    }
    string getCicloAcademico(){
        return this->cicloAcademico;
    }
    void agregarMaterias(ListaMateria lst){

        lst.Insertar(Materia(1,"a"));

    }
    void MostrarMaterias(){
        lst.Mostrar();
    }


};




#endif // INSCRIPCION_H_INCLUDED
