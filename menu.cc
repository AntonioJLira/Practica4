#include "menu.h"
#include <string>
#include <iostream>
#include <stdlib.h>


using namespace std;


main(){



int seleccion;

while(seleccion!=5){

  cout << "Seleccione el numero de la opcion del menu que quiera seleccionar y presione enter " << '\n';

  cout << "1. Mostrar alumno." << '\n';
  cout << "2. Añadir alumno." << '\n';
  cout << "3. Modificar alumno." << '\n';
  cout << "4. Guardar cambios realizados en la BDD." << '\n';
  cout << "5. Salir." << '\n';
  cin >> seleccion;

  system("clear");

    switch (seleccion) {
         case 1:
              cout << "Ha elegido la opcion mostrar alumnos.\n";
              cout << "Seleccione la manera en la que quiere buscar" << '\n';
              cout << "1.Busqueda por grupo" << '\n';
              cout << "2.Busqueda por DNI" << '\n';
              break;
         case 2:
              cout << "Ha elegido la opcion añadir alumno.\n";
              break;
         case 3:
              cout << "Ha elegido la opcion modificar un alumno.\n";
              break;
         case 4:
              cout << "Ha elegido la opcion de guadar los cambios realizados en la BDD.\n";
              break;
         case 5:
              cout << "Ha elegido salir del programa ... Adios );\n";
              break;
         default:
              cout << "Elección incorrecta, Saliendo.\n";
              seleccion=5;
              break;

    }
}

return 0;

}
