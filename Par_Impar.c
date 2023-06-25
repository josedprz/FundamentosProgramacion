#include <stdio.h>
#include <string.h>

// Programa donde se ingresan números e indica cuántos son pares y cúantos impares

int main(){
	int arr[15], count=0, ceros=0;
	printf("--- Ingresa 15 numeros --- \n");
	for(int i = 0; i<15; i++){
		printf("Numero[%d]: ", i+1);
		scanf("%d", &arr[i]);
		if(arr[i] == 0){
			ceros++;
		}else{
			if((arr[i]%2) == 0){
				count++;
			}
		}
	}
	printf("\nNumeros pares: %d", count);
	printf("\nNumeros impares: %d", 15-count-ceros);
	
	return 0;
}
