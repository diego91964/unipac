<!-- .slide: data-state="no-toc-progress" --> <!-- don't show toc progress bar on this slide -->

# Técnicas de Programação
<!-- .element: class="no-toc-progress" --> <!-- slide not in toc progress bar -->

[Diego Silva](https://github.com/diego91964) | [online][1] | [src][2] | [codes][3]


[1]: https://diego91964.github.io/unipac/tecnicas-de-programacao-2017-2.html
[2]: https://github.com/diego91964/unipac/tree/master/disciplinas/tecnicas-de-programacao-2017-2

[3]: https://github.com/diego91964/tec-unipac/tree/master/tecnicas-unipac



----  ----

# Objetivo da Disciplina

Capacitar o aluno a analisar problemas e projetar, implementar e validar soluções
para os mesmos, através do uso de metodologias, técnicas e ferramentas de programação
que envolvam os elementos básicos da construção de algoritmos e programas de computador.
Como objetivos específicos temos a compreensão de linguagens de programação estruturada
(linguagem C) e melhoramento nas técnicas de resolução de problemas e raciocínio lógico.




----  ----

# Base Teórica

----

## Teoria dos Conjutos

[Conjuntos - 1](https://www.youtube.com/watch?v=0aUEDxYjZg8)

[Conjuntos - 2](https://www.youtube.com/watch?v=Wxm3ugnq9Sw)

[Conjuntos - 3](https://www.youtube.com/watch?v=c5a99sX-Sq8)

[Conjuntos - 4](https://www.youtube.com/watch?v=eZfFpnvudR0)

----

## Polinômios

[Polinomios](https://www.youtube.com/watch?v=wDmOoY5Mm58)

----

## Logaritmos

[Logaritmos](https://www.youtube.com/watch?v=esdFuyG7zGs&list=PLTPg64KdGgYiyW4u-g8y-dSkT1iz2cUKA)

----

## Média

[Média Aritmética](https://www.youtube.com/watch?v=2sRWaVJh7_o)
[Média Ponderada](https://www.youtube.com/watch?v=o8fEcLAar0w)

----

## Porcentagem

[Porcentagem](https://www.youtube.com/watch?v=ZZXcTQpbdaE)

----

## Expressões Booleanas

* AND: Será 1 somente se todos os operadores forem 1.
* OR: Será 0 somente se todos os operadores forem 0.
* NOT: Será 0 se o operador for 1, e 1 se o operador for 0

----

## Bases Decimais

* Conversão de binário para decimal.
* Conversão de decimal para binário.

----  ----

# Conceitos

Lógica de programação é a técnica de encadear pensamentos para atingir determinado
objetigo. O aprendizado desta técnica é necessário para quem deseja criar softwares.

----


## Algoritmo

Algoritmo consiste em uma sequência finita de passos com o objetivo de solucionar
um problema.

----

## Instrução

Instrução indica a um computador uma ação elementar a ser executada.

----

## Ex. de Algoritmo

1. Destrancar o carro.
2. Entrar no carro.
3. Colocar o cinto de segurança.
4. Colocar a chave na ignição.
5. Colocar o carro "ponto morto".
6. Girar a chave.
7. Ligar o carro.
8. Arrancar.

----

## Exercício

Descreva os seguintes algoritmos:

1. Trocar lampada
2. Trocar pneu do carro
3. Fazer compras

----

## Condição

Algoritmo para fazer compras:
1.  Fazer lista de compras.
2.  Ir ao mercado.
3.  Procurar produto.
4.  Produto disponível?
5.  
    - Sim: Adiciona ao carrinho.
    - Não: Procura outra marca.
6.  Realiza pagamento.

----  ----

# Primeiro programa


----

## Escrita

A escrita de um programa define como o software irá interagir com o usuário


----


## Leitura (printf)


* (%d) Imprime o proximo argumento, o número deve ser um int

* (%f)  Imprime o proximo argumento, o número deve ser um float

* (%c)  Imprime o proximo argumento, o número deve ser um char

* (%s) Imprime uma cadeia de caracteres char[] ou char*

* (%%) Imprime o caractere '%'


----

## Printf

* (%05d) Cria um número de 5 caracteres, caso seja menor, completa o mesmo com zeros (acrescenta casas decimais a esquerda)

* (%-5d) Alinha o número a esquerda (Espaços a direita)

* (% d) Imprime um espaço em branco a esquerda do número

* (%+d) Adiciona o sinal antes do número

----

## Printf

* (%i ) Imprime um inteiro

* (%o) Imprime um número inteiro na base octal

* (%u) Imprime um inteiro sem sinal unsigned int

* (%x ou %X) Imprime um unsigned int em hexadecimal

* (%F) É semelhante ao %f, mas em caso de número infinitos os caracteres são representados em maiúsculo

----

## Printf

* (%e or %E) Imprime em notação científica. Ex 3*10^7 -> 3e7

* (%g or %G) Utilizado para imprimir doubles, com ele você pode informar a precisão do número

* (%p) Imprime a representação de um ponteiro em hex

* (%n) Não imprime nada, apenas armazena o número de caracteres que foram impressos no ponteiro na lista de argumentos


----

## Exemplo printf (%n)

```

int main () {

  int numChars;
  float a = 3.14159;
  int b = 3490;

  printf("%f %d%n\n", a, b, &numChars);
  printf("A linha anterior possui %d caracteres.\n", numChars);

  return 0;
}

```

----

## Exemplo printf (%f)

```

int main () {

  float f = 3.1415926535;

  printf("%.2f", f);  /* "3.14" */
  printf("%7.3f", f); /* "  3.141" */

  return 0;

}

```

----

## Exemplo printf

```

int main () {

    int a = 100;
    float b = 2.717;
    char *c = "string!";
    char d = 'X';
    int e = 5;

    printf("%d", a);
    printf("%f", b);
    printf("%s", c);
    printf("%c", d);
    printf("110%%");

    printf("%10d\n", a);   
    printf("%-10d\n", a);
    printf("%*d\n", e, a);
    printf("%.2f\n", b);   


  return 0;

}

```


----


## Leitura

É muito importante entender como é feita a entrada de dados na linguagem C.
Pois, é a partir disso que o usuário irá interagir com o software.

[Fonte: Brian Hall](http://beej.us/guide/bgc/output/html/multipage/scanf.html)

----

## Scanf

* (%d) Lê um inteiro e armazena em um int (inteiro positivo ou negativo)


* (%f) Lê um número com ponto flutuantes e armazena em um float os parâmetros (%e, %E, and %g) são equivalentes

* (%s) Lê uma String (sequência de caracteres). Por padrão a leitura deste método para no primeiro caractere vazio, mas, o
tamanho de leitura pode ser especificado ( "%10s").


----

## Scanf


* (%u) Lê um inteiro sem sinal e armazena em um unsigned int.

* (%x ou %X) Lê um hexadecimal sem sinal e armazena em um unsigned int.

* (%o) Lê um octal sem sinal e armazena em um unsigned int.

* (%i) Semelhante ao (%d), mas você pode ler um número hexadecimal utilizando 0x ou um octal adicionando 0 no prefixo


----

## Scanf


* (%c) Lê um caractere e armazena em um char, caso o tamanho seja especificado ("%12c"), você deverá armazenar o valor em um vetor.

* (%p) Lê em um ponteiro e armazena em um (void*). O formato deste ponteiro deverá ser o mesmo utilizado no printf.

* (%n) Não realiza leitura, mas irá armazenar o número de caracteres processados no próximo inteiro na lista de parâmetros.


----

## Exemplo Leitura

```

int main () {

int a;
long int b;
unsigned int c;
float d;
double e;
long double f;
char s[100];

  scanf("%d", &a);  //Armazena um inteiro

  scanf(" %d", &a); //Lê um inteiro que vem após um espaço em branco

  scanf("%s", s); // Lê e armazena uma sequência de caractere

  scanf("%Lf", &f); // Lê e rmazena um long double

  // Armazena um inteiro (sem sinal), lê todos os espaços em branco e armazena em um long int
  scanf("%u %ld", &c, &b);

  // Armazena um inteiro, lê o espaço em branco, Lê e ignora a sequência 'teste' e armazena um inteiro
  scanf("%d teste %f", &a, &d);

  // Lê todos os espaços em branco e armazena todos os caracteres em s adicionando uma quebra de linha
  scanf(" %[^\n]", s);

  // Lê um float, lê (e ignora um inteiro) e lê e armazena um double:
  scanf("%f %*d %lf", &d, &e);

  // store 10 characters:
  scanf("%10c", s);

  return 0;
}
```

Note:
```
#include <stdio.h>
main(t,_,a)
char *a;
{
return!0<t?t<3?main(-79,-13,a+main(-87,1-_,main(-86,0,a+1)+a)):
1,t<_?main(t+1,_,a):3,main(-94,-27+t,a)&&t==2?_<13?
main(2,_+1,"%s %d %d\n"):9:16:t<0?t<-72?main(_,t,
"@n'+,#'/*{}w+/w#cdnr/+,{}r/*de}+,/*{*+,/w{%+,/w#q#n+,/#{l+,/n{n+,/+#n+,/#\
;#q#n+,/+k#;*+,/'r :'d*'3,}{w+K w'K:'+}e#';dq#'l \
q#'+d'K#!/+k#;q#'r}eKK#}w'r}eKK{nl]'/#;#q#n'){)#}w'){){nl]'/+#n';d}rw' i;# \
){nl]!/n{n#'; r{#w'r nc{nl]'/#{l,+'K {rw' iK{;[{nl]'/w#q#n'wk nw' \
iwk{KK{nl]!/w{%'l##w#' i; :{nl]'/*{q#'ld;r'}{nlwb!/*de}'c \
;;{nl'-{}rw]'/+,}##'*}#nc,',#nw]'/+kd'+e}+;#'rdq#w! nr'/ ') }+}{rl#'{n' ')#\
}'+}##(!!/")
  :t<-50?_==*a?putchar(31[a]):main(-65,_,a+1):main((*a=='/')+t,_,a+1)
    :0<t?main(2,2,"%s"):*a=='/'||main(0,main(-61,*a,
"!ek;dc i@bK'(q)-[w]*%n+r3#l,{}:\nuwloca-O;m .vpbks,fxntdCeghiry"),a+1);
}

```

----  ----

# Operadores Aritméticos

----  ----


# Estrutura de Controle

As estruturas de controle são utilizadas para fazer a verificação de condições
e executar ações a partir disto.

----

## Bloco if/else


----


## Switch/case

----


## Inline Conditions




----  ----

#  Estrutura de Repetição

----

## Laço for

----

## Laço While

----

## Laço do/while


----


## Laço Aninhado

----

## Comando break


## Comando continue

----  ----

# Vetor

## Criação de um Vetor

## Acessando elementos de um Vetor

## Imprimindo um Vetor

----  ----

# Struct

----

## Introdução a Struct

----


## Trabalhando com estruturas

----

## Array de estruturas

----

## Estruturas aninhadas

----

----  ----

# Ponteiro e Alocação de Memória

----  ----

# Manipulação de Arquivos
