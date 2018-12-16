#include "profesor.h"
#include "alumno.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cstring>
#include <list>

using namespace std;


Profesor::Profesor(bool rol,int credenciales){

  rol_=rol;
  credenciales_=credenciales;

}


void Profesor::MostrarAlumnos(list<Alumno> aux){

  list<Alumno>::iterator it;
  for(it = aux.begin(); it!=aux.end(); it++){
      if((*it).getLider()==true){
        cout << '\n';
        cout << "Nombre : " << (*it).getNombre()  << '\n';
        cout << "Primer Apellido : " << (*it).getApellido1() << '\n';
        cout << "Segundo Apellido : " << (*it).getApellido2() << '\n';
        cout << "Numero de telefono : " << (*it).getTelefono() << '\n';
        cout << "Email de la uco : " << (*it).getEmailUco() <<  '\n';
        cout << "Direccion Postal : " << (*it).getDireccion_Postal()  << '\n';
        cout << "DNI : " << (*it).getDNI() <<'\n';
        cout << "Mayor curso cursado : " << (*it).getMayor_Curso() <<  '\n';
        cout << "Numero de grupo : " << (*it).getNum_grupo() <<'\n';
        cout << "Lider : " << "Si" << '\n';
        cout << endl;
        cout << "===========================================================" << '\n';


      }
      else{
        cout << '\n';
        cout << "Nombre : " << (*it).getNombre()  << '\n';
        cout << "Primer Apellido : " << (*it).getApellido1() << '\n';
        cout << "Segundo Apellido : " << (*it).getApellido2() << '\n';
        cout << "Numero de telefono : " << (*it).getTelefono() << '\n';
        cout << "Email de la uco : " << (*it).getEmailUco() <<  '\n';
        cout << "Direccion Postal : " << (*it).getDireccion_Postal()  << '\n';
        cout << "DNI : " << (*it).getDNI() <<'\n';
        cout << "Mayor curso cursado : " << (*it).getMayor_Curso() <<  '\n';
        cout << "Numero de grupo : " << (*it).getNum_grupo() <<'\n';
        cout << "Lider : " << "No" << '\n';
        cout << endl;
        cout << "==========================================================="<< '\n';

      }
  }
  cout << "Pulse intro para continuar" << endl;
  while(getchar()!='\n');
  getchar();
}

list <Alumno> Profesor::ModificarAlumno(list <Alumno> aux, string DNI){

      list<Alumno>::iterator it;
      it=aux.begin();
      for(it=aux.begin();it!=aux.end();it++){
        if(DNI==(*it).getDNI()){
          cout << "Este es el alumno que desea modificar: " << '\n';

          if((*it).getLider()==true){
            cout << '\n';
            cout << "Nombre : " << (*it).getNombre()  << '\n';
            cout << "Primer Apellido : " << (*it).getApellido1() << '\n';
            cout << "Segundo Apellido : " << (*it).getApellido2() << '\n';
            cout << "Numero de telefono : " << (*it).getTelefono() << '\n';
            cout << "Email de la uco : " << (*it).getEmailUco() <<  '\n';
            cout << "Direccion Postal : " << (*it).getDireccion_Postal()  << '\n';
            cout << "DNI : " << (*it).getDNI() <<'\n';
            cout << "Mayor curso cursado : " << (*it).getMayor_Curso() <<  '\n';
            cout << "Numero de grupo : " << (*it).getNum_grupo() <<'\n';
            cout << "Lider : " << "Si" << '\n';
            cout << endl;
            cout << "===========================================================" << '\n';


          }
          else{
            cout << '\n';
            cout << "Nombre : " << (*it).getNombre()  << '\n';
            cout << "Primer Apellido : " << (*it).getApellido1() << '\n';
            cout << "Segundo Apellido : " << (*it).getApellido2() << '\n';
            cout << "Numero de telefono : " << (*it).getTelefono() << '\n';
            cout << "Email de la uco : " << (*it).getEmailUco() <<  '\n';
            cout << "Direccion Postal : " << (*it).getDireccion_Postal()  << '\n';
            cout << "DNI : " << (*it).getDNI() <<'\n';
            cout << "Mayor curso cursado : " << (*it).getMayor_Curso() <<  '\n';
            cout << "Numero de grupo : " << (*it).getNum_grupo() <<'\n';
            cout << "Lider : " << "No" << '\n';
            cout << endl;
            cout << "==========================================================="<< '\n';

          }

          string a,b,c,d,e,f,h,i;
          int afir=2,g,lid;
          bool bol;
          while(afir==2){
          cout << "Introduzca el nuevo  nombre del alumno" << '\n';
          cin >> a;
          cout << "Introduzca el nuevo primer apellido del alumno" << '\n';
          cin >> b;
          cout << "Introduzca el nuevo segundo apellido del alumno" << '\n';
          cin >> h;
          cout << "Introduzca el nuevo telefono del alumno" << '\n';
          cin >> c;
          cout << "Introduzca el nuevo email de la uco del alumno" << '\n';
          cin >> i;
          cout << "Introduzca la nueva direccion postal del alumno" << '\n';
          cin >> d;
          cout << "Introduzca el nuevo DNI del alumno" << '\n';
          cin >> e;
          cout << "Introduzca el nuevo mayor curso cursado del alumno" << '\n';
          cin >> f;
          cout << "Introduzca el nuevo numero de grupo que le corresponde" << '\n';
          cin >> g;
          cout << "Seleccione si el alumno es lider" << '\n';
          cout << "1. Para que sea lider del grupo" << '\n';
          cout << "2. Para que no sea lider del grupo" << '\n';
          cin >> lid;
          if(lid==1){
             bol=true;
          }
          if(lid==2){
            bol=false;
          }

          if((*it).getLider()==true){
            cout << '\n';
            cout << "Nombre : " << (*it).getNombre()  << '\n';
            cout << "Primer Apellido : " << (*it).getApellido1() << '\n';
            cout << "Segundo Apellido : " << (*it).getApellido2() << '\n';
            cout << "Numero de telefono : " << (*it).getTelefono() << '\n';
            cout << "Email de la uco : " << (*it).getEmailUco() <<  '\n';
            cout << "Direccion Postal : " << (*it).getDireccion_Postal()  << '\n';
            cout << "DNI : " << (*it).getDNI() <<'\n';
            cout << "Mayor curso cursado : " << (*it).getMayor_Curso() <<  '\n';
            cout << "Numero de grupo : " << (*it).getNum_grupo() <<'\n';
            cout << "Lider : " << "Si" << '\n';
            cout << endl;
            cout << "===========================================================" << '\n';


          }
          else{
            cout << '\n';
            cout << "Nombre : " << (*it).getNombre()  << '\n';
            cout << "Primer Apellido : " << (*it).getApellido1() << '\n';
            cout << "Segundo Apellido : " << (*it).getApellido2() << '\n';
            cout << "Numero de telefono : " << (*it).getTelefono() << '\n';
            cout << "Email de la uco : " << (*it).getEmailUco() <<  '\n';
            cout << "Direccion Postal : " << (*it).getDireccion_Postal()  << '\n';
            cout << "DNI : " << (*it).getDNI() <<'\n';
            cout << "Mayor curso cursado : " << (*it).getMayor_Curso() <<  '\n';
            cout << "Numero de grupo : " << (*it).getNum_grupo() <<'\n';
            cout << "Lider : " << "No" << '\n';
            cout << endl;
            cout << "==========================================================="<< '\n';

          }

          cout << "1. Confirmar" << endl;
          cout << "2. Volver a rellenar los campos" << endl;

          cin >> afir;
          }
          system("clear");
          list<Alumno>::iterator it;
          for(it=aux.begin();it!=aux.end();it++){
            if(e==(*it).getDNI()){
                cout << "El alumno que desea añadir esta dentro de la base de datos o ha escrito el DNI erroneamente y coincide con uno de otra persona" << '\n';
                cout << "Se dejara todo como esta y no se añadira nada a la Base de Datos" << '\n';
                cout << "Pulse intro para continuar" << endl;
                while(getchar()!='\n');
                return aux;
            }
          }

          Alumno al(a,b,h,c,i,d,e,f,g,bol);
          aux.push_back(al);
          cout << "Alumnos añadido." << endl;
          cout << "Pulse intro para continuar" << endl;
          while(getchar()!='\n');
          getchar();
          return (aux);

        }
      }
    cout << "No existe ningun alumno con ese DNI para Modificar" << endl;
    cout << "Pulse intro para continuar" << endl;
    while(getchar()!='\n');
    getchar();
    return aux;
}


