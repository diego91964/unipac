#include <stdio.h>
int main ()
{
    int num;
    int i = 0;
    float media;
    int somador = 0;
    int somaTotal = 0;

    printf ("Entre com um numero: ");
    scanf ("%d",&num);


    while (num != 0){
        somaTotal += num;
        somador++;
        printf ("Entre com um numero: ");
        scanf ("%d",&num);
    }

    media = somaTotal/somador;

    printf("Media %f", media);

    return(0);
}