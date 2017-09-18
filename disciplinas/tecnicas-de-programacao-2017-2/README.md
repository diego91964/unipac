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

Agora vamos começar criando nosso primeiro programa em C.

Note:

Antes de começar, é interessante lembrar que a linguagem C possui algumas palavras
reservadas, ou seja, só podem ser utilizadas para sua função específica. Não podem ser
utilizadas para nomear funções e variáveis.

São elas: auto, double, int, struct, break, else, long, switch, case, enum, register, typedef,
char, extern, return, union, const, float, short, unsigned, continue, for, signed, void,
default, goto, sizeof, volatile, do, if, static, while.

----

## Escrita

A escrita de um programa define como o software irá interagir com o usuário

[Material Complementar](https://www.youtube.com/watch?v=07YPObbEpU8)

[Fonte: Brian Hall](http://beej.us/guide/bgc/output/html/multipage/printf.html)

----


## Escrita (printf)


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

[Material Complementar](https://www.youtube.com/watch?v=yQx8sD6vK6M)

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




----  ----

# Operadores

Os operadores são identificadores reservados pela linguagem com ações pré-definidas.


----

## Operadores Aritméticos

Os operadores aritméticos são responsáveis por realizar operações matemáticas na linguagem C.

Os operadores abaixo são responsáveis por:

* (+): Realizar soma
* (-): Realizar subtração
* ( * ): Realizar Multiplicação
* (/): Realizar Divisão
* (%): Resto da divisão
* (=): Atribuição (Também pode ser considerado como um operador a parte)

[Material Complementar - Operadores Aritméticos](https://youtu.be/NsRwpFNZhJs)

[Material Complementar - Operador de Atribuição](https://youtu.be/tQhnuVR2gc4)

----

## Divisão Inteira e Real

A linguagem C possui a característica de realizar algumas operações em conjuntos específicos. Um
bom exemplo é a divisão, caso você realize a divisão no conjunto dos inteiros, obterá como resultado
apenas a parte inteira, caso os operandos sejam reais, o resultado será um número real.

```
 int n1 = 5;
 int n2 = 2;
 float n11 = 5.0;
 float n22 = 2.0;

 printf("%d",(n1/n2)); // '2'
 printf("\n");
 printf("%.2f",(n11/n22)); // '2.50'

```

----

## Operadores Lógicos

Os operadores lógicos sempre irão obter como resultado zero ou 1.

São exemplo de operadores lógicos:

* (>,<,!=,==,>=,<=): Realizam Comparação
* && : AND Lógico
* |  : OR Lógico
* ^  : XOR lógico
* << : left shift (desloca todos os bits para a direita)
* \>\> : right shift (desloca todos os bits para a esquerda)



----  ----


# Estrutura de Controle

As estruturas de controle são utilizadas para fazer a verificação de condições
e executar ações a partir disto.

----

## Bloco if/else

Os blocos if e else são blocos que fazem a verificação  de uma condição, caso ela seja verdadeira
a mesma entre no bloco if, caso seja falsa, o fluxo entrará no bloco else.

```
  if(expressao) {
      //bloco if: executa caso a expressao seja verdadeira
      //chamado de condição
  }
  else {
      // bloco else : executa caso a expressao seja falsa
      //chamado de caso padrão
  }

```

[Material Complementar - IF](https://youtu.be/84mgFRR_ODo)
[Material Complementar - ELSE](https://youtu.be/YR-ku4OdPJU)

----

## Bloco if/else

São exemplos de expressões:

* (num1 > num2): verificação matemática
* (num1 == num2):  verificação matemática
* (bol1 && boll2): verificação lógica
* ((num1 > num2) && (num1 > num3)): Verificação matemática e lógica

Em suma, o resultado de uma exressão que controla um if/else sempre terá como resultado
verdadeiro ou falso.


----


## Bloco else if

Agora vamos pensar em um caso que eu tenho duas condições e um caso padrão.


```

  if(expressao1) {
      //bloco if: executa caso a expressao1 seja verdadeira
  }
  else if(expressao2) {
      //bloco if: executa caso a expressao1 seja verdadeira e a expressao2 seja falsa
  }
  else {
      // bloco else : executa caso a expressao1 e expressao2 seja falsa
  }

```

----

## Exemplo bloco else if

Ex. Se o número for igual a 1 escreva 'um', se o número for igual a 2 escreva 'dois', caso contrário
escreva 'outro'.


```
if(numero == 1) {
      printf ("um");
  }
  else if(numero == 2) {
      printf ("dois");
  }else {
      printf ("outro" );
  }

```


----


## Switch/case

Agora imagine o cenário: Temos uma lista de condições possíveis, o código if/else/if poderia ficar
um pouco poluído.

Para isto a linguagem C utiliza o controle de fluxo Switch:

```
  switch () {
    case condicao1 :
      //bloco execuado
      break;
    case condicao2 :
      //bloco execuado
      break;
    case condicao2 :
      //bloco execuado
      break;
    case condicao2 :
      //bloco execuado
      break;
    case condicao2 :
      //bloco execuado
      break;
    default:
      // condição padrão

  }
```

[Material Complementar](https://youtu.be/z395-PmpzlI)

Note:

O break é utilizado para que o case interrompa a execução quando ele encontrar o resultado,
caso contrário o mesmo continuará a comparar outros valores.


----

## Exemplo switch/case

Ex. O programa recebe um número de 0 a 9 e escreve ele por extenso.

```
  int main (){

    int num;

    scanf("%i",&num);

    switch (num){

    case 0:
      printf("Zero");
      break;
    case 1:
      printf("Um");
      break;
    case 2:
      printf("Dois");
      break;
    case 3:
      printf("Três");
      break;
    case 4:
      printf("Quatro");
      break;
    case 5:
      printf("Cinco");
      break;
    case 6:
      printf("Seis");
      break;
    case 7:
      printf("Sete");
      break;
    case 8:
      printf("Oito");
      break;
    case 9:
      printf("Nove");
      break;
    default:
      printf("Número não conhecido");
    }

    return 0;
  }

```

----


## Inline Conditions

Ainda existe outra forma de realizar comparações, utilizando os operadores térnários, ou inline conditions.

Este operador consiste em uma comparação que poderá retornar dois valores, um caso a condição seja verdadeira e outro caso
seja falsa.


  (expressao) ? (Executa caso verdadeira) : (Executa caso falsa)

[Material Complementar](https://youtu.be/lWUZWF1Ifbw)

----

## Exemplo Inline Condition

Ex.: Faça um programa que leia um número e imprima o próximo número par a partir dele.

```
  int main () {

    int n1,proximoPar;

    scanf("%i",&n1);

    proximoPar = (n1%2 == 0) ? n1 + 2 :  n1 + 1;

    return 0;
  }

```

----  ----

#  Estrutura de Repetição

As estruturas de repetição são utilizadas para repetir partes do código. Com as estruturas de repetição é possível
evitar que código seja reescrito e também permite iterações dinâmicas, com base em parâmetros de entrada.

----

## Laço for

O laço for consiste em uma forma de repetir a execução de um bloco de código utilizando uma condição.

```
  for (inicializacao ; condicao_parada ; incremento){
    /**
      Bloco de código que será executado.
    **/
  }

```

[Material Complementar (Vídeo)](https://youtu.be/tlagnwiiIqE)
[Material Complementar (Texto)](https://www.gnu.org/software/gnu-c-manual/gnu-c-manual.html#The-for-Statement)

----

## Laço for

É importante lembrar que todos os parâmetros são opcionais, mas a condição de parada normalmente
deverá ser preenchida, caso contrário o laço será infinito.

```

for(;;) {
   printf("Loop infinito!");
}

```

----

## Laço for

É possível chamar mais de uma operação por parâmetro. Para isto, utilize ','.

```
  int x, y,n;
  for(int n = 0; n < 10; ++n, printf("%d\n", n));


  for (x = 1, y = 10; x <= 10 && y >= 1; x+=2, y--)
  printf ("%d %d\n", x, y);

```

----

## Laço for

Para executar apenas uma linha não é necessário utilizar as chaves '{}', para executar
um bloco se faz necessário o uso de chaves.


```
//Apenas uma linha
for (x = 1, y = 10; x <= 10 && y >= 1; x+=2, y--)
printf ("%d %d\n", x, y);

//Bloco de código
for (x = 1; x <= 10; x++)
  {
    printf ("x is %d\n", x);

    if ((x % 2) == 0)
      printf ("%d é par\n", x);
    else
      printf ("%d é ímpar\n", x);
  }

```


----



## Laço While

Assim como o comando 'for' o 'while' permite executar repetidamente um bloco
de código (comandos) de acordo com o resultado de uma condição, ou seja, executa enquanto
a condição for verdadeira.

```

while (condicao){
  //bloco que será executado
}

int counter = 0;
while (counter < 10) {
  printf ("%d ", counter++);
}

```

[Material Complementar (Vídeo)](https://youtu.be/3pftIJjsk30)
[Material Complementar (Texto)](https://www.gnu.org/software/gnu-c-manual/gnu-c-manual.html#The-while-Statement)

----

## Laço do/while

O laço 'do/while' tem a mesma estrutura do 'while'. Mas, no while o condicional é uma pré-condição para executar o código, já no 'do/while' ele é uma pós-condição para que o código continue executando. Neste comando, a primeira iteração sempre vai ser sempre executada.


```
do {
  //Bloco que será executado
}while (condicao);
```
[Material Complementar (Vídeo)](https://youtu.be/VH6AycSgjN0)
[Material Complementar (Texto)](https://www.gnu.org/software/gnu-c-manual/gnu-c-manual.html#The-do-Statement)

----


## Laço Aninhado

É possível executar um comando de repetição dentro de outro ? Sim, neste caso você terá uma multiplicação de vezes
que o comando será executado.

```

int i,j;

for (i = 0; i < 10 ; i++){

    for (j = 0; j < 10; j++) {

      printf("%d - %d \n",i,j);

    }

}

```

----

## Exemplo de Laço Aninhado

```
  //Imprimindo a diagonal principal de uma matriz

  int main()
  {
    int i,j;

    for (i = 0; i < 10 ; i++){
      printf("|");

      for (j = 0; j < 10; j++) {

        if (i == j){
          printf("1");
        }else {
          printf("0");
        }

      }

      printf("|\n");

    }

}


```

----

## Comando break

O comando break, é utilizado para sair de uma estrutura de repetição (for,while,do) ou condicional(switch).



```
// Imprime todos os números que estão antes da diagonal principal de uma matriz.

int main()
{
  int i,j;

  for (i = 0; i < 10 ; i++){
    printf("|");

    for (j = 0; j < 10; j++) {

      if (i == j){
        break; // Quando i == j ele sairá do primeiro for
      }else {
        printf("0");
      }

    }

    printf("|\n");

  }

}


```

[Material Complementar (Vídeo)](https://youtu.be/QKzIyC5wBxU)
[Material Complementar (Texto)](https://www.gnu.org/software/gnu-c-manual/gnu-c-manual.html#The-break-Statement)


----

## Exemplo Comando break

```
int x;
for (x = 1; x <= 10; x++)
  {
    if (x == 8)
      break;
    else
      printf ("%d ", x);
  }
```

----

## Comando continue

O comando continue também é capaz de alterar o fluxo de execução de uma estrutura de repetição. Ele é capaz
de ignorar todo o resto de código que está abaixo da chamada e ir direto para a próxima iteração. Ou seja, não
sairá do laço.

```
int main () {

 int x,sum_of_odd_numbers;

 for (x = 0; x < 100; x++)
  {
    if (x % 2 == 0)
      continue;

    sum_of_odd_numbers += x;
    printf("%d \n",x);
  }

printf("%d",sum_of_odd_numbers);
}

```

[Material Complementar (Vídeo)](https://youtu.be/LK8DbKnImQI)
[Material Complementar (Texto)](https://www.gnu.org/software/gnu-c-manual/gnu-c-manual.html#The-continue-Statement)



----  ----

## Exercícios - A2

Faça a lista de exercícios para treinar o conteúdo.

Para acessá-la clique [aqui](https://diego91964.github.io/unipac/disciplinas/tecnicas-de-programacao-2017-2/docs/a2-lista-2017-2.pdf)

[Exercícios Complementares](http://www.facom.ufu.br/~backes/wordpress/ListaC02.pdf)

[Exercícios Complementares](http://www.facom.ufu.br/~backes/wordpress/ListaC03.pdf)

```
Faça um programa (algoritmo e fluxograma) que receba um número entre 1 e 10.000 e mostre o valor digitado por extenso.

```


----  ----

# Modelagem de software


Agora que já temos um conhecimento básico de programação, vamos aprender um pouco sobre modelagem.

Os modelos de um software tem como objeto representar as características ou o comportamentos de um software. Eles podem ser usados na identificação das características e funcionalidades, para representar o mesmo de forma mais abstrata e
didática e também pode ser utilizado para validação e teste do software.

----


## Modelagem por fluxograma

O modelo mais utilizado para linguagens procedimentais é o fluxograma. Pois ele
permite representar o software como um fluxo bem definido com início e fim. Um software pode ser
dividido em 4 etapas: Declaração de Variáveis, Entrada de Dados, Processamento e Saída; sendo
possível representar todas elas utilizando o fluxograma.


----


## Elementos de um fluxograma

![](img/fluxograma.png)


----


## Exemplo fluxograma - 1

Faça o fluxograma de um algoritmo que calcula a média aritmética entre duas notas de um aluno e mostra sua situação. Aprovado caso seja maior igual a 60 e reprovado caso menor que 60.


----


## Exemplo fluxograma - 2

Faça um algoritmo e um fluxograma para calcular o novo salário de um funcionário. Sabe-se que os funcionários que recebem atualmente salário de até r$ 500 terão aumento de 20%; os demais terão aumento de 10%.

----  ----

# Vetor ou Array

Vetores são estruturas utilizadas para armazenar um conjunto de dados do mesmo tipo.

![](img/array.jpg)

[Material Complementar - Vídeo](https://youtu.be/CtM7o2rsTic)

----

## Criação de um Vetor

A declaração de um vetor pode ser feita como a de uma variável comum.

```

int vetorDeInteiros [5];

```

----

## Inserindo elementos em um vetor

Os elementos do vetor podem ser acessados utilizando o índice.


```

int numero = vetorDeInteiros[0]; //


```

----

## Inicializando um Vetor

Inicializar um vetor consiste em dar um valor inicial para determinadas posições do vetor.

```
#include<stdio.h>


int main () {
  int i;

  //Iniciliza todos os elementos do vetor
  int vetor_um[5] = { 0, 1, 2, 3, 4 };

  // Acessando a posição de um vetor
  printf("%d",vetor_um[1]);

  //Imprimindo utilizando loop for
  for (i = 0; i < 5; i++){
    printf("%d",vetor_um[i]);
  }

  i = 0;

  //Imprimindo utilizando loop while
  while (i < 5){
    printf("%d",vetor_um[i]);
    i++;
  }

  return 0;
}
```

----


## Acessando elementos de um Vetor

Os elementos do vetor podem ser acessados através do índice. É importante lembrar que um
vetor sempre irá retornar um elemento do mesmo tipo que ele.


```

#include<stdio.h>


int main () {
  int i;

  //Iniciliza todos os elementos do vetor
  int vetor_um[5] = { 0, 1, 2, 3, 4 };

  // Acessando a posição de um vetor
  printf("%d",vetor_um[1]);

  //Imprimindo utilizando loop for
  for (i = 0; i < 5; i++){
    printf("%d",vetor_um[i]);
  }

  i = 0;

  //Imprimindo utilizando loop while
  while (i < 5){
    printf("%d",vetor_um[i]);
    i++;
  }

  return 0;
}


```

----  ----

# Funções

A linguagem C permite organizar o código através de funções para separar partes
do seu programa em subprocessos distintos. Para escrever uma função, você deve pelo menos criar
uma definição de função.

[Material Complementar](https://youtu.be/OrF2ydZIELk)

----

## Declaração de Funções

Uma função possui uma série de definições, que chamamos de assinatura.

```
  tipoDeRetorno nomeDaFuncao (listaDeParametros) {

    //Bloco que será executado.

  }

```

----

## Definição de Funções

Uma definição de função deve especificar o que uma função realmente faz, ela consiste
em informações sobre o nome da função, tipo de retorno, e tipos e nomes de parâmetros,
juntamente com o corpo da função. O corpo da função é uma série de instruções incluídas
entre chaves, ou seja ,um bloco.

```

  int soma (int numero1, int numero2){

    return (numero1+numero2);
  }

```

----

## Chamando Funções

Uma função pode ser chamada pelo nome, com a lista de parâmetro entre parên teses:

```
int soma (int numero1, int numero2){

  return (numero1+numero2);
}

int main (){

  int n1,n2,resultado;

  scanf("%d",&n1);
  scanf("%d",&n2);

  resultado = soma(n1,n2);

  printf("%d",resultado);

  return 0;
}

```

----

## Funções e Parâmetros

Os parâmetros de uma função possuem um tipo definido e podem (devem) ser utilizados
no bloco de código que será executado.


```

#include<stdio.h>

int somaInteira (int numero1, int numero2);
float somaFloat(float numero1, float numero2);
int imprimeVetor (int vetor[5]);
int imprimeVetorPonteiro (int* vetor);

int somaInteira (int numero1, int numero2){

  return (numero1+numero2);
}

float somaFloat(float numero1, float numero2){

  return (numero1+numero2);
}

int imprimeVetor (int vetor[5]){

  int i;

  for (i = 0 ; i < 5; i++){

    printf("%d",vetor[i]);

  }

}


int imprimeVetorPonteiro (int* vetor){

  int i;
  int j = (int) sizeof(vetor);

  for (i = 0 ; i < 5; i++){

    printf("%d",vetor[i]);

  }

}

void main (){

  printf("%d\n",somaInteira(2,3));
  printf("%f\n",somaFloat(2.0,3.0));

  int array[] = { 0, 1, 2, 3, 4};

  imprimeVetor(array);
  imprimeVetorPonteiro(array);

}


```

----

## Exemplo de Função

```

#include <stdio.h>
#include <stdlib.h>

void printSizeOf(int intArray[]);
void printLength(int intArray[]);

int main(int argc, char* argv[])
{
    int array[] = { 0, 1, 2, 3, 4, 5, 6 };

    printf("sizeof of array: %d\n", (int) sizeof(array));
    printSizeOf(array);

    printf("Length of array: %d\n", (int)( sizeof(array) / sizeof(array[0]) ));
    printLength(array);
}

void printSizeOf(int intArray[])
{
    printf("sizeof of parameter: %d\n", (int) sizeof(intArray));
}

void printLength(int intArray[])
{
    printf("Length of parameter: %d\n", (int)( sizeof(intArray) / sizeof(intArray[0]) ));
}

```

----

## Função Main

Cada programa requer pelo menos uma função, chamada 'main'. Pois, é nessa função que o programa
começa a ser executado. Você não precisa escrever uma declaração ou protótipo para o main, mas você precisa defini-lo.

[Material Complementar](https://www.gnu.org/software/gnu-c-manual/gnu-c-manual.html#The-main-Function)


----

## Função Main

O tipo de retorno para main é sempre int. Você não precisa especificar o tipo de retorno para a main, mas você pode. No entanto, você não pode especificar que ele tenha um tipo de retorno diferente de int (padrão GNU).

Em geral, o valor de retorno da main indica o status de saída do programa.
Um valor de zero ou EXIT_SUCCESS indica sucesso e EXIT_FAILURE indica um erro.
Caso contrário, o significado do valor retornado é definido pela implementação.


----

## Função Main (argc / argv)

Uma função main pode receber parâmetros a partir da chamada do programa.

```
#include<stdio.h>


int
main (int argc, char *argv[])
{
  int counter;

  for (counter = 0; counter < argc; counter++)
    printf ("%s\n", argv[counter]);

  return 0;
}

```
Exemplo de como o código deverá ser chamado:

```
$ ./main parametro1 parametro2

```


----

## Função estática


----

## Função Recursiva

----

## Funções Aninhadas


----

## Biblioteca de Funções

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