list <Alumno> Profesor::AnadirAlumnoList(list <Alumno> aux){

  string a,b,c,d,e,f,h,i;
  int afir=2,g,lid;
  bool bol;
  while(afir==2){
  cout << "Introduzca el nombre del alumno" << '\n';
  cin >> a;
  cout << "Introduzca el primer apellido del alumno" << '\n';
  cin >> b;
  cout << "Introduzca el segundo apellido del alumno" << '\n';
  cin >> h;
  cout << "Introduzca el telefono del alumno" << '\n';
  cin >> c;
  cout << "Introduzca el email de la uco del alumno" << '\n';
  cin >> i;
  cout << "Introduzca la direccion postal del alumno" << '\n';
  cin >> d;
  cout << "Introduzca el  DNI del alumno" << '\n';
  cin >> e;
  cout << "Introduzca el mayor curso cursado del alumno" << '\n';
  cin >> f;
  cout << "Introduzca el numero de grupo que le corresponde" << '\n';
  cin >> g;
  cout << "Seleccione si el alumno es lider" << '\n';
  cout << "1. Para que sea lider del grupo" << '\n';
  cout << "2. Para que no sea lider del grupo" << '\n';
  cin >> lid;
  if(lid==1){
    bol=true;
  }
  if(lid==2){
    bol=false;
  }


  system("clear");
  /*cout << "¿Esto son los valores que quieres añadir?"<< endl;
  cout << a << " , " << b <<  " , "  << h << " , " << c << " , " << d << " , " << e << " , " << f << " , " << g << " , " << lid << endl;*/

  cout << "Nombre : " << a  << '\n';
  cout << "Primer Apellido : " << b << '\n';
  cout << "Segundo Apellido : " << h << '\n';
  cout << "Numero de telefono : " << c << '\n';
  cout << "Email de la uco : " << i <<  '\n';
  cout << "Direccion Postal : " << a  << '\n';
  cout << "DNI : " << e <<'\n';
  cout << "Mayor curso cursado" << f <<  '\n';
  cout << "Numero de grupo : " << g <<'\n';
  cout << "Lider : " << bol << '\n';

  cout << "1. Confirmar" << endl;
  cout << "2. Volver a rellenar los campos" << endl;

  cin >> afir;
  }
  system("clear");
  list<Alumno>::iterator it;
  for(it=aux.begin();it!=aux.end();it++){
    if(e==(*it).getDNI()){
        cout << "El alumno que desea añadir esta dentro de la base de datos o ha escrito el DNI erroneamente y coincide con uno de otra persona" << '\n';
        cout << "Se dejara todo como esta y no se añadira nada a la Base de Datos" << '\n';
        return aux;
    }
  }
  if(bol==true){
  for(it=aux.begin();it!=aux.end();it++){
    if(g==(*it).getNum_grupo() && (*it).getLider()==true){
        cout << "No puede ser lider, ya existe uno dentro de ese grupo " << endl;
        cout << "El alumno añadido pasara a ser un alumno no lider dentro del grupo" << endl;
        bol=false;
    }
  }
}
  Alumno al(a,b,h,c,i,d,e,f,g,bol);
  aux.push_back(al);
  cout << "Alumnos modificado." << endl;
  cout << "Pulse intro para continuar" << endl;
  while(getchar()!='\n');
  getchar();
  return (aux);


}



void Profesor::GuardarCambios(list <Alumno> aux, string nombrefich){

    list<Alumno>::iterator it;
    it=aux.begin();

    ofstream fo;
    nombrefich = nombrefich + ".txt";
    fo.open(nombrefich.c_str(),ios::out | std::ofstream::trunc);

	  if(fo.is_open()){
		list<Alumno>::iterator it;
    int numa;
		for(it = aux.begin(); it!=aux.end(); it++){
        numa++;
        if(numa>150){
          cout << "Se ha sobrepasado el numero maximo de alumno que se pueden almacenar dentro del fichero, por favor borre los que necesite" << endl;
          fo.close();
          return;
        }
        fo<<(*it).getNombre()<<","<<(*it).getApellido1()<<","<<(*it).getApellido2()<<","<<(*it).getTelefono()<<","<<(*it).getEmailUco()<<","<<(*it).getDireccion_Postal()<<","<<(*it).getDNI()<<","<<(*it).getMayor_Curso()<< "," << (*it).getNum_grupo() << "," <<(*it).getLider() <<endl;

			}
		}
    else{
      cout<<"No se pudo abrir el fichero de texto\n"<<endl;
    }
	fo.close();
  cout << "Cambios guardados correctamente" << endl;
  cout << "Pulse intro para continuar" << endl;
  while(getchar()!='\n');
  getchar();
}

