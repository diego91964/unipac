#include <stdio.h>

main()
{
    int num;

    printf ("Entre com um numero: ");
    scanf ("%d",&num);

    do{
        printf("Hello %d\n", num );
        num = num -1;
    }while ( num > 0 );
}