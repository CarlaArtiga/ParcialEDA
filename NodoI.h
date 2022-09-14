#ifndef NODOI_H_INCLUDED
#define NODOI_H_INCLUDED
#include "Inscripcion.h"
class NodoI{
protected:
    Inscripcion valor;
    NodoI *siguiente;
public:
    NodoI(Inscripcion v, NodoI *sig=NULL){
        this->valor = v;
        this->siguiente = sig;
    }
    friend class ListaIncripcion;
};

#endif // NODOI_H_INCLUDED
