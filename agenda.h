#ifndef AGENDA_H
#define AGENDA_H



class Agenda{


public:

      Agenda(int num_alumnos,int num_grupos);
      // Falta Alumnos que hace referencia a todos los alumnos de la lista
      // pero no se como implementarlo al igual que su set y get

      Agenda();

      void setNum_alumnos(int num_alumnos){num_alumnos_= num_alumnos; };
      void setNum_grupos(int num_grupos){num_grupos_= num_grupos; };
      //void set_Alumnos();

      int getNum_alumnos(){return num_alumnos_; };
      int getNum_grupos(){return num_grupos_; };
      // ALGO getAlumnos();


private:

    int num_alumnos_;
    int num_grupos_;


};




#endif
