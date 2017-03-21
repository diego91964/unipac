#include <stdio.h>
int main ()
{
    int num;
    int i = 0;

    printf ("Entre com um numero: ");
    scanf ("%d",&num);

    if (num > 0){
        for (i = 0; i < num ; i++){
            printf("Numero %d \n", i);
        }
    }else{
        for (i = num; i > 0 ; i--){
            printf("Numero %d", i);
        }
    }


    return(0);
}