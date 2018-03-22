#include <iostream>
/*Problema 11. Escriba un programa que permita manejar las reservas de asientos en una sala de cine, los asientos de
la sala de cine están organizados en 15 filas con 20 asientos cada una. El programa debe mostrar una representación
de la sala que indique que asientos están disponibles y cuales se encuentran reservados. Además debe permitir
realizar reservas o cancelaciones al ingresar la fila (letras A-O) y el número del asiento (números 1-20).
Nota: un ejemplo de visualización de una sección de la sala es el siguiente:
+ + + +
- - + +
- - - -

Donde + representa los asientos reservados y - representa los asientos disponibles.*/
using namespace std;
char** crearmatrix(int,int);
void print_matrix(char **, int, int);
void reservarpuesto(char **,char, int);
int main()
{   int filas=15,columnas=20,ncolumna=0;
    char nfila;
    char **matrix=crearmatrix(filas,columnas);
    print_matrix(matrix,filas,columnas);
    cout <<"letra de fila: ";
    cin >>nfila;
    cout <<"numero columna: ";
    cin >>ncolumna;

    reservarpuesto(matrix,nfila,ncolumna);
    print_matrix(matrix,filas,columnas);
    return 0;
}
char** crearmatrix(int filas,int columnas){
    char** matrix=0;
    matrix=new char*[filas];
    for(int i=0;i<filas;i++){
        matrix[i]=new char[columnas];
        for(int j=0;j<columnas;j++)
            matrix[i][j]='-';
    }
    return matrix;

}
void print_matrix(char **matriz, int filas, int columnas){
    char letras='A';
    int numero=1;
    for(int k=0;k<columnas;k++){
        if(k>9)
            cout <<" " <<numero++ <<" ";
        else
            cout <<"  " <<numero++ <<" ";}
    cout <<endl;
    for(int i=0; i<filas; i++){
        cout <<letras++ <<" ";
        for(int j=0; j<columnas; j++)
            cout << *(*(matriz+i)+j) << "   ";
        cout << endl;
    }
}
void reservarpuesto(char **matriz,char a, int b){
    switch (a) {
    case 'A':
        if(b>0&&b<20)
        *(*(matriz+0)+(b-1))='+';
        else
            cout<<"columna incorrecta"<<endl;
        break;
    case 'B':
        if(b>0&&b<20)
            *(*(matriz+1)+(b-1))='+';
            else
                cout<<"columna incorrecta"<<endl;

        break;
    case 'C':
        if(b>0&&b<20)
        *(*(matriz+2)+(b-1))='+';
        else
            cout<<"columna incorrecta"<<endl;
        break;
    case 'D':
        if(b>0&&b<20)
            *(*(matriz+3)+(b-1))='+';
            else
                cout<<"columna incorrecta"<<endl;

        break;
    case 'E':
        if(b>0&&b<20)
            *(*(matriz+4)+(b-1))='+';
            else
                cout<<"columna incorrecta"<<endl;

        break;
    case 'F':
        if(b>0&&b<20)
        *(*(matriz+5)+(b-1))='+';
        else
            cout<<"columna incorrecta"<<endl;
        break;
    case 'G':
        if(b>0&&b<20)
            *(*(matriz+6)+(b-1))='+';
            else
                cout<<"columna incorrecta"<<endl;

        break;
    case 'H':
        if(b>0&&b<20)
            *(*(matriz+7)+(b-1))='+';
            else
                cout<<"columna incorrecta"<<endl;

        break;
    case 'I':
        if(b>0&&b<20)
            *(*(matriz+8)+(b-1))='+';
            else
                cout<<"columna incorrecta"<<endl;

        break;
    case 'J':
        if(b>0&&b<20)
            *(*(matriz+9)+(b-1))='+';
            else
                cout<<"columna incorrecta"<<endl;

        break;
    case 'K':
        if(b>0&&b<20)
            *(*(matriz+10)+(b-1))='+';
            else
                cout<<"columna incorrecta"<<endl;

        break;
    case 'L':
        if(b>0&&b<20)
            *(*(matriz+11)+(b-1))='+';
            else
                cout<<"columna incorrecta"<<endl;

        break;
    case 'M':
        if(b>0&&b<20)
        *(*(matriz+12)+(b-1))='+';
        else
            cout<<"columna incorrecta"<<endl;
        break;
    case 'N':
        if(b>0&&b<20)
        *(*(matriz+13)+(b-1))='+';
        else
            cout<<"columna incorrecta"<<endl;
        break;
    case 'O':
        if(b>0&&b<20)
            *(*(matriz+14)+(b-1))='+';
            else
                cout<<"columna incorrecta"<<endl;

        break;

    default:cout<<"fila incorrecta "<<endl;

        break;
    }


}
