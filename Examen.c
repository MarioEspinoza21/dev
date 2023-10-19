#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;
    char**f=(char**)malloc(sizeof(char*));
    char **disponible = (char**)malloc(sizeof(char*));
    f[0]="abcdefgh";
    f[1]="12345678";
    disponible[0]=" abcdefgh";
    disponible[1]="1OOOOOOOO";
    disponible[2]="2OOOOOOOO";
    disponible[3]="3OOOOOOOO";
    disponible[4]="4OOOOOOOO";
    printf("\nSistema Venta de boletos:\n");
    printf("1. Venta/Reserva de boletos\n");
    printf("2. Cancelacion de boletos\n");
    printf("3. Mostrar mostrar asientos disponibles\n");
    printf("4. Salir\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion);
    if(opcion==1) 
    {
        venta(disponible,f);
    }else if(opcion==3)
    {
         mostrar(disponible);
    }else if(opcion==4)
    {
        return 0;
    }else
    {
        printf("Opción no válida. Intente de nuevo.\n");
    }
       
    
    while(opcion!=4)
    {
        for (int i = 0; i < 9; i++) 
        {
            free(disponible[i]);
        }
    }


    return 0;
}
