#ifndef PROFESOR_H
#define PROFESOR_H

#include <string>
#include <iostream>
using namespace std;

class Profesor{

public:

    Profesor(bool rol,int credenciales);// Constructor con parametrso por defecto
                                        // Falta definir el puntero a la agenda

    Profesor();

    // Modificadores

    void setRol(bool rol){rol_ = rol; };
    void setCredenciales(string credenciales){credenciales_ = credenciales; };

    //Observadores

    bool getRol(){return rol_; };
    string getCredenciales(){return credenciales_; };

  // (No se de que tipo debe ser)  void getagenda();



private:

    bool rol_;
    string credenciales_;

  //no se que poner aqui  string agenda;


};


#endif
