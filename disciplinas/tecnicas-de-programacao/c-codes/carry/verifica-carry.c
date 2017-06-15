#include<stdio.h>


int numero_casas (int numero){

    int casas = 1;
    while((numero = numero / 10) > 0){
        casas++;
    }

    return casas;
}

int seleciona_maior (int n1, int n2){

    if (n1 > n2)
        return n1;

    return n2;
}

int main () {

    int n1,n2,i;
    int casasN1 , casasN2, casasMaior, carry, nCarry;
    int auxN1, auxN2, vCarryN1, vCarryN2;

    scanf("%d" , &n1);
    scanf("%d" , &n2);

    auxN1 = n1;
    auxN2 = n2;
    nCarry = 0;
    carry = 0;
    i = 0;

    casasN1 = numero_casas(n1);
    casasN2 = numero_casas(n2);

    casasMaior = seleciona_maior(casasN1 , casasN2);

    while (i < casasMaior){
        vCarryN1 = auxN1 % 10;
        vCarryN2 = auxN2 % 10;
        auxN1 = auxN1/10;
        auxN2 = auxN2/10;

        if ((vCarryN1 + vCarryN2 + carry) > 1){
            nCarry ++;
            carry = 1;
        }else {
            carry = 0;
        }


        i ++;
    }

    printf ("Soma é %d \n" , (n1+n2));

    printf("A soma possui %d carrys", nCarry);

}
