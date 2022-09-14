#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED
#include <stdlib.h>
#include <iostream>
using namespace std;
class Estudiante{

   private:
       int idEstudiante;
       string nombre;
       string apellido;
   public:
    Estudiante(){
        this->idEstudiante = 0;

    }
    Estudiante(int id, string n, string a){
        this->idEstudiante = id;
        this->nombre = n;
        this->apellido = a;
    }
    void setIdEstudiante(int id){
        this->idEstudiante = id;
    }
    int getIdEstudiante(){
        return this->idEstudiante;

    }
     void setNom(string nom){
        this->nombre = nom;
    }
    string getNombre(){
        return this->nombre;

    }
     void setApellido(string ape){
        this->apellido = ape;
    }
    string getApellido(){
        return this->apellido;
    }

};


#endif // ESTUDIANTE_H_INCLUDED
