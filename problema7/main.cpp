#include <iostream>
/*Escriba un programa que reciba una cadena de caracteres y elimine los caracteres repetidos.
Ejemplo: se recibe bananas debe mostrar bans.
Nota: la salida del programa debe ser: Original: bananas. Sin repetidos: bans.*/
using namespace std;
void repetidos(char *, char *nuevo);
int main()
{
    char nuevo[100];
    cout<<"ingrese la palabra:  ";
    cin>>nuevo;
    char a[100];
    repetidos(nuevo, a);
    cout <<"original: "<< nuevo << endl;
    cout <<"sin repetidos: "<< a << endl;
    return 0;
}
void repetidos(char *nuevo, char *a){
    int contador=0;
    for(int i=0;nuevo[i]!='\0';i++){
    }
    a[contador];
    int cierto=0;
    for(int i=0;*(nuevo+i)!='\0';i++){//ciclo para mirar todos los elementos de la cadena que ingresa el usuario
        contador++;
        int repetido=0;
        for(int j=0;*(a+j)!='\0';j++){//ciclo para mirar los elemento de la cadena donde estan los repetido y miarar si el siguiente lo es o no
            if(*(a+j)==nuevo[i]){
                repetido=1;
                break;
            }
        }
          if(repetido==0){
              *(a+cierto)=nuevo[i];
              cierto++;

          }
    if(nuevo[i]==nuevo[contador])
        break;
    }

}