void Profesor::CopiaSeguridad(list <Alumno> aux){

    list<Alumno>::iterator it;
    it=aux.begin();

    ofstream fo;
    string nombrefich;
    std::cout << "Introduzca el nombre de la copia de seguridad" << '\n';
    cin >> nombrefich;
    nombrefich = nombrefich + ".txt";
    fo.open(nombrefich.c_str(),ios::out | std::ofstream::trunc);

	  if(fo.is_open()){
		list<Alumno>::iterator it;
    int numa;
		for(it = aux.begin(); it!=aux.end(); it++){
        numa++;
        if(numa>150){
          cout << "Se ha sobrepasado el numero maximo de alumno que se pueden almacenar dentro del fichero, por favor borre los que necesite" << endl;
          fo.close();
          return;
        }
        cout << (*it).getNombre()<<","<<(*it).getApellido1()<<","<<(*it).getApellido2()<<","<<(*it).getTelefono()<<","<<(*it).getDireccion_Postal()<<","<<(*it).getDNI()<<","<<(*it).getMayor_Curso()<<","<<(*it).getNum_grupo() << "," <<(*it).getLider()<<'\n';
        fo<<(*it).getNombre()<<","<<(*it).getApellido1()<<","<<(*it).getApellido2()<<","<<(*it).getTelefono()<<","<<(*it).getEmailUco()<<","<<(*it).getDireccion_Postal()<<","<<(*it).getDNI()<<","<<(*it).getMayor_Curso()<< "," << (*it).getNum_grupo() << "," <<(*it).getLider() <<endl;

        //fichero << (*it).getNombre()<<","<<(*it).getApellidos()<<","<<(*it).getTelefono()<<","<<(*it).getDireccion_Postal()<<","<<(*it).getDNI()<<","<<(*it).getMayor_Curso()<<","<<(*it).getNum_grupo() <<"\n";
			}
		}
    else{
      cout<<"No se pudo abrir el fichero de texto\n"<<endl;
    }
	fo.close();
}

list <Alumno> Profesor::CargarAlumnos(string nombrefich){

  list<Alumno> aux;
  list<Alumno>::iterator it;
  it=aux.begin();
  int num_grupoi;
  ifstream fi;
  nombrefich = nombrefich + ".txt";
  fi.open(nombrefich.c_str(),ios::in );
    if(fi.is_open()){
      char nombre[50],apellido1[50],apellido2[50],telefono[50],email_uco[50],direccion_postal[50],DNI[50],mayor_curso[50],num_grupo[50],lider[50];
      aux.clear();

      while(fi.getline(nombre,256,',')){

          fi.getline(apellido1,256,',');
          fi.getline(apellido2,256,',');
          fi.getline(telefono,256,',');
          fi.getline(email_uco,256,',');
          fi.getline(direccion_postal,256,',');
          fi.getline(DNI,256,',');
          fi.getline(mayor_curso,256,',');
          fi.getline(num_grupo,256,',');
          fi.getline(lider,256,'\n');

          num_grupoi = atoi(num_grupo);
          Alumno al(nombre,apellido1,apellido2,telefono,email_uco,direccion_postal,DNI,mayor_curso,num_grupoi,lider);
          aux.push_back(al);
      }

    fi.close();
  }
    else{
      cout << "No se ha podido abrir el fichero" << '\n';
    }

    return aux;
}

void Profesor::BuscarAlumnoDNI(list<Alumno> aux , string bDNI){

  list<Alumno>::iterator it;
  it=aux.begin();
  for(it=aux.begin();it!=aux.end();it++){
    if(bDNI==(*it).getDNI()){

      if((*it).getLider()==true){
        cout << '\n';
        cout << "Nombre : " << (*it).getNombre()  << '\n';
        cout << "Primer Apellido : " << (*it).getApellido1() << '\n';
        cout << "Segundo Apellido : " << (*it).getApellido2() << '\n';
        cout << "Numero de telefono : " << (*it).getTelefono() << '\n';
        cout << "Email de la uco : " << (*it).getEmailUco() <<  '\n';
        cout << "Direccion Postal : " << (*it).getDireccion_Postal()  << '\n';
        cout << "DNI : " << (*it).getDNI() <<'\n';
        cout << "Mayor curso cursado : " << (*it).getMayor_Curso() <<  '\n';
        cout << "Numero de grupo : " << (*it).getNum_grupo() <<'\n';
        cout << "Lider : " << "Si" << '\n';
        cout << endl;
        cout << "===========================================================" << '\n';


      }
      else{
        cout << '\n';
        cout << "Nombre : " << (*it).getNombre()  << '\n';
        cout << "Primer Apellido : " << (*it).getApellido1() << '\n';
        cout << "Segundo Apellido : " << (*it).getApellido2() << '\n';
        cout << "Numero de telefono : " << (*it).getTelefono() << '\n';
        cout << "Email de la uco : " << (*it).getEmailUco() <<  '\n';
        cout << "Direccion Postal : " << (*it).getDireccion_Postal()  << '\n';
        cout << "DNI : " << (*it).getDNI() <<'\n';
        cout << "Mayor curso cursado : " << (*it).getMayor_Curso() <<  '\n';
        cout << "Numero de grupo : " << (*it).getNum_grupo() <<'\n';
        cout << "Lider : " << "No" << '\n';
        cout << endl;
        cout << "==========================================================="<< '\n';
      }
      }
  }

  cout << "Pulse intro para continuar" << endl;
  while(getchar()!='\n');
}

