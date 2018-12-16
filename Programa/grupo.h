#ifndef GRUPO_H
#define GRUPO_H

#include <string>
#include <iostream>
#include "profesor.h"
#include "alumno.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cstring>
#include <list>
using namespace std;


class Grupo{

public:

      Grupo(int num_alumnos_grupo,string DNI_lider,int num_grupo,list <Alumno> alumnos_grupo);

      Grupo();

      void setNum_alumnos_grupo(int num_alumnos_grupo){num_alumnos_grupo_ = num_alumnos_grupo; };
      void setDNI_lider(string DNI_lider){DNI_lider_ = DNI_lider; };
      void setNum_grupo(int num_grupo){num_grupo_ = num_grupo; };
      void setAlumnos_grupo(list <Alumno> alumnos_grupo){alumnos_grupo_ = alumnos_grupo; };

      int getNum_alumnos_grupo(){return num_alumnos_grupo_; };
      string getDNI_lider(){return DNI_lider_; };
      int getNum_grupo(){return num_grupo_; };
      list <Alumno> getAlumnos_grupo(){return alumnos_grupo_; };

private:

    int num_alumnos_grupo_;
    string DNI_lider_;
    int num_grupo_;
    list <Alumno> alumnos_grupo_;

};


#endif
