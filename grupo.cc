#include "grupo.h"
#include <string>
#include <iostream>

using namespace std;

Grupo::Grupo(int num_alumnos_grupo,string DNI_lider,int num_grupo,int alumnos_grupo){

        num_alumnos_grupo_=num_alumnos_grupo;
        DNI_lider_= DNI_lider;
        num_grupo_=num_grupo;
        alumnos_grupo_=alumnos_grupo;
}