void Profesor::BuscarAlumnoGrupo(list<Alumno> aux , int grupo){

  list<Alumno>::iterator it;
  it=aux.begin();
  for(it=aux.begin();it!=aux.end();it++){
    if(grupo==(*it).getNum_grupo()){
      if((*it).getLider()==1){
      cout << "E S   L   I  D  E  R ";
      if((*it).getLider()==true){
        cout << '\n';
        cout << "Nombre : " << (*it).getNombre()  << '\n';
        cout << "Primer Apellido : " << (*it).getApellido1() << '\n';
        cout << "Segundo Apellido : " << (*it).getApellido2() << '\n';
        cout << "Numero de telefono : " << (*it).getTelefono() << '\n';
        cout << "Email de la uco : " << (*it).getEmailUco() <<  '\n';
        cout << "Direccion Postal : " << (*it).getDireccion_Postal()  << '\n';
        cout << "DNI : " << (*it).getDNI() <<'\n';
        cout << "Mayor curso cursado : " << (*it).getMayor_Curso() <<  '\n';
        cout << "Numero de grupo : " << (*it).getNum_grupo() <<'\n';
        cout << "Lider : " << "Si" << '\n';
        cout << endl;
        cout << "===========================================================" << '\n';


      }
      else{
        cout << '\n';
        cout << "Nombre : " << (*it).getNombre()  << '\n';
        cout << "Primer Apellido : " << (*it).getApellido1() << '\n';
        cout << "Segundo Apellido : " << (*it).getApellido2() << '\n';
        cout << "Numero de telefono : " << (*it).getTelefono() << '\n';
        cout << "Email de la uco : " << (*it).getEmailUco() <<  '\n';
        cout << "Direccion Postal : " << (*it).getDireccion_Postal()  << '\n';
        cout << "DNI : " << (*it).getDNI() <<'\n';
        cout << "Mayor curso cursado : " << (*it).getMayor_Curso() <<  '\n';
        cout << "Numero de grupo : " << (*it).getNum_grupo() <<'\n';
        cout << "Lider : " << "No" << '\n';
        cout << endl;
        cout << "==========================================================="<< '\n';
        }
    }
      else{

        if((*it).getLider()==true){
          cout << '\n';
          cout << "Nombre : " << (*it).getNombre()  << '\n';
          cout << "Primer Apellido : " << (*it).getApellido1() << '\n';
          cout << "Segundo Apellido : " << (*it).getApellido2() << '\n';
          cout << "Numero de telefono : " << (*it).getTelefono() << '\n';
          cout << "Email de la uco : " << (*it).getEmailUco() <<  '\n';
          cout << "Direccion Postal : " << (*it).getDireccion_Postal()  << '\n';
          cout << "DNI : " << (*it).getDNI() <<'\n';
          cout << "Mayor curso cursado : " << (*it).getMayor_Curso() <<  '\n';
          cout << "Numero de grupo : " << (*it).getNum_grupo() <<'\n';
          cout << "Lider : " << "Si" << '\n';
          cout << endl;
          cout << "===========================================================" << '\n';


        }
        else{
          cout << '\n';
          cout << "Nombre : " << (*it).getNombre()  << '\n';
          cout << "Primer Apellido : " << (*it).getApellido1() << '\n';
          cout << "Segundo Apellido : " << (*it).getApellido2() << '\n';
          cout << "Numero de telefono : " << (*it).getTelefono() << '\n';
          cout << "Email de la uco : " << (*it).getEmailUco() <<  '\n';
          cout << "Direccion Postal : " << (*it).getDireccion_Postal()  << '\n';
          cout << "DNI : " << (*it).getDNI() <<'\n';
          cout << "Mayor curso cursado : " << (*it).getMayor_Curso() <<  '\n';
          cout << "Numero de grupo : " << (*it).getNum_grupo() <<'\n';
          cout << "Lider : " << "No" << '\n';
          cout << endl;
          cout << "==========================================================="<< '\n';

          }
      }
    }
  }

  cout << "Pulse intro para continuar" << endl;
  while(getchar()!='\n');
  getchar();
}

