#include <iostream>;
using namespace std;

void modulo1P1(int &cantCursosF,int *idsCursos, char **nombreCursos, int &cantCaracteresNombre, int **creditosHtdHtp, int &columnasCHH){
    /*Recibe una entero "cantCursos" para cantidad de cursos a registrar,
     *3 arreglos idsCursos[cantCursosF]; nombrecursos[cantCursosF][cantCarcateresNombre]; creditosHtdHtp[cantCursosF][columnasCHH]
     *Los cuales se iran llenado con los datos correspondientes
    */

    for (int i=0;i<cantCursosF;i++){
        //int cod=0;
        int creditos =0, htDocente =0, htPersonal =0;
        //char nombre[25+1] = {'\0'};
        cout<<"Ingrese id curso "<<1+i<<": ";
        cin>>*(idsCursos+i);
            //=
            //cout<<'\n';
        cin.ignore();
        cout<<"nombre materia: ";
        //cin.getline(nombre,25+1)
        //cin.getline(*(nombreCursos+i),cantCaracteresNombre+1);
        cin.getline(*(nombreCursos+i),cantCaracteresNombre+1);

        cout<<"cantidad de creditos :";
        cin>>creditos;
        cout<<"HTD: ";
        cin>>htDocente;
        cout<<"HTP: ";
        cin>>htPersonal;

        for (int columna=0; columna<columnasCHH;columna++){
            if (columna==0){
                *(*(creditosHtdHtp+i)+columna)= creditos;
            }

            else if(columna==1){
                *(*(creditosHtdHtp+i)+columna)= htDocente;
            }
            else{
                *(*(creditosHtdHtp+i)+columna)= htPersonal;
            }

        }

    }

}


void impresionDataCursos(int &cantCursosF,int *idsCursos, char **nombreCursos, int **creditosHtdHtp, int &columnasCHH){
    /*Recibe elel numero de cursos registrados; el cual es el mismo numero de filas
     *para cada arreglo "idsCursos,nombreCursos,creditoHtdHtp"
     *al igual que el numero de columnas de "columnasCHH" pertenecinetes a "creditoHtdHtp"
     *
     * Para  su respectiva impresión

    */


    //impresion datos de IDSCURSOS
    //cout<<endl;
    cout<<"\n+----------------------------------------------+"<<endl;
    cout<<"|            CURSOS REGISTRADOS                |"<<endl;
    cout<<"+----------------------------------------------+"<<endl;
    for (int index =0; index<cantCursosF;index++){
        cout<<index+1<<". Id del curso: "<<*(idsCursos+index)<<endl;
        cout<<"   Nombre: "<<*(nombreCursos+index)<<endl;
        for (int columnas=0; columnas<columnasCHH; columnas++){
            if (columnas==0){
                cout<<"   Creditos: "<<*(*(creditosHtdHtp+index)+columnas);
            }
            else if(columnas==1){
                cout<<"   HTD: "<<*(*(creditosHtdHtp+index)+columnas);
            }
            else{
                cout<<"   HTP: "<<*(*(creditosHtdHtp+index)+columnas)<<'\n';
            }
        }
        //cout<<"   Creditos: "<<
        cout<<"+----------------------------------------------+"<<endl;
    }

    /*
    cout<<"+----------------------------------------------+\n";
    cout<<"|  id   |          nombre           |cred|htd|htp|"<<endl;
    for (int i=0; i<cantCursosF;i++){
        cout<<"+----------------------------------------------+\n";
        //cout<<*(idsCursos+i)<<" | "<<*(nombreCursos+i)<<endl;
        cout<<"|"<<*(idsCursos+i)<<"| "<<*(nombreCursos+i);
        for (int col =0; col<columnasCHH; col++){
            cout<<" | "<<*(*(creditosHtdHtp+i)+col);
            if (col ==columnasCHH-1){
                cout<<"  |\n";
            }
        }

    }
    */

}
