#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>
#include <iostream>
using namespace std;


class Alumno{

public:

      Alumno(string nombre="",string apellido1="",string apellido2="",string telefono="",string email_uco="",string direccion_postal="",string DNI="",string mayor_curso="", int num_grupo=-1,bool lider ="false");

      Alumno();


      void setNombre(string nombre){nombre_ = nombre; };
      void setApellido1(string apellido1){apellido1_ = apellido1; };
      void setApellido2(string apellido2){apellido2_ = apellido2; };
      void setTelefono(string telefono){telefono_ = telefono; };
      void setEmailUco(string email_uco){email_uco_ = email_uco; };
      void setDireccion_Postal(string direccion_postal){direccion_postal_ = direccion_postal; };
      void setDNI(string DNI){DNI_ = DNI; };
      void setMayor_Curso(string mayor_curso){mayor_curso_ = mayor_curso; };
      void setNum_grupo(int num_grupo){num_grupo_=num_grupo; };
      void setLider(bool lider){lider_=lider; };

      string getNombre(){return nombre_; };
      string getApellido1(){return apellido1_; };
      string getApellido2(){return apellido2_; };
      string getTelefono(){return telefono_; };
      string getEmailUco(){return email_uco_; };
      string getDireccion_Postal(){return direccion_postal_; };
      string getDNI(){return DNI_; };
      string getMayor_Curso(){return mayor_curso_; };
      int getNum_grupo(){return num_grupo_; };
      bool getLider(){return lider_; };




private:

    string nombre_, apellido1_,apellido2_, telefono_, direccion_postal_, DNI_, mayor_curso_, email_uco_;
    int num_grupo_;
    bool lider_;


};




#endif
