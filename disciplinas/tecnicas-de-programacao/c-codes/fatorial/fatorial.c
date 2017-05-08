#include<stdio.h>

int main () {

	int resultado, entrada, i;

	resultado = 1;

	scanf("%d", &entrada);

	for (i = 0 ; i < entrada ; i++ ){
	  resultado = resultado * (entrada - i);
	}

	printf ("%d", resultado);


}
