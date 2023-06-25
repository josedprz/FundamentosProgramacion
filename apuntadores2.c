#include<stdio.h>

int main(){

    int ent[10], i;
    float flotante[10];
    double doble[10];
    char caracter[10];
    short corto[10];
    long largo[10];

    printf("\t\t Entero \t\t Flotante \t\t Doble \t\t\t Caracter \t\t Corto \t\t\t Largo");
    for (i=0; i<10; i++)
        printf("\nElemento %d: \t %d \t\t %d \t\t %d \t\t %d \t\t %d \t\t %d", i, &ent[i], &flotante[i], &doble[i], &caracter[i], &corto[i], &largo[i]);

    return 0;
}