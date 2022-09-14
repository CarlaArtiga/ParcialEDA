#ifndef LISTAINSCRIPCION_H_INCLUDED
#define LISTAINSCRIPCION_H_INCLUDED
#include "NodoI.h"
#include "Inscripcion.h"
using namespace std;
class ListaIncripcion
{
private:
    NodoI *Primero;
    NodoI *Ultimo;
    bool ListaVacia()
    {
        return (this->Primero==NULL);
    }
public:
    ListaInscripcion()
    {
        this->Primero = NULL;
        this->Ultimo = NULL;
    }
    ~ListaInscripcion()
    {
        this->Ultimo = NULL;
        while(this->Primero)
        {
            Nodo *tmp = this->Primero;
            this->Primero = this->Primero->siguiente;
            delete tmp;
        }
    }
    void Insertar(Inscripcion v)
    {
        NodoI *nuevo = new Nodo(v);
        if(this->ListaVacia())
        {
            //La lista esta vacia
            this->Primero = nuevo;

        }
        else
        {
            this->Ultimo->siguiente = nuevo;
            this->Ultimo = nuevo;
        }
        this->Ultimo = nuevo;
    }
    void Mostrar()
    {
        NodoI *tmp = this->Primero;
        if(this->ListaVacia())
        {
            cout<<"La lista esta vacia\n";
        }
        else
        {
            cout<<"ID\tNombre\tApellido\n";
            while(tmp)
            {

                cout << tmp->valor.getIdInscripcion() << "\t";
                cout << tmp->valor.getEstudiante() << "\t";
                cout << tmp->valor.getCicloAcademico() << "\n";
                tmp = tmp->siguiente;

            }
            cout << "NULL\n";

        }

    }
    NodoI *Buscar(int v)
    {
        bool encontrado = false;
        NodoI *tmp = this->Primero;
        NodoI *resp = NULL;
        while(tmp && !encontrado)
        {
            if(tmp->valor.getIdInscripcion == v)
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

    void Modificar(int v, Inscripcion n)
    {
        NodoI *tmp = this->Buscar(v);
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
            NodoI *aux = this->Primero;
            NodoI *anterior = NULL;
            NodoI *tmp = NULL;
            while(aux && !encontrado)
            {
                if(aux->valor.getIdInscripcion == v)
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
                        anterior->siguiente = tmp->Siguiente;

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




#endif // LISTAINSCRIPCION_H_INCLUDED
