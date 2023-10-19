#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

void mostrar(char **disponible)
{
    printf("Asientos disponibles");
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf(" %c ",disponible[i][j]);
        }
    }
}
int precio10(int costo)
{
    return costo-(costo*10/100);
}
int precio30(int costo)
{
    return costo-(costo*30/100);
}
int precio40(int costo)
{
    return costo-(costo*40/100);
}
int precio(int estudia, int hora,int costo)
{
    if(estudia==1)
    {
        if(hora==1)
        {
            printf("El presio es de: %d",precio40(costo));
        }else
        {
            printf("El presio es de: %d",precio30(costo));
        }
    }
    if(hora ==1)
    {
        printf("El presio es de: %d",precio10(costo));
    }else
    {
        printf("El presio es de: %d",costo);
    }  
}  
void disponible(char** disponible,int f, int c)
{
    if((*disponible)[f][c]=="x")
            {
                printf("ese asiento ya esta tomado");
            }else
            {
                *disponible[f][c]="x";
            }
}
void venta(char **disponible,char **f)
{
    int estudia;
    int hora;
    char f;
    int c;
    int filas;
    int boletos = 0;
    printf("Cuantos boletos quieres comprar (maximo 3): ");
    scanf("%d",&boletos);
    if(boletos >3)
    {
        printf("El limete de boletos es 3");

    }else
    {
        printf("Eres estudiante? \n1. Si \n2. No ");
        scanf("%d",&estudia);
        printf("Estas comprando los boletos entre la 10 y las 12? \n1. Si \n2. No ")
        scanf("%d",hora)
        mostrar(char **disponible)
        for(int i =0;i<boletos;i++)
        {
            printf("Asientos %d",i+1);
            printf("Elije tu asiento primero la fila: ");
            scanf("%c",f);
            printf("columna: ");
            scanf("%d",&c);
            for(int j=0;j<8;j++)
            {
                if(f==f[0][i])
                {
                    filas = i
                }
            }
            disponible(char**disponible,filas,c);
        }
        int costo=120*(i);
        int total = precio(int estudia, int hora,int costo);
    }
}
