#include <stdio.h>
#include <stdlib.h>

void ejemploCargaSecuencial(void)
{
    float precio;
    int listadoEdades[5] = {22,33,44,11,55};
    float listadoPrecios[5];
    int edad = 66;
    int i;

    for(i=0;i<5;i++)
    {
        printf("\n Ingrese el precio %d : ",i);
        scanf("%f", &listadoPrecios[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\n Ingrese la edad %d : ",i);
        scanf("%d", &listadoEdades[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("edad %d : %d \n",i,listadoEdades[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("precio %d : %.2f \n",i,listadoPrecios[i]);
    }
    /*printf("%d \n", edad);
    printf("%d", &edad);
    printf("\n&listadoEdades %d", &listadoEdades);
    printf("\nlistadoEdades %d", listadoEdades);
    printf("\nlistadoEdades[0] %d", listadoEdades[0]);
    printf("\n&listadoEdades[0] %d", &listadoEdades[0]);
    printf("\nlistadoEdades[4] %d", listadoEdades[4]);
    printf("\nlistadoEdades[5] %d", listadoEdades[5]);*/
}
