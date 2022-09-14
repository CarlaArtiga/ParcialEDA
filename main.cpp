#include <iostream>
#include "ListaEstudiante.h"
#include "Estudiante.h"
#include "ListaMateria.h"
#include "Materia.h"
#include "ListaInscripcion.h"
#include <stdlib.h>

using namespace std;

int menu(){
    int op;
    cout<<"*** Menu de opciones ***"<<endl;
    cout<<"1. Agregar estudiantes al registro\n";
    cout<<"2. Agregar Materias al catalogo\n";
    cout<<"3. Hacer Inscripcion\n";
    cout<<"4. Ver lista de estudiantes\n";
    cout<<"5. Ver lista de materias\n";
    cout<<"6. Ver lista de inscripcion\n";
    cout<<"7. ver detalles de inscripcion del estudiante\n";
    cout<<"8. Salir\n";
    cout<<"Digite la opcion: ";
    cin>> op;
    return op;

}
int main()
{
int opc = 0;
    ListaEstudiante listaEstud;
    ListaMateria ListaMat;
    ListaIncripcion listaIns;

    do{
            opc = menu();
            system("cls");
            switch(opc){
            case 1:
                //Agregar estudiantes
                listaEstud.Insertar(Estudiante(1,"Carla","Artiga"));
                istaEstud.Insertar(Estudiante(2,"Maria","Lopez"));
                istaEstud.Insertar(Estudiante(3,"Marta","Perez"));
                istaEstud.Insertar(Estudiante(4,"Juan","Lopez"));

                break;
            case 2:
                //Agregar Materias
                ListaMat.Insertar(Materia(1,"Matematicas"));
                ListaMat.Insertar(Materia(2,"Estructura de datos"));
                ListaMat.Insertar(Materia(3,"Base de datos"));
                ListaMat.Insertar(Materia(4,"Programacion"));


                break;
            case 3:
                //inscribir
                listaIns.Insertar(Inscripcion(1,Estudiante(1,"Carla","Artiga"),"12022"));
                listaIns.Insertar(Inscripcion(2,Estudiante(2,"Maria","Lopez"),"12022"));
                listaIns.Insertar(Inscripcion(3,Estudiante(3,"Marta","Perez"),"12022"));
                listaIns.Insertar(Inscripcion(4,Estudiante(4,"Juan","Lopez"),"12022"));

                break;
            case 4:
                //Mostrar
                listaEstud.Mostrar();
                break;
            case 5:
                ListaMat.Mostrar();

                break;
                case 6:
                listaIns.Mostrar();

                break;
                case 7:
                //detalles de inscripcion
                listaIns.Mostrar();

                break;
                case 8:
                cout<<"Saliendo del sistema...\n";

                break;
            default:
                cout<< "Opcion no establecida\n";
                break;

            }
    system("pause");
    }while(opc!=7);




    return 0;
}
