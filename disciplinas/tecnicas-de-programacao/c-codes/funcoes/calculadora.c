//
// Created by diego on 5/22/17.
//

#include"calculadora.h"

int mult(int n1, int n2){
    int i,resultado;

    resultado = 0;

    for (i = 0; i < n1 ; i++){
        resultado += n2;

    }

    return resultado;

}


int soma (int n1, int n2){
    return n1 + n2;
}

int sub (int n1, int n2){
    return n1 - n2;
}

int pot (int n1, int n2){

    int i,resultado;

    resultado = 1;

    for (i = 0 ; i < n2 ; i++){
        resultado = mult (resultado , n1);
    }

    return resultado;
}


