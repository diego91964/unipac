#include <stdio.h>
#define TRUE 1
#define FALSE 0

int verifica_primo (int num) {

    int i;

    if (num == 1 || num == 2) return TRUE;


    for (i = 2; i < num; i++){
        if (num % i == 0) return FALSE;
    }

    return TRUE;
}

int main () {

    int numero;
    int resultado;

    scanf("%d", &numero);

    resultado = verifica_primo(numero);

    printf("%d", resultado);


}