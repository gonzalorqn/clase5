#include <stdio.h>
#include <stdlib.h>
#define cantidad 5

void cambiarEntero(int numero);
void cambiarVector(int listadoNumeros[]);
void cargarVectorConMenosUno (int listado[]);

int main()
{
    int edad=22;
    int edades[cantidad];
    int i;
    /*int tamanioVector;
    int tamanioElemento;
    int cantidadElementos;

    tamanioVector = sizeof(edades);
    tamanioElemento = sizeof(edades[0]);
    cantidadElementos = tamanioVector/tamanioElemento;

    */
    cambiarEntero(edad);
    printf("%d \n",edad);
    cambiarVector(edades);
    printf("%d \n",edades[0]);
    cargarVectorConMenosUno(edades);
    for(i=0;i<cantidad;i++)
    {
        printf("edad %d: %d \n",i,edades[i]);
    }

    return 0;
}
void cargarVectorConMenosUno (int listado[])
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        listado[i]=-1;
    }
}

void cambiarVector(int listadoNumeros[])
{
    listadoNumeros[0]=666;
}


void cambiarEntero(int numero)
{
    numero=666;
}
