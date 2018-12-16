#include "alumno.h"
#include <string>
#include <iostream> 

using namespace std;

Alumno::Alumno(string nombre,string apellido1,string apellido2,string telefono,string email_uco,string direccion_postal,string DNI,string mayor_curso , int num_grupo, bool lider){


          nombre_=nombre;
          apellido1_=apellido1;
          apellido2_=apellido2;
          telefono_=telefono;
          email_uco_=email_uco;
          direccion_postal_=direccion_postal;
          DNI_=DNI;
          mayor_curso_=mayor_curso;
          num_grupo_=num_grupo;
          lider_=lider;
    }
