#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char **texto, *linea;
    int i, j, vocales;

    texto = (char **) malloc(5 * sizeof(char *));
    linea = (char *) malloc(80 * sizeof(char));
    for(i = 0; i<5; i++){
        gets(linea);
        texto[i] = (char *) malloc(strlen(linea)+1);
        strcpy (texto[i], linea);
        vocales = 0;
        for(j =0; j<strlen(linea); j++){
            switch(linea[j]){
                case 'a': case 'A':
                case 'e': case 'E':
                case 'i': case 'I':
                case 'o': case 'O':
                case 'u': case 'U':
                    vocales++;

            }
        }
        printf("La linea %d contiene %d vocales. \n", i, vocales);
    }
    for(j = 0; j < 5; j++){
        printf("\n Texto capturado: \n %s", texto[j]);
    }
    return 0;
}