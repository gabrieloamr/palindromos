//Versão Recursiva

#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int isPalindrome(char str[], int left, int right){
    return(left >= right) ?: (str[left] == str[right]) && isPalindrome(str, left + 1, right - 1);
}

int main(void){
    char palavra[100];

    printf("Digite uma palavra:\n");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    if(isPalindrome(palavra, 0, tamanho - 1)){
        printf("E' palindromo");
        }else{
            printf("Nao e' palindromo");
        }

        return 0;
    }