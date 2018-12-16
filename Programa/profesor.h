#ifndef PROFESOR_H
#define PROFESOR_H

#include "alumno.h"
#include <string>
#include <iostream>
#include <list>
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

  // void AnadirAlumno();
    void MostrarAlumnos(list <Alumno> aux);
    list <Alumno> AnadirAlumnoList(list <Alumno> aux);
    void GuardarCambios(list <Alumno> aux, string nombrefich);
    list <Alumno> CargarAlumnos(string nombrefich);
    void BuscarAlumnoDNI(list<Alumno> aux,string bDNI);
    void BuscarAlumnoGrupo(list<Alumno> aux , int grupo);
    list <Alumno> BorrarAlumnoDNI(list <Alumno> aux, string bDNI);
    list <Alumno> ModificarAlumno(list <Alumno> aux, string DNI);
    void BuscarAlumnoApellidos(list<Alumno> aux , string apellido1, string apellido2);
    list <Alumno> BorrarAlumnoApellidos(list <Alumno> aux, string apellido1, string apellido2);
    void CopiaSeguridad(list <Alumno> aux);
    void VisualizarFichero(list <Alumno> aux,string nombrefich);
  // (No se de que tipo debe ser)  void getagenda();



private:

    bool rol_;
    string credenciales_;
    list <Alumno> alumno_;
  //no se que poner aqui  string agenda;


};


#endif