void Profesor::BuscarAlumnoApellidos(list<Alumno> aux , string apellido1, string apellido2){
  cout << "Alumnos añadido." << endl;
  list<Alumno>::iterator it;
  it=aux.begin();
  for(it=aux.begin();it!=aux.end();it++){
    if(apellido1==(*it).getApellido1() && apellido2==(*it).getApellido2()){
      if((*it).getLider()==true){
        cout << '\n';
        cout << "Nombre : " << (*it).getNombre()  << '\n';
        cout << "Primer Apellido : " << (*it).getApellido1() << '\n';
        cout << "Segundo Apellido : " << (*it).getApellido2() << '\n';
        cout << "Numero de telefono : " << (*it).getTelefono() << '\n';
        cout << "Email de la uco : " << (*it).getEmailUco() <<  '\n';
        cout << "Direccion Postal : " << (*it).getDireccion_Postal()  << '\n';
        cout << "DNI : " << (*it).getDNI() <<'\n';
        cout << "Mayor curso cursado : " << (*it).getMayor_Curso() <<  '\n';
        cout << "Numero de grupo : " << (*it).getNum_grupo() <<'\n';
        cout << "Lider : " << "Si" << '\n';
        cout << endl;
        cout << "===========================================================" << '\n';


      }
      else{
        cout << '\n';
        cout << "Nombre : " << (*it).getNombre()  << '\n';
        cout << "Primer Apellido : " << (*it).getApellido1() << '\n';
        cout << "Segundo Apellido : " << (*it).getApellido2() << '\n';
        cout << "Numero de telefono : " << (*it).getTelefono() << '\n';
        cout << "Email de la uco : " << (*it).getEmailUco() <<  '\n';
        cout << "Direccion Postal : " << (*it).getDireccion_Postal()  << '\n';
        cout << "DNI : " << (*it).getDNI() <<'\n';
        cout << "Mayor curso cursado : " << (*it).getMayor_Curso() <<  '\n';
        cout << "Numero de grupo : " << (*it).getNum_grupo() <<'\n';
        cout << "Lider : " << "No" << '\n';
        cout << endl;
        cout << "==========================================================="<< '\n';


      }
    }
  }

  cout << "Pulse intro para continuar" << endl;
  while(getchar()!='\n');
  getchar();
}


list <Alumno> Profesor::BorrarAlumnoDNI(list <Alumno> aux, string bDNI){

  list<Alumno>::iterator it;
  for(it=aux.begin();it!=aux.end();it++){
    if(bDNI==(*it).getDNI()){
      if((*it).getLider()==true){
        cout << '\n';
        cout << "Nombre : " << (*it).getNombre()  << '\n';
        cout << "Primer Apellido : " << (*it).getApellido1() << '\n';
        cout << "Segundo Apellido : " << (*it).getApellido2() << '\n';
        cout << "Numero de telefono : " << (*it).getTelefono() << '\n';
        cout << "Email de la uco : " << (*it).getEmailUco() <<  '\n';
        cout << "Direccion Postal : " << (*it).getDireccion_Postal()  << '\n';
        cout << "DNI : " << (*it).getDNI() <<'\n';
        cout << "Mayor curso cursado : " << (*it).getMayor_Curso() <<  '\n';
        cout << "Numero de grupo : " << (*it).getNum_grupo() <<'\n';
        cout << "Lider : " << "Si" << '\n';
        cout << endl;
        cout << "===========================================================" << '\n';


      }
      else{
        cout << '\n';
        cout << "Nombre : " << (*it).getNombre()  << '\n';
        cout << "Primer Apellido : " << (*it).getApellido1() << '\n';
        cout << "Segundo Apellido : " << (*it).getApellido2() << '\n';
        cout << "Numero de telefono : " << (*it).getTelefono() << '\n';
        cout << "Email de la uco : " << (*it).getEmailUco() <<  '\n';
        cout << "Direccion Postal : " << (*it).getDireccion_Postal()  << '\n';
        cout << "DNI : " << (*it).getDNI() <<'\n';
        cout << "Mayor curso cursado : " << (*it).getMayor_Curso() <<  '\n';
        cout << "Numero de grupo : " << (*it).getNum_grupo() <<'\n';
        cout << "Lider : " << "No" << '\n';
        cout << endl;
        cout << "==========================================================="<< '\n';

      }
        it=aux.erase(it);
    }
  }
  cout << "Alumnos eliminado." << endl;
  cout << "Pulse intro para continuar" << endl;
  while(getchar()!='\n');
  getchar();
  return aux;
}


