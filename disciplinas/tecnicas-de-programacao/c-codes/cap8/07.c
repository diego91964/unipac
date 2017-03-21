#include <stdio.h>
int main ()
{
    int num;

    printf ("Entre com um numero: ");
    scanf ("%d",&num);

    switch (num) {
        case 1 :
            printf ("Número um");
            break;
        case 2 :
            printf ("Número dois");
            break;
        default:
            printf ("Número desconhecido");
            break;
    }

    return(0);
}