
#include <iostream>
#include "libreria_1.h"
using namespace std;


int main()
{
    //DATOS PARA INFO CURSOS:---------------------------
    int *idsCursos;
    char **nombreCursos;
    int **creditosHtdHtp;

    //int cantCaracteresNombre =25;
    int cantCaracteresNombre =25;
    int columnasCHH=3;
    int cantCursosF=0;

    cout<<"cantidad de cursos a registrar: ";
    cin>>cantCursosF;

    //---------------------------
    //PROCESO MODULO 1:

    idsCursos= new int [cantCursosF];
    nombreCursos = new char *[cantCursosF];
    creditosHtdHtp = new int *[cantCursosF];

    for (int i=0; i<cantCursosF;i++){
        nombreCursos[i]= new char [cantCaracteresNombre];
        creditosHtdHtp[i] = new int [columnasCHH];
    }

    modulo1P1(cantCursosF,idsCursos, nombreCursos, cantCaracteresNombre, creditosHtdHtp, columnasCHH);
    impresionDataCursos(cantCursosF,idsCursos, nombreCursos, creditosHtdHtp, columnasCHH);
    //---------------------------


    delete[] idsCursos;

    for (int i=0; i<cantCursosF;i++){
        delete [ ] nombreCursos[i];
        delete [ ] creditosHtdHtp[i];
    }
    delete [ ] nombreCursos;
    delete [ ] creditosHtdHtp;

    return 0;
}
