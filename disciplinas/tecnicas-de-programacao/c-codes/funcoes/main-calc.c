#include <stdio.h>
#include "calculadora.h"

/*   Para realizar a build executar os seguintes comandos:
 * 
 *  gcc -c -g calculadora.c
 *  gcc -c -g main-calc.c
 *  gcc -o main main-calc.o calculadora.o
 */

int main () {

    char operacao;
    int n1 , n2;
    int resultado;

    scanf("%c",&operacao);
    scanf("%d",&n1);
    scanf("%d",&n2);

    switch (operacao) {

        case '+' :
            resultado = soma (n1,n2);
            break;
        case '-' :
            resultado = sub (n1,n2);
            break;
        case '*' :
            resultado = mult(n1,n2);
            break;
        case 'p' :
            resultado = pot (n1,n2);
            break;
        default:
            break;
    }

    printf("%d", resultado);
}
