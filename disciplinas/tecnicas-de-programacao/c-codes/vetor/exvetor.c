#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_MAX 100

/*void print_vetor (int vetor[100] , int tamanho){
    int i;

    for (i = 0 ; i < tamanho ; i++){
        printf("%d \n" , vetor[i]);
    }

}

void calcula_media (int vetor[100] , int tamanho){

    int i;
    float soma;

    soma = 0;

    for (i = 0 ; i < tamanho ; i++){
        soma = soma + vetor[i];
    }


    printf("%f", (soma/tamanho));
}

void menor_elemento (int vetor[100] , int tamanho){
    int i, menor;
    menor = vetor[0];

    for (i = 0 ; i < tamanho ; i++){

        if (menor > vetor[i]){
            menor = vetor[i];
        }
    }

    printf("%d",menor);
}

int buscar_elemento (int vetor[100] , int tamanho, int elemento){

    int i;

    for (i = 0; i < tamanho ; i++){

        if (vetor [i] == elemento){
            return i;
        }
    }

    return -1;
}



void main (){
    int arroz [100];
    int i, aux, tamanho, opcao, resultado;

    tamanho = 0;

    for (i = 0 ; i < 100 ; i++){

        scanf("%d" , &aux);

        if (aux < 0) break;

        arroz [i] = aux;
        tamanho++;
    }

    while (1){
        printf ("Menu \n");
        printf (" 1 - Para imprimir o vetor\n");
        printf (" 2 - Para calcular a media\n");
        printf (" 3 - Menor elemento\n");
        printf (" 4 - Busca elemento\n");
        printf (" 4 - Busca elemento\n");
        printf (" 7 - Sair\n");

        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                print_vetor(arroz,tamanho);
                break;
            case 2:
                calcula_media(arroz,tamanho);
                break;
            case 3:
                menor_elemento(arroz,tamanho);
                break;
            case 4:

                printf ("Digite o elemento");
                scanf("%d",&resultado);
                resultado = buscar_elemento(arroz,tamanho,resultado);

                if (resultado < 0){
                    printf("Elemento nao encontrado");
                } else{
                    printf("A posiçao encontrada e %d", resultado );
                }

                break;
            case 7:
                exit(0);
            default:
                printf("Funçao nao encontrada");
                break;

        }
    }




}


/*
 * Abordagem Alternativa
 * void print_vetor (int vetor[100]){
    int i = 0;

    while (vetor[i] != -1){
        printf("%d",vetor[i]);
        i++;
    }

}

int main () {
    int arroz [100];
    int i, aux;

    for (i = 0 ; i < 100 ; i++){
        arroz[i] = -1;
    }

    for (i = 0 ; i < 100 ; i++){

        scanf("%d" , &aux);

        if (aux < 0) break;

        arroz [i] = aux;
    }

}*/













int main () {

    int vet[5];
    int i;

    for (i = 0; i < vet[4] ; i++){
        scanf("%d",&vet[i]);
    }

    for (i = 0; i < 5 ; i++){
        printf("%d",vet[i]);
    }

}








