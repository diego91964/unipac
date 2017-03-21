#include <stdio.h>
int main ()
{
    int num;

    printf ("Entre com um numero: ");
    scanf ("%d",&num);

    if (num > 0){
        printf ("Número positivo ");
    }else if (num == 0){
        printf ("zero");
    }else{
        printf ("Número negativo ");
    }

    return(0);
}