#include <iostream>
/*Problema 15. Elabore un programa que permita hallar la intersección entre un par de rectángulos. Represente
los rectángulos como arreglos de 4 datos de la siguiente manera:
Los primeros 2 datos corresponden a las coordenadas de la esquina superior izquierda del rectángulo (x,y)
como se observa en la Figura 5.
Los siguientes 2 datos representan el ancho y la altura del rectángulo como se observa en la Figura 5.

Figura 5: Parámetros del rectángulo.

Implemente una función que reciba 2 arreglos que representen los rectángulos A y B, y por referencia retorne un
rectángulo C (con la misma estructura descrita anteriormente) que corresponda a la intersección de A y B como se
observa en la Figura 6.

6

Figura 6: Elementos del arreglo b.

Ejemplo: Si se ingresan los rectángulos A y B representados por los arreglos {0, 0, 8, 4} y {5, 2, 6, 7}, el rectángulo
intersección C debe ser el arreglo {5, 2, 3, 2}.*/
using namespace std;
void rectangulos(int *,int *,int *);
void mostar(int*);
int main()
{
    int a[4]={0,0,0,0};
    int b[4]={0,0,8,4};
    int c[4]={5,2,6,7};
    rectangulos(a,b,c);
    mostar(a);
    return 0;
}
void rectangulos(int *a, int *b, int *c){
    if(b[0]>c[0]){
        a[0]=b[0];
        a[2]=b[1]-a[0];}
    else{
        a[0]=c[0];
        a[2]=c[1]-a[0];}
    if(b[1]>c[1]){
        a[1]=c[1];
        a[3]=a[1]+c[1];
    }
    else{
        a[1]=b[1];
        a[3]=a[1]+b[1];
    }

}
void mostar(int *a){
    for(int i=0;i<4;i++)
        cout <<a[i]<<" ";
    cout<<endl;
}