list <Alumno> Profesor::BorrarAlumnoApellidos(list <Alumno> aux, string apellido1, string apellido2){

  list<Alumno>::iterator it;

  string DNI;

  for(it=aux.begin();it!=aux.end();it++){
    if(apellido1==(*it).getApellido1() && apellido2==(*it).getApellido2()){
      if((*it).getLider()==true){
        cout << '\n';
        cout << "Nombre : " << (*it).getNombre()  << '\n';
        cout << "Primer Apellido : " << (*it).getApellido1() << '\n';
        cout << "Segundo Apellido : " << (*it).getApellido2() << '\n';
        cout << "Numero de telefono : " << (*it).getTelefono() << '\n';
        cout << "Email de la uco : " << (*it).getEmailUco() <<  '\n';
        cout << "Direccion Postal : " << (*it).getDireccion_Postal()  << '\n';
        cout << "DNI : " << (*it).getDNI() <<'\n';
        cout << "Mayor curso cursado : " << (*it).getMayor_Curso() <<  '\n';
        cout << "Numero de grupo : " << (*it).getNum_grupo() <<'\n';
        cout << "Lider : " << "Si" << '\n';
        cout << endl;
        cout << "===========================================================" << '\n';


      }
      else{
        cout << '\n';
        cout << "Nombre : " << (*it).getNombre()  << '\n';
        cout << "Primer Apellido : " << (*it).getApellido1() << '\n';
        cout << "Segundo Apellido : " << (*it).getApellido2() << '\n';
        cout << "Numero de telefono : " << (*it).getTelefono() << '\n';
        cout << "Email de la uco : " << (*it).getEmailUco() <<  '\n';
        cout << "Direccion Postal : " << (*it).getDireccion_Postal()  << '\n';
        cout << "DNI : " << (*it).getDNI() <<'\n';
        cout << "Mayor curso cursado : " << (*it).getMayor_Curso() <<  '\n';
        cout << "Numero de grupo : " << (*it).getNum_grupo() <<'\n';
        cout << "Lider : " << "No" << '\n';
        cout << endl;
        cout << "==========================================================="<< '\n';

      }    //  it=aux.erase(it);
    //  Alumno a((*it)getNombre(),(*it).getApellido1(),(*it).getApellido2(),(*it).getTelefono(),(*it).getEmailUco(),(*it).getDireccion_Postal(),(*it).getDNI(),(*it).getMayor_Curso(),(*it).getNum_grupo(),(*it).getLider());
    }
  }
  std::cout << "Introduzca el DNI del que desea borrar, de los mostrados anteriormente" << '\n';
  cin >> DNI;
  for(it=aux.begin();it!=aux.end();it++){
    if(DNI==(*it).getDNI()){
      //cout << (*it).getNombre()<<","<<(*it).getApellido1()<<","<<(*it).getApellido2()<<","<<(*it).getTelefono()<<","<<(*it).getEmailUco()<<","<<(*it).getDireccion_Postal()<<","<<(*it).getDNI()<<","<<(*it).getMayor_Curso()<<","<<(*it).getNum_grupo() << "," <<(*it).getLider()<<'\n';
      it=aux.erase(it);
    //  Alumno a((*it)getNombre(),(*it).getApellido1(),(*it).getApellido2(),(*it).getTelefono(),(*it).getEmailUco(),(*it).getDireccion_Postal(),(*it).getDNI(),(*it).getMayor_Curso(),(*it).getNum_grupo(),(*it).getLider());
    }
  }
  cout << "Alumno eliminado." << endl;
  cout << "Pulse intro para continuar" << endl;
  while(getchar()!='\n');
  getchar();
  return aux;
}

