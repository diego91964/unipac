#include<stdio.h>
int main () {
  
  int numero,i,primo;
  scanf("%d" , &numero);

  primo = 1;

  for (i = 2; i < numero ; i++){
  	if (numero % i == 0 && primo){
      printf("Número não é primo");
      primo = 0;
    }
    
  }
 
  if (primo){
    printf("Número é primo");
  }

}
