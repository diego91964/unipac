#include<stdio.h>

int verifica_primo(int numero){
	int i,primo;

  primo = 1;
  
  if (numero == 1) return 1;
  if (numero == 2) return 1;

  for (i = 2; i < numero ; i++){
  	if (numero % i == 0 && primo){
      primo = 0;
    }
    
  }
  
  return primo; 

}

int main () {
  
  int limiteSuperior,i;

  scanf("%d" , &limiteSuperior);

  for (i = 1; i < limiteSuperior ; i++){
        if (verifica_primo(i)
                ){
          printf("O número %d é primo. \n" , i);
        }
  }

}
