#include <stdio.h>
#include <string.h>

// Indica cúantas letras O hubo en la cadena

int main(){
	char cadena[100];
	int count=0;
	printf("Ingresa una cadena: ");
	gets(cadena);
	for(int i=0; i<(strlen(cadena)); i++){
		if(cadena[i] == 'O' || cadena[i] == 'o'){
			count++;
		}
	}
	printf("\nEl numero de letras O es: %d", count);
	return 0;
}
