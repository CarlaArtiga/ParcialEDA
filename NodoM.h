#ifndef NODOM_H_INCLUDED
#define NODOM_H_INCLUDED
#include "Materia.h"
class NodoM{
protected:
    Materia valor;
    NodoM *siguiente;
public:
    NodoM(Materia v, NodoM *sig=NULL){
        this->valor = v;
        this->siguiente = sig;
    }
    friend class ListaMateria;
};


#endif // NODOM_H_INCLUDED
