#include <stdio.h>

struct datos{
    int edad;
    char nombre[10];
};

int main()
{
    struct datos alumno;
    printf("\nsizeof (nombre): %lu", sizeof(alumno.nombre));
    printf("\nsizeof (edad): %lu", sizeof(alumno.edad));
    return 0;
}
