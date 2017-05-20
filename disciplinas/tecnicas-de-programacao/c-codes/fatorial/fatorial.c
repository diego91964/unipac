#include<stdio.h>

/*int main () {

	int resultado, entrada, i;

	resultado = 1;

	scanf("%d", &entrada);

	for (i = 0 ; i < entrada ; i++ ){
	  resultado = resultado * (entrada - i);
	}

	printf ("%d", resultado);


}
*/

int main () {

	int i , fat, total;

	scanf("%d", &fat);
	total = 1;

	for (i=2; i<=fat; i++){
		total = total*i;

	}

	printf("%d",total);

	return 0;

}