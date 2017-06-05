#include<stdio.h> 
void FUNC1()
{
    int B;
    B = -100;
    printf("Valor de B dentro da função FUNC1: %d\n", B);
}
void FUNC2()
{
    int B;
    B = -200;
    printf("Valor de B dentro da função FUNC2: %d\n", B);
}
void main()
{
    int B;

    B = 10;
    printf("Valor de B: %d\n", B);
    B = 20;
    FUNC1();
    printf("Valor de B: %d\n", B);
    B = 30;
    FUNC2();
    printf("Valor de B: %d\n", B);
}