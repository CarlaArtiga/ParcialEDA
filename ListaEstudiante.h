#ifndef LISTAESTUDIANTE_H_INCLUDED
#define LISTAESTUDIANTE_H_INCLUDED
#include "NodoE.h"
#include "Estudiante.h"
using namespace std;

class ListaEstudiante{
private:
    NodoE *Primero;
    NodoE *Ultimo;
    bool ListaVacia(){
        return (this->Primero=NULL);
    }
public:

    ListaEstudiante(){
        this->Primero = NULL;
        this->Ultimo = NULL;
    }
     ~ListaEstudiante()
    {
        this->Ultimo = NULL;
        while(this->Primero)
        {
            NodoE *tmp = this->Primero;
            this->Primero = this->Primero->siguiente;
            delete tmp;
        }
    }

    void Insertar(Estudiante v){
        NodoE *nuevo = new NodoE(v);
        if(this->ListaVacia()){
            this->Primero = nuevo;
        }
        else{
            this->Ultimo->siguiente = nuevo;
            this->Ultimo = nuevo;
        }
        this->Ultimo = nuevo;
    }
    void Mostrar(){
        NodoE *tmp = this->Primero;
        if(this->ListaVacia()){
            cout << "La lista esta vacia \n";
        }
        else{
            cout <<"ID\tNombre\tApellido\n";
            while(tmp){
                cout << tmp->valor.getIdEstudiante() << "\t";
                cout << tmp->valor.getNombre() << "\t";
                cout << tmp->valor.getApellido() << "\n";
                tmp = tmp->siguiente;
            }
            cout << "NULL\n";
        }
    }
        NodoE *Buscar(int v)
    {
        bool encontrado = false;
        NodoE *tmp = this->Primero;
        NodoE *resp = NULL;
        while(tmp && !encontrado)
        {
            if(tmp->valor.getIdEstudiante() == v)
            {
                encontrado = true;
                resp = tmp;
            }
            else
            {
                tmp = tmp->siguiente;
            }
        }
        return resp;
    }

    void Modificar(int v, Estudiante n)
    {
        NodoE *tmp = this->Buscar(v);
        if(tmp)
        {
            tmp->valor = n;
            cout << "El valor se modifico con exito\n";

        }
        else
        {
            cout<< "El dato " << v <<" no se encontro en la lista\n";

        }
    }

    void Eliminar(int v)
    {
        if(!this->ListaVacia())
        {
            //Busqueda del dato a eliminar
            bool encontrado = false;
            NodoE *aux = this->Primero;
            NodoE *anterior = NULL;
            NodoE *tmp = NULL;
            while(aux && !encontrado)
            {
                if(aux->valor.getIdEstudiante() == v)
                {
                    encontrado = true;
                    tmp = aux;
                }
                else
                {
                    anterior = aux;
                    aux = aux->siguiente;
                }
            }
            if(tmp)
            {
                //Esta en la lista
                if(tmp == this->Primero)
                {
                    //Esta al inicio
                    this->Primero = this->Primero->siguiente;
                }
                else
                {
                    if(tmp == this->Ultimo)
                    {
                        //Al final
                        this->Ultimo = anterior;
                        this->Ultimo->siguiente = NULL;

                    }
                    else
                    {
                        //en medio
                        anterior->siguiente = tmp->siguiente;

                    }
                }
                delete tmp;
            }


        }
        else
        {
            cout << "El dato " << v << " no esta en la lista\n";
        }

    }

};


#endif // LISTAESTUDIANTE_H_INCLUDED