void Profesor::VisualizarFichero(list <Alumno> aux, string nombrefich){

  list<Alumno>::iterator it;
  it=aux.begin();
  int seleccion;
  cout << "Seleccione el metodo para visualizar el archivo" << endl;
  cout << "1. HTML" << endl;
  cout << "2. Markdown" << endl;
  cin >> seleccion;
  ofstream fo;

  if(seleccion==1){

    nombrefich= nombrefich + ".html";

  }
  else if (seleccion==2){
    nombrefich= nombrefich + ".mdown";
  }
  else if (seleccion!=1 && seleccion!=2){
    cout << "No ha elegido una opcion correcta. Volviendo al menu" << endl;
    return ;
  }


  fo.open(nombrefich.c_str(),ios::out | std::ofstream::trunc);

  if(fo.is_open()){
  list<Alumno>::iterator it;
  for(it = aux.begin(); it!=aux.end(); it++){

    if(seleccion == 1){
      fo << '\n';
      fo << "Nombre : " << (*it).getNombre()  << "<br />"<< '\n';
      fo << "Primer Apellido : " << (*it).getApellido1() << "<br />"<< '\n';
      fo << "Segundo Apellido : " << (*it).getApellido2() << "<br />"<< '\n';
      fo << "Numero de telefono : " << (*it).getTelefono() << "<br />"<< '\n';
      fo << "Email de la uco : " << (*it).getEmailUco() << "<br />"<<  '\n';
      fo << "Direccion Postal : " << (*it).getDireccion_Postal()  << "<br />"<< '\n';
      fo << "DNI : " << (*it).getDNI() << "<br />"<<'\n';
      fo << "Mayor curso cursado : " << (*it).getMayor_Curso() << "<br />" << '\n';
      fo << "Numero de grupo : " << (*it).getNum_grupo() <<"<br />"<<'\n';
      fo << "Lider : " << "Si" << "<br />"<< '\n';
      fo << "===========================================================" << "<br />" <<'\n';

    }
    if(seleccion == 2){
      fo << "Nombre : " << (*it).getNombre()  << "  "<< '\n';
      fo << "Primer Apellido : " << (*it).getApellido1() << "  "<< '\n';
      fo << "Segundo Apellido : " << (*it).getApellido2() << "  "<< '\n';
      fo << "Numero de telefono : " << (*it).getTelefono() << "  "<< '\n';
      fo << "Email de la uco : " << (*it).getEmailUco() << "  "<<  '\n';
      fo << "Direccion Postal : " << (*it).getDireccion_Postal()  << "  "<< '\n';
      fo << "DNI : " << (*it).getDNI() << "  "<< '\n';
      fo << "Mayor curso cursado : " << (*it).getMayor_Curso() << "  " << '\n';
      fo << "Numero de grupo : " << (*it).getNum_grupo() <<"  "<<'\n';
      fo << "Lider : " << "Si" << "  "<< '\n';
      fo << "===========================================================" << "  " <<'\n';
      fo<<(*it).getNombre()<<","<<(*it).getApellido1()<<","<<(*it).getApellido2()<<","<<(*it).getTelefono()<<","<<(*it).getEmailUco()<<","<<(*it).getDireccion_Postal()<<","<<(*it).getDNI()<<","<<(*it).getMayor_Curso()<< "," << (*it).getNum_grupo() << "," <<(*it).getLider() << "  " <<endl;
    }
    //    fo<<(*it).getNombre()<<","<<(*it).getApellido1()<<","<<(*it).getApellido2()<<","<<(*it).getTelefono()<<","<<(*it).getEmailUco()<<","<<(*it).getDireccion_Postal()<<","<<(*it).getDNI()<<","<<(*it).getMayor_Curso()<< "," << (*it).getNum_grupo() << "," <<(*it).getLider() << "  " <<endl;
      //fichero << (*it).getNombre()<<","<<(*it).getApellidos()<<","<<(*it).getTelefono()<<","<<(*it).getDireccion_Postal()<<","<<(*it).getDNI()<<","<<(*it).getMayor_Curso()<<","<<(*it).getNum_grupo() <<"\n";
    }
    if(seleccion == 1){
      nombrefich= "firefox " + nombrefich;
      system(nombrefich.c_str());
    }
    if(seleccion == 2){
      nombrefich= "gedit " + nombrefich;
      system(nombrefich.c_str());
    }
}
  else{
    cout<<"No se pudo abrir el fichero de texto\n"<<endl;
  }
fo.close();
}
