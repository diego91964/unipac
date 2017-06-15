#include <stdio.h>
#include <limits.h>
#define TRUE 1
#define FALSE 0

int verifica_primo (int num) {

    int i;
    int maior = INT_MAX;

    if (num == 1 || num == 2) return TRUE;


    for (i = 2; i < num; i++){
        if (num % i == 0) return FALSE;
    }

    return TRUE;
}

int main () {

    int numero;
    int resultado;
    int i ;

    scanf("%d", &numero);

    for ( i = numero ; i > 0 ; i--){

        resultado = verifica_primo(i);

        if (resultado == TRUE){
            printf("%d",i);
            break;
        }

    }



}