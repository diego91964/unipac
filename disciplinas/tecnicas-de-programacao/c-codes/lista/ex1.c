#include <stdio.h>

int mult(int n1, int n2){
    int i,resultado;

    resultado = 0;

    for (i = 0; i < n1 ; i++){
        resultado += n2;

    }

    return resultado;

}

int pow (int n1, int n2){

    int i,resultado;

    resultado = 1;

    for (i = 0 ; i < n2 ; i++){
        resultado = mult (resultado , n1);
    }

    return resultado;
}



void main () {

    int numero;
    int mod , i;
    int soma = 0;

    scanf("%d",&numero);

    do {

        mod = numero % 10;
        soma += mod * pow (3,i);
        numero = numero / 10;
        i++;


    } while (numero != 0);

    printf("%d", soma);
}
