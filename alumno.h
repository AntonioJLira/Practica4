#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>
#include <iostream>
using namespace std;


class Alumno{

public:

      Alumno(string nombre="",string apellidos="",string telefono="",string direccion_postal="",string DNI="",string mayor_curso="");

      Alumno();


      void setNombre(string nombre){nombre_ = nombre; };
      void setApellidos(string apellidos){apellidos_ = apellidos; };
      void setTelefono(string telefono){telefono_ = telefono; };
      void setDireccion_Postal(string direccion_postal){direccion_postal_ = direccion_postal; };
      void setDNI(string DNI){DNI_ = DNI; };
      void setMayor_Curso(string mayor_curso){mayor_curso_ = mayor_curso; };


      string getNombre(){return nombre_; };
      string getApellidos(){return apellidos_; };
      string getTelefono(){return telefono_; };
      string getDireccion_Postal(){return direccion_postal_; };
      string getDNI(){return DNI_; };
      string getMayor_Curso(){return mayor_curso_; };




private:

    string nombre_, apellidos_, telefono_, direccion_postal_, DNI_, mayor_curso_;


};




#endif
