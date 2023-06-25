#include <stdio.h>

struct datos{
    char nombre[50];
    char boleta[50];
    int edad;
    char genero;
};

int main()
{
    struct datos alumno;
    struct datos *palumno;
    palumno=&alumno;
    
    printf("\nInserta el nombre del alumno: ");
    gets(palumno -> nombre);
    printf("\nInserta el numero de boleta: ");
    gets(palumno -> boleta);
    printf("\nInserta su edad: ");
    scanf("%d", &palumno -> edad); fflush(stdin);
    printf("\nInserta su genero: ");
    scanf("%c", &palumno -> genero); fflush(stdin);
    
    printf("\nLos datos insertados son. \n");
	printf("\n El nombre es: %s", palumno -> nombre);
	printf("\n Su boleta es: %s", palumno -> boleta);
	printf("\n Su edad es: %d", palumno -> edad);
	printf("\n Su genero es: %c", palumno -> genero);
	
    return 0;
}
