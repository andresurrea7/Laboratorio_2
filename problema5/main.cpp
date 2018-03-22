#include <iostream>

/* Haga una función que compare 2 cadenas de caracteres y retorno un valor lógico verdadero si son
iguales y falso en caso contrario, no olvide también tener en cuenta la longitud de las cadenas. Escriba un programa
de prueba.*/
using namespace std;
bool comparar(char *, char *);//funcion para comparar los dos textos
int main()
{

    char *a="esto es una prueba";
    char *b="esto es una prueba fgsgsdgsd";
    if(comparar(a,b))
        cout << "son iguales " << endl;
    else
        cout << "no son iguales " << endl;
    return 0;
}
bool comparar(char *a, char *b){
    int comparadorA=0,comparadorB=0;
    for(int f=0;a[f]!='\0';f++)
        comparadorA=f;
    for(int z=0;b[z]!='\0';z++)
        comparadorB=z;
    if(comparadorA==comparadorB){
    for(int i=0; a[i]!='\0';i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;}
    return false;

}

