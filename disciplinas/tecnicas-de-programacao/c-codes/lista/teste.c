#include <stdio.h>
#include <locale.h>
#include <math.h>

struct numero { char num[256]; };

struct numero nr;

void BinarioParaTernario() {

    int i, casas = 0, acm = 0, a = 0;

    for (i = 0; i < (sizeof (nr.num) + 1); i++) {

        if (nr.num[i] != NULL) { casas++; }

    }

    i = (casas - 1);

    do {

        int nlen = (int) nr.num[i] - '0'; //printf("\nI = %i", i);

        int vzx = (nlen * 3);

        acm += pow(vzx, a); //printf("\nACM = %i vzx = %i", acm, vzx);

        i--; a++;

    } while (i > (-1));

    printf("\nDecimal: %i\n", acm);

}

void main() {

    setlocale(LC_ALL, "Portuguese");

    printf("Digite os seu numero: ");

    scanf("%s", &nr.num);

    BinarioParaTernario();

}