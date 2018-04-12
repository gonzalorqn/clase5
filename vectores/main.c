#include <stdio.h>
#include <stdlib.h>
int dameUnEnteroEntre(int,int);
float dameUnFlotanteEntre(int,int);

int main()
{
    float listadoPrecios[5];
    int indice;
    int i;
    float precioAux;
    char respuesta;

    do
    {
        indice = dameUnEnteroEntre(0,4);
        precioAux = dameUnFlotanteEntre(1,1000);
        listadoPrecios[indice]=precioAux;
        printf("Desea ingresar otro dato? S/N");
        scanf("%c",respuesta);
    }while(respuesta=='s')

    for(i=0;i<5;i++)
    {
        printf("precio %d: %.2f \n",i,listadoPrecios[i]);
    }
    return 0;
}
int dameUnEnteroEntre(int min,int max)
{
    int num;
    do
    {
        printf("Ingrese un numero entre %d y %d: ",min,max);
        scanf("%d", &num);
    }while(num<min || num>max);
    return num;
}

float dameUnFlotanteEntre(int min,int max)
{
    float num;
    do
    {
        printf("Ingrese un numero flotante entre %d y %d: ",min,max);
        scanf("%f", &num);
    }while(num<min || num>max);
    return num;
}
