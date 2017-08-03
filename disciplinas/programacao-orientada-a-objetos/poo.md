<!-- .slide: data-state="no-toc-progress" --> <!-- don't show toc progress bar on this slide -->

# Programação Orientada a Objetos
<!-- .element: class="no-toc-progress" --> <!-- slide not in toc progress bar -->

[Diego Silva](https://github.com/diego91964) | [online][1] | [src][2]


[1]: https://diego91964.github.io/unipac/poo
[2]: https://github.com/diego91964/unipac/poo

[3]: http://lab.hakim.se/reveal-js/
[4]: https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet



----  ----

# 1. Introdução

Consiste em um paradigma de programação que se baseia na composição e interação
de objetos.

Note:
Os principais aspectos são: Objetos, Classes, Métodos, Instanciação, Reuso, Mensagens, Chamadas de Métodos, Atributos, Variáveis de Instância, Encapsulamento, Herança

----

## História

>"Alan Kay foi a primeira pessoa que teve a visão de representação por objetos,
tal ideia foi vendida para a Xerox que criou a linguagem Smaltalk."

[Fonte: The University of Tennessee](http://web.eecs.utk.edu/~huangj/CS302S04/notes/oo-intro.html)

Note:
A criação da orientação a objetos foi em 1970.

Inicialmente, as linguagens orientadas a objetos foram criadas
para a modelagem de objetos do mundo real, como:

* Simulações de fábrica
* Simulações de um sistema planetário
* Um PC desktop - objetos representam janelas, documentos, etc.


----

## Objetos

Um objeto possui um conjunto de dados, sendo capaz de armazenar dados e realizar operações com eles.
Não é necessário mostrar como tais operações foram implementadas.

Note:
Um carro pode ser considerado um objeto. O mesmo possui operações, como:
ligar,freiar, acelerar, abrir vidro, etc.

----

## Classes x Objetos

Para que exista um objeto, é necessário um modelo, a classe é este modelo, ela
define tudo que existe no objeto, até a implementação de suas operações.

Note:
Ainda utilizando o exemplo do carro, a classe consiste no projeto do veículo.

----

## Propriedades de uma Classe

Em uma classe é possível:
* Declarar as variáveis ​​do objeto.
* Declarar as operações do objeto.
* Definir a função que implementa cada uma dessas operações.

Note:
O conjunto de variáveis de uma classe é chamado de variáveis de instância.

----

## Classes para Objetos

Quando um programa quer uma nova instância de um objeto, ele pergunta a classe
apropriada para criar um novo objeto para ele. A classe aloca memória para manter
as variáveis ​​de instância do objeto e retorna o objeto para o programa.

Note:
Cada objeto sabe qual classe criou para que quando uma operação for solicitada
para esse objeto, ele pode procurar na classe a função que implementa essa
operação e chamar essa função.

----

## Herança

Herança consiste em uma forma de agrupar classes em grupo de operações e variáveis
genéricas, reutilizando estes recursos para classes mais específicas.

Note:
Um carro é um veículo. Um veículo tem variáveis genéricas, como cor e modelo. Também
possui operações genéricas, como ligar e desligar. Um caminhão possui carroceria, um
carro não, ou seja, isto são propriedades específicas.


----

## Herança

Uma classe que herda variáveis e operações de uma classe genérica é chamada de
subclasse e a classe genérica é chamada de superclasse.

![](img/heranca.svg)


Note:
A subclasse não pode excluir nenhuma propriedade herdada da superclasse.

----

## Exemplo Herança

<img src="img/heranca.jpg" width="500"/>

[Fonte: Devmedia](http://www.devmedia.com.br/sobrecarga-e-sobreposicao-de-metodos-em-orientacao-a-objetos/33066)

----

## Sobreposição

A subclasse é livre para definir novas funções para essas operações, isso é chamado de
sobreposição.

Note:
* A subclasse pode seletivamente quais funções sobrepõe.
* Todas as funções que não são substituídas são herdadas.

----


## Exemplo de Sobreposição

<img src="img/sobreposicao.jpg" width="500">

[Fonte: Devmedia](http://www.devmedia.com.br/sobrecarga-e-sobreposicao-de-metodos-em-orientacao-a-objetos/33066)



----

## Parâmetro

Uma operação é chamada de método e recebe parâmetros para executar a sequência
de ações.

```
  Carro.setVelocidade(velocidadeAtual);

  #O Parâmetro do método será a velocidade atual.

```

----

## Sobrecarga

Uma sobrecarga de método consiste em manter vários métodos com o mesmo nome, mas
com número de parâmetros diferentes.

```
  Veiculo.setVelocidade(velocidadeAtual);
  Carro.setVelocidade(velocidadeAtual,marcha);
  Caminhao.setVelocidade(velocidadeAtual,marcha,quantidadeDeArReservatorio)


```

----

## Polimorfismo

É caracterizado quando duas ou mais classes distintas têm métodos de mesmo nome,
de forma que uma função possa utilizar um objeto de qualquer uma das classes
polimórficas, sem necessidade de tratar de forma diferenciada conforme a classe do objeto.

Note:
```
public abstract class OperacaoMatematica {
    public abstract double calcular(double x, double y);
}
public class Soma extends OperacaoMatematica {
    public double calcular(double x, double y) {
      return x + y; }
}
public class Subtracao extends OperacaoMatematica {
    public double calcular(double x, double y) {
        return x - y; }
}


```

----

## Encapsulamento

Significa juntar o programa em partes, o mais isoladas possível.
A ideia é tornar o software mais flexível, fácil de modificar e de criar novas implementações.

----

## Mensagens e Chamadas de Método

Um objeto conversa com outro através de mensagens. Estas mensagens são as chamadas de métodos.


----

## Interface

Uma interface consiste em uma coleção de assinaturas de métodos. Uma classe que implementa
uma interface deverá implementar todos os seus métodos.



----  ----

# 2. Introdução à Linguagem

A linguagem utilizada para esta disciplina será Java.

----

## Princípio do Java

> write once run anywhere

![](img/wora.png)

----

## Instalação JRE

[Windows](https://www.java.com/en/download/help/download_options.xml#windows)

[Mac](https://www.java.com/en/download/help/download_options.xml#mac)

[Linux](https://www.java.com/en/download/help/download_options.xml#linux)

[Solaris](https://www.java.com/en/download/help/download_options.xml#solaris)

----

## Instalação JDK

  [Win, Mac, Unix, etc](http://www.oracle.com/technetwork/pt/java/javase/downloads/jdk8-downloads-2133151.html)

----

## JDK vs JRE

O próprio nome já da uma dica:
- JDK (Java Development Kit)
- JRE (Java Runtime Environment)

[Devmedia](http://www.devmedia.com.br/instalacao-e-configuracao-do-pacote-java-jdk/23749)

Note:
A Linguagem Java é distribuída em dois grandes pacotes. O primeiro pacote, chamado JRE (Java Runtime Environment), é responsável por permitir que aplicações escritas em Java sejam executadas e deve ser instalado em computadores que não serão utilizados para desenvolvimento de softwares Java.

O segundo pacote, chamado JDK (Java Development Kit), é o pacote que contem toda a infraestrutura necessária para o desenvolvimento de aplicações Java. Ao ser instalado, o JRE é instalado automaticamente.

----

## Bibliotecas

O Java permite que você crie bibliotecas para a linguagem, ajudando assim no reuso de tecnologia.

> As bibliotecas são conhecidas como Java APIs (Application Programming Interfaces)

----

## Ambientes de Programação

* [Eclipse](www.eclipse.org)
* [NetBeans](www.netbeans.org)
* [IntelliJ IDEA](www.jetbrains.com)

> Para esta disciplina utilizaremos o Eclipse.

----

## Fases de um Programa (1)

1. Criar o código fonte (Editor)

```
public class OlaUnipac {

    public static void main(String[] args) {
        System.out.println("OlaUnipac");
    }

}
```

----

## Fases de um Programa (2)

2. Compilando o programa em Bytecodes

```
  javac OlaUnipac.java
```

----

## Fases de um Programa (3)

3. Executando o software (Invocação da JVM)


```
  java OlaUnipac

```

----

## Fases de um Programa (4,5)

4. Adiciona o arquivo '.class' na memória primária
5. Verifica se o bytecode esta correto

Note:
À medida que as classes são carregadas, o verificador bytecode examina seus bytecodes
para certifique-se de que eles são válidos e não violam as restrições de segurança do Java.

----

## Fases de um Programa (6)

6. Execução do Programa

Note:
As JVM de hoje geralmente executam bytecodes usando uma combinação de interpretação
e a chamada compilação JIT (just-in-time). Nesse processo, a JVM analisa os bytecodes
à medida que são interpretados. Assim, um compilador Just-in-time (JIT), como o compilador
Java HotSpotTM da Oracle, traduz os bytecodes no idioma da máquina do computador subjacente.
Quando a JVM encontra partes já compiladas, será mais rápido executar tal código.
Assim, os programas Java passam por duas fases de compilação, uma em que o código-fonte
é traduzido em bytecodes (para portabilidade em JVMs em diferentes plataformas de computador)
e um segundo, no qual, durante a execução, os bytecodes são traduzidos para o idioma da máquina
que executa o programa.

----

## Comentário

No Java existem dois tipos de comentário:

```
public class OlaUnipac {
    // Comentário em Linha
    public static void main(String[] args) {
        /*
        Comentário em bloco
        */
        System.out.println("OlaUnipac");
    }

}

```



----  ----

# 3. Classes
