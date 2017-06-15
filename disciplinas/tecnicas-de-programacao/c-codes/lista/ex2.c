#include <stdio.h>


int xor (int vet){

    int i;
    int aux = 0;

    for (i = 0 ; i < 5 ; i++){
        if (vet[i] == 1){
            aux ++;
        }
    }

    return (aux%2);
}


int or (int vet[5]){

    int i;

    for (i = 0 ; i < 5 ; i++){
        if (vet[i] == 1) return 1;
    }

    return 0;
}

int and (int vet[5]){

    int i;

    for (i = 0 ; i < 5 ; i++){
        if (vet[i] == 0) return 0;
    }

    return 1;
}

int main () {

    int vetor[5];
    int i;
    int resultado;

    for (i = 0 ; i < 5; i++){
        scanf("%d",&vetor[i]);
    }

    resultado = and (vetor);

    printf("%d",resultado);
}
