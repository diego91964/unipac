#include<stdio.h>

void main()
{
    int vetor[10],i; // Um conjunto de 5 inteiros.
    char funcao;

    for(i=0; i<10; i++){
        scanf("%d",&vetor[i]);
    }

    printf("Digite e Funçao");

    scanf("%c",&funcao);

    switch (funcao) {
        case 'A' :
            funcaoA(vetor);
            break;
        case 'B' :
            funcaoB(vetor);
            break;
        case 'C'  :
            funcaoC(vetor);
            break;
        case 'D'  :
            funcaoD(vetor);
            break;
        case 'E'  :
            funcaoE(vetor);
            break;
        case 'F'  :
            funcaoF(vetor);
            break;
        default:
            break;
    }

}