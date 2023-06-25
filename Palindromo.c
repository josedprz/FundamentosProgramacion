#include <stdio.h>
#include <string.h>

//Indica si la cadena ingresada es un palíndromo

int main(){
	char cadena[100];
	int pal,r;
	printf("Ingresa una cadena: ");
	gets(cadena);
	r=strlen(cadena)-1;
	for(int i=0; i<(strlen(cadena)-1); i++){
	    if(i<=r){
	        if(cadena[i]==cadena[r]){
	        }else{
	            pal=0;
	            break;
	        }
	    }else{
	        pal=1;
	    }
    r--;
	}
	if(pal==1){
	    printf("\nLa cadena ingresada es un palindromo.");
	}else{
	    printf("\nLa cadena ingresada no es un palindromo.");
	}
	
	return 0;
}