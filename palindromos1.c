//Versão Iterativa

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    char palavra [100];
    int i, j, tamanho;
    int palindromo = 1;

    printf("Digite uma palavra:\n");
    scanf("%s", palavra); //sem "&" quando se trata de strings

    tamanho = strlen(palavra);

    for(i = 0, j = tamanho - 1; i < j; i ++, j --){ //i++(adiciona 1 a i), j--(diminui 1 em j) 
        if(palavra[i] != palavra[j]){
            palindromo = 0;
            break;
        }
    }

    if(palindromo){ // == 1
        printf("E' palindromo");
    }else{
        printf("Nao e' palindromo");
    }

    return 0;
}