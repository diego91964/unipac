#include<stdio.h>

int fact (int fa){

    if (fa == 0){
			
			 return 0;

		}else if (fa == 1) {

			return 1;

		}else {
		
			return fa*fact(fa -1);
		}
}



int main () { 


	int resultado, entrada, i;

	resultado = 1;

	scanf("%d", &entrada);

	resultado = fact (entrada);

	printf ("%d", resultado);

}

