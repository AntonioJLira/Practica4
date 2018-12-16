#include "menu.h"
#include <string>
#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

/*while(getchar()!='\n');
getchar();
Esto se usa para esperar hasta pulsar introducir intro */

main(){

    int seleccion,menu=3;
    char user[30],userc[30];
    char pass[50],passc[30];
    char rol[50];
    bool it;
    list <Alumno> alumnos_;
    alumnos_.begin();

    cout << "Introduza su Credenciales como nombre de usuario" << endl;
    cin >> user ;
    cout << "Introduzca la contraseña" << endl;
    cin >> pass;
    ifstream fi;
    fi.open("profesores.txt",ios::in);
    if(fi.is_open()){
        system("clear");


            while(fi.getline(userc,256,',')){

              fi.getline(passc,256,',');
              fi.getline(rol,256,'\n');

              if((!strcmp(user,userc)) && (!strcmp(pass,passc))){

                cout << "Logueado correctamente" << '\n';
                cout << "Usted es un profesor";

                if(!strcmp(rol,"0")){
                  cout << " Ayudante" << '\n';
                  it="FALSE";
                  menu=0;
                }
                else{
                  cout << " Cordinador" << '\n';
                  it="TRUE";
                  menu=1;
                }
            }

        }
    }

    else{

        cout << "ERROR: No se ha podido abrir el fichero de texto con las credenciales de los profesores" << '\n';
        return 0;
    }

    if(menu==0){
        Profesor po(it,atoi(user));
        cout << "Cargando Base de Datos " << endl;
        string nombrefich;
        cout << "Introduzca el nombre del fichero que desea cargar" << endl;
        cin >> nombrefich;
        alumnos_=po.CargarAlumnos(nombrefich);
        cout << "Pulse intro para continuar" << endl;
        while(getchar()!='\n');
        getchar();
        system("clear");
        while(seleccion!=7){
          system("clear");
          cout << "Seleccione el numero de la opcion del menu que quiera seleccionar y presione enter " << '\n';
          cout << "1. Mostrar alumno." << '\n';
          cout << "2. Añadir alumno." << '\n';
          cout << "3. Modificar alumno." << '\n';
          cout << "4. Guardar cambios realizados en la BDD." << '\n';
          cout << "5. Borrar alumno." << '\n';
          cout << "6. Visualizar ficheros." << '\n';
          cout << "7. Salir del programa." << '\n';
          cin >> seleccion;



          system("clear");

            switch (seleccion) {
                 case 1:{
                      int opcion1;
                      int opcion2;
                      cout << "Ha elegido la opcion mostrar alumnos.\n";
                      cout << "1. Mostrar todos los alumnos de la base de datos.\n";
                      cout << "2. Buscar un alumno especifico.\n";
                      cin >> opcion1;
                      if(opcion1==1){
                        po.MostrarAlumnos(alumnos_);
                      }
                      if(opcion1==2){
                      cout << "Como desea buscar al alumno" << '\n';
                      cout << "1.Por DNI" << '\n';
                      cout << "2.Por Numero de grupo" << '\n';
                      cout << "3.Por los Apellidos" << '\n';
                      cin >> opcion2;
                      if(opcion2==1){
                        string DNI;
                        cout << "Que DNI desea introducir" << '\n';
                        cin >> DNI;
                        po.BuscarAlumnoDNI(alumnos_,DNI);
                      }
                      if(opcion2==2){
                        int num_grupo;
                        cout << "Que numero de grupo desea introducir" << '\n';
                        cin >> num_grupo;
                        po.BuscarAlumnoGrupo(alumnos_,num_grupo);
                      }
                      if(opcion2==3){
                        string apel1,apel2;
                        cout << "Escriba el primer apellido" << '\n';
                        cin >> apel1;
                        cout << "Escriba el segundo apellido" << '\n';
                        cin >> apel2;
                        po.BuscarAlumnoApellidos(alumnos_,apel1,apel2);
                      }
                    }
                  }

                      break;
                 case 2:{
                      cout << "Ha elegido la opcion añadir alumno.\n";
                      alumnos_=po.AnadirAlumnoList(alumnos_);
                      }
                      break;
                 case 3:{
                      cout << "Ha elegido la opcion modificar un alumno.\n";
                      string DNI;
                      cout << "Introduzca el DNI de la persona que de sea modificar" << '\n';
                      cin >> DNI;
                      po.ModificarAlumno(alumnos_,DNI);
                      }
                      system("clear");
                      break;
                 case 4:{
                      cout << "Ha elegido Guardar cambios en la Base de Datos.\n";
                      po.GuardarCambios(alumnos_,nombrefich);
                      }
                      break;

                 case 5:
                      {

                      cout << "Ha seleccionado borrar alumno" << '\n';
                      int opcion3;
                      cout << "1.Borrar por DNI" << '\n';
                      cout << "2.Borrar por Apellidos" << '\n';
                      cin >> opcion3;
                      if(opcion3==1){
                        string DNI;
                        cout << "Que DNI desea introducir" << '\n';
                        cin >> DNI;
                        alumnos_=po.BorrarAlumnoDNI(alumnos_,DNI);
                      }
                      if(opcion3==2){
                        string apel1,apel2;
                        cout << "Introduza el primer apellido" << '\n';
                        cin >> apel1;
                        cout << "Introduzca el segundo apellido" << '\n';
                        cin >> apel2;
                        alumnos_=po.BorrarAlumnoApellidos(alumnos_,apel1,apel2);
                      }
                    }
                      break;
                 case 6:
                      {
                        cout << "Ha elegido la opcion Visualizar fichero" << '\n';
                        po.VisualizarFichero(alumnos_,nombrefich);
                      }
                 case 7:
                      {
                        cout << "Ha elegido salir del programa ... Adios.\n";
                      }
                      break;

                 default:
                      cout << "Elección incorrecta, Saliendo.\n";
                      seleccion=7;
                      break;

            }
        }
    }

    if(menu==1){
        Profesor po(it,atoi(user));
        cout << "Cargando Base de Datos " << endl;
        string nombrefich;
        cout << "Introduzca el nombre del fichero que desea cargar" << endl;
        cin >> nombrefich;
        alumnos_=po.CargarAlumnos(nombrefich);
        system("clear");
        while(seleccion!=8){

          cout << "Seleccione el numero de la opcion del menu que quiera seleccionar y presione enter " << '\n';
          cout << "1. Mostrar alumno." << '\n';
          cout << "2. Añadir alumno." << '\n';
          cout << "3. Modificar alumno." << '\n';
          cout << "4. Guardar cambios realizados en la BDD." << '\n';
          cout << "5. Crear una copia de sguridad" << '\n';
          cout << "6. Visualizar fichero." << '\n';
          cout << "7. Salir del programa." << '\n';
          cin >> seleccion;



          system("clear");

            switch (seleccion) {
                 case 1:{
                      int opcion1;
                      int opcion2;
                      cout << "Ha elegido la opcion mostrar alumnos.\n";
                      cout << "1. Mostrar todos los alumnos de la base de datos.\n";
                      cout << "2. Buscar un alumno especifico.\n";
                      cin >> opcion1;
                      if(opcion1==1){
                        po.MostrarAlumnos(alumnos_);
                      }
                      if(opcion1==2){
                      cout << "Como desea buscar al alumno" << '\n';
                      cout << "1.Por DNI" << '\n';
                      cout << "2.Por Numero de grupo" << '\n';
                      cout << "3.Por los Apellidos" << '\n';
                      cin >> opcion2;
                      if(opcion2==1){
                        string DNI;
                        cout << "Que DNI desea introducir" << '\n';
                        cin >> DNI;
                        po.BuscarAlumnoDNI(alumnos_,DNI);
                      }
                      if(opcion2==2){
                        int num_grupo;
                        cout << "Que numero de grupo desea introducir" << '\n';
                        cin >> num_grupo;
                        po.BuscarAlumnoGrupo(alumnos_,num_grupo);
                      }
                      if(opcion2==3){
                        string apel1,apel2;
                        cout << "Escriba el primer apellido" << '\n';
                        cin >> apel1;
                        cout << "Escriba el segundo apellido" << '\n';
                        cin >> apel2;
                        po.BuscarAlumnoApellidos(alumnos_,apel1,apel2);
                      }
                    }
                  }

                      break;
                 case 2:{
                      cout << "Ha elegido la opcion añadir alumno.\n";
                      alumnos_=po.AnadirAlumnoList(alumnos_);
                      }
                      break;
                 case 3:{
                      cout << "Ha elegido la opcion modificar un alumno.\n";
                      string DNI;
                      cout << "Introduzca el DNI de la persona que de sea modificar" << '\n';
                      cin >> DNI;
                      po.ModificarAlumno(alumnos_,DNI);
                      }
                      system("clear");
                      break;
                 case 4:{
                      cout << "Ha elegido Guardar cambios \n";
                      po.GuardarCambios(alumnos_,nombrefich);
                      }
                      break;
                 case 5:
                      {
                      cout << "Ha elegido crear copia de seguridad.\n";
                      po.CopiaSeguridad(alumnos_);
                      }
                      break;

                 case 6:
                      {

                      cout << "Ha seleccionado borrar alumno" << '\n';
                      int opcion3;
                      cout << "1.Borrar por DNI" << '\n';
                      cout << "2.Borrar por Apellidos" << '\n';
                      cin >> opcion3;
                      if(opcion3==1){
                        string DNI;
                        cout << "Que DNI desea introducir" << '\n';
                        cin >> DNI;
                        alumnos_=po.BorrarAlumnoDNI(alumnos_,DNI);
                      }
                      if(opcion3==2){
                        string apel1,apel2;
                        cout << "Introduza el primer apellido" << '\n';
                        cin >> apel1;
                        cout << "Introduzca el segundo apellido" << '\n';
                        cin >> apel2;
                        alumnos_=po.BorrarAlumnoApellidos(alumnos_,apel1,apel2);
                      }
                    }
                      break;
                 case 7:
                      {
                        cout << "Ha elegido la opcion Visualizar fichero" << '\n';
                        po.VisualizarFichero(alumnos_,nombrefich);
                      }

                 case 8:
                      {
                        cout << "Ha elegido salir del programa ... Adios.\n";
                      }
                      break;
                 default:
                      cout << "Elección incorrecta, Saliendo.\n";
                      seleccion=7;
                      break;

            }
        }
    }


    if(menu==3){
      cout << "Contraseña o usario incorrecto" << '\n';
      cout << "Saliendo del programa....." << '\n';
      return 0;
    }

    return 0;

}
