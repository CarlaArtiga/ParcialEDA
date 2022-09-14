#ifndef LISTAMATERIA_H_INCLUDED
#define LISTAMATERIA_H_INCLUDED
#include "Materia.h"
#include "NodoM.h"
using namespace std;

class ListaMateria{
    private:
    NodoM *Primero;
    NodoM *Ultimo;
    bool ListaVacia(){
        return (this->Primero==NULL);
    }
    public:
        ListaMateria(){
            this->Primero = NULL;
            this->Ultimo = NULL;
        }
        void Insertar(Materia v){
            NodoM *nuevo = new NodoM(v);
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
            NodoM *tmp = this->Primero;
            if(this->ListaVacia()){
                cout << "La lista esta vacia\n";
            }else{
                cout <<"ID\tMateria\n";
                while(tmp){
                    cout << tmp->valor.getIdMateria()<<"\t";
                    cout << tmp->valor.getNomMateria() <<"\n";
                    tmp = tmp->siguiente;

                }
                cout<<"NULL\n";
            }
        }
        NodoM *Buscar(int v)
    {
        bool encontrado = false;
        NodoM *tmp = this->Primero;
        NodoM *resp = NULL;
        while(tmp && !encontrado)
        {
            if(tmp->valor.getIdMateria() == v)
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
    void Modificar(int v, Materia n)
    {
        NodoM *tmp = this->Buscar(v);
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
            NodoM *aux = this->Primero;
            NodoM *anterior = NULL;
            NodoM *tmp = NULL;
            while(aux && !encontrado)
            {
                if(aux->valor.getIdMateria() == v)
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


#endif // LISTAMATERIA_H_INCLUDED
