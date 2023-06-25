#include <stdio.h>

int main(){
    int num;
    int *pnum;
    pnum = &num;
    num = 5;
    printf("La dirección de la variable num1 es: %lu", &num);
    printf("\nLa dirección del apuntador pnum1 es: %lu", &pnum);

    return 0;
}