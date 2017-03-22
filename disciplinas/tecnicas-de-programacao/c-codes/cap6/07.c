#include <stdio.h>

/*
 * FAÇA UM PROGRAMA (ALGORITMO E FLUXOGRAMA) QUE RECEBA UM NÚMERO ENTRE 1 E 10.000 E MOSTRE O VALOR DIGITADO POR EXTENSO.
 */

int escrevaUnidade (int unidade){

    switch (unidade) {

        case 9:
            printf(" nove ");
            break;
        case 8:
            printf(" oito ");
            break;
        case 7:
            printf(" sete ");
            break;
        case 6:
            printf(" seis ");
            break;
        case 5:
            printf(" cinco ");
            break;
        case 4:
            printf(" quatro ");
            break;
        case 3 :
            printf(" trez ");
            break;
        case 2 :
            printf(" dois ");
            break;
        case 1 :
            printf(" um ");
            break;

    }
    return 1;
}


int escrevaCentena (int centena, int dezena, int unidade){
    switch (centena){
        case 9:
            printf(" novecentos " );
            break;
        case 8:
            printf(" oitocentos ");
            break;
        case 7:
            printf(" setecentos ");
            break;
        case 6:
            printf(" seiscentos ");
            break;
        case 5:
            printf(" quinhentos ");
            break;
        case 4:
            printf(" quatrocentos ");
            break;
        case 3 :
            printf(" trezentos ");
            break;
        case 2 :
            printf(" duzentos ");
            break;
        case 1 :{
            if (dezena == 0 && unidade == 0){
                printf(" cem ");
            }else{
                printf(" cento ");
            }
        }
    }
}

int escrevaDezena (int dezena, int unidade) {
    switch (dezena) {
        case 9:
            printf(" noventa ");
            break;
        case 8:
            printf(" oitenta ");
            break;
        case 7:
            printf(" setenta ");
            break;
        case 6:
            printf(" sessenta ");
            break;
        case 5:
            printf(" cinquenta ");
            break;
        case 4:
            printf(" quarenta ");
            break;
        case 3 :
            printf(" trinta ");
            break;
        case 2 :
            printf(" vinte ");
            break;
        case 1 : {

            switch (unidade) {
                case 9:
                    printf(" dezenove ");
                    break;
                case 8:
                    printf(" dezoito ");
                    break;
                case 7:
                    printf(" dezessete ");
                    break;
                case 6:
                    printf(" dezesseis ");
                    break;
                case 5:
                    printf(" quinze ");
                    break;
                case 4:
                    printf(" quatorze ");
                    break;
                case 3 :
                    printf(" treze ");
                    break;
                case 2 :
                    printf(" doze ");
                    break;
                case 1 :
                    printf(" onze ");
                    break;
                default:
                    printf(" dez ");
                    break;

            }
            break;
        }
    }
}


int main ()
{
    int num;
    int milhar;
    int centena;
    int dezena;
    int unidade;
    int aux;

    printf ("Digite um numero:");
    scanf ("%d",&num);

    if (num >= 1 && num < 10000){

        milhar = num / 1000;

        aux = num % 1000;

        centena = aux / 100;

        aux = num % 100;

        dezena = aux / 10;

        unidade = aux % 10;

        if (milhar > 0){
            escrevaUnidade(milhar);
            printf(" mil");
        }

        escrevaCentena(centena, dezena, unidade);

        if (dezena % 10 != 0 && num > 20){
            printf(" e ");
        }
        escrevaDezena(dezena, unidade);

        if (unidade != 0 && (dezena > 1 || centena >= 1)){
            printf(" e ");
            escrevaUnidade(unidade);
        }else if (dezena > 1 && unidade < 9){
            escrevaUnidade(unidade);
        }


    }else{
        printf ("Número invalido");
    }

    return(0);
}