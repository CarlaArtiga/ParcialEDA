#ifndef MATERIA_H_INCLUDED
#define MATERIA_H_INCLUDED
class Materia{
private:
    int idMateria;
    string nomMateria;
public:
    Materia(){
        this->idMateria = 0;
    }
    Materia(int id, string n){
        this->idMateria = id;
        this->nomMateria = n;
    }
    void setIdMateria(int id){
        this->idMateria = id;
    }
    int getIdMateria(){
        return this->idMateria;

    }
    void setNombreMateria(string nom){
        this->nomMateria = nom;
    }
    string getNomMateria(){
        return this->nomMateria;
    }
};


#endif // MATERIA_H_INCLUDED
