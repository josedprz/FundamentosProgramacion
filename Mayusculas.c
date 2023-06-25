#include <stdio.h>
#include <string.h>

//Indica cúales letras mayúsculas fueron las ingresadas

int main(){
	char cadena[100];
	int count=0;
	printf("Ingresa una cadena: ");
	gets(cadena);
	printf("\nLa cadena ingresada contiene las letas Mayusculas: ");
	for(int i=0; i<(strlen(cadena)); i++){
		if(cadena[i] > 64 && cadena[i] < 91){
			printf("%c ", cadena[i]);
		}
	}
	
	return 0;
}
