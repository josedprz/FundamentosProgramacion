#include <stdio.h>
#include <string.h>

// Programa donde se ingresa una cadena e indica si al menos hubo una letra O, mayúscula o minúscula

int main(){
	char cadena[100];
	int count=0;
	printf("Ingresa una cadena: ");
	gets(cadena);
	for(int i=0; i<(strlen(cadena)); i++){
		if(cadena[i] == 'O' || cadena[i] == 'o'){
			count=1;
		}
	}
	if(count == 1){
		printf("\nHubo al menos una O.");	
	}else{
		printf("\nNo hubo al menos una O.");	
	}
	return 0;
}
