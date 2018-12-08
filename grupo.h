#ifndef GRUPO_H
#define GRUPO_H

#include <string>
#include <iostream>
using namespace std;


class Grupo{

public:

      Grupo(int num_alumnos_grupo,string DNI_lider,int num_grupo,int alumnos_grupo);

      Grupo();

      void setNum_alumnos_grupo(int num_alumnos_grupo){num_alumnos_grupo_ = num_alumnos_grupo; };
      void setDNI_lider(string DNI_lider){DNI_lider_ = DNI_lider; };
      void setNum_grupo(int num_grupo){num_grupo_ = num_grupo; };
      void setAlumnos_grupo(int alumnos_grupo){alumnos_grupo_ = alumnos_grupo; };

      int getNum_alumnos_grupo(){return num_alumnos_grupo_; };
      string getDNI_lider(){return DNI_lider_; };
      int getNum_grupo(){return num_grupo_; };
      int getAlumnos_grupo(){return alumnos_grupo_; };

private:

    int num_alumnos_grupo_;
    string DNI_lider_;
    int num_grupo_;
    int alumnos_grupo_;

};


#endif
