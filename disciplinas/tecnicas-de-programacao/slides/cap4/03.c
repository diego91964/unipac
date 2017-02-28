#include <stdio.h>

int main (int argc, char** argv)
{
    double diametroCirculo, raioMaior, ac1, ac2, ac3, ac4 ,ac5, ac6, areaTotal, valorTotal;
    printf("Digite o valor do diametro maior em cm!\n");
    scanf("%lf",&diametroCirculo);
    raioMaior = diametroCirculo / 2.0;

    ac1 = 3.14 *((raioMaior)*(raioMaior));
    ac2 = 3.14 *((raioMaior-1)*(raioMaior-1));
    ac3 = 3.14 *((raioMaior-2)*(raioMaior-2));
    ac4 = 3.14 *((raioMaior-3)*(raioMaior-3));
    ac5 = 3.14 *((raioMaior-4)*(raioMaior-4));
    ac6 = 3.14 *((raioMaior-5)*(raioMaior-5));

    areaTotal = ac1 + ac2 + ac3 + ac4 + ac5 + ac6;
    diametroCirculo = areaTotal * 5000.00;

    printf("%lf\n", diametroCirculo );

    return (0);
}
