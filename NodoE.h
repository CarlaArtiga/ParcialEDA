#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED
#include "Estudiante.h"
class NodoE{
protected:
    Estudiante valor;
    NodoE *siguiente;
public:
    NodoE(Estudiante v, NodoE *sig=NULL){
        this->valor = v;
        this->siguiente = sig;
    }
    friend class ListaEstudiante;
};


#endif // NODO_H_INCLUDED
