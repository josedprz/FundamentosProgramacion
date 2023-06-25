#include <stdio.h>

struct datos{
    char nombre[50];
    char boleta[50];
    int edad;
    char genero;
};

int main()
{
    struct datos alumno[10];
    int num, i;
    printf("\nCuantos alumnos quieres almacaenar que no pasen de 10?: ");
    scanf("%d", &num); fflush(stdin);
    for(i=0; i<num; i++){
    	printf("\nInserta el nombre del alumno: ");
    	gets(alumno[i].nombre);
    	printf("\nInserta el numero de la boleta: ");
    	gets(alumno[i].boleta);
    	printf("\nInserta su edad: ");
    	scanf("%d", &alumno[i].edad); fflush(stdin);
    	printf("\nInserta su genero: ");
    	scanf("%c", &alumno[i].genero); fflush(stdin);
	}
	printf("\nLos datos insertados son. \n");
	for(i=0; i<num; i++){
		printf("\n---- Alumno numero [%d] ----", i+1);
		printf("\n El nombre es: %s", alumno[i].nombre);
		printf("\n Su boleta es: %s", alumno[i].boleta);
		printf("\n Su edad es: %d", alumno[i].edad);
		printf("\n Su genero es: %c\n", alumno[i].genero);
	}
    return 0;
}
