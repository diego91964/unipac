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
[Material Complementar](https://www.youtube.com/watch?v=sTX0UEplF54)

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

[Material Complementar](https://youtu.be/aR7CKNFECx0)

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

[Material Complementar](https://www.youtube.com/watch?v=yWU5bm_pZzY)

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

package br.unipac

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

[Material Complementar](https://www.youtube.com/watch?v=v_ZCtgwbS3o)
[Material Complementar](https://www.youtube.com/watch?v=ijXXaIYsVx4)

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

## Função Main

A primeira função a ser executada em um programa escrito em Java será a função Main.

```
    public static void main(String[] args)
```

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

----

## Métodos

Um objeto pode executar as ações, essas ações possíveis são definidas em seus métodos.

```
public class Unipac {

    String nome;
    String endereco;

    public String retornaNome () {
      return nome;
    }

    public String retornaEndereco () {
      return endereco;
    }
}

```

----

## Declaração de Variáveis

As variáveis no java podem ser locais, ou seja, são declaradas no bloco em que são usadas.
Ou ainda, variáveis de instância, que são declaradas nas classes do bloco.

----

## Declaração de Variáveis - Locais

```
public class Calculadora {

    public int somaDois (int numero) {
      int dois = 2;
      int soma = dois + numero;
      return soma;
    } // Isto é apenas um exemplo

}

```

----

## Declaração de Variáveis - Instância

```
public class Calculadora {
    int dois = 2;

    public int somaDois (int numero) {

      int soma = dois + numero;
      return soma;
    }

    public int diminuiDois (int numero) {

      int soma =  numero - dois;
      return soma;
    }
}

```

----


## Tipos

Java é uma linguagem fortemente tipada, sendo assim, é necessário informar o
tipo de uma variável em sua declaração, e o mesmo nunca poderá ser alterado.

[Material Complementar](https://www.youtube.com/watch?v=JEAQeT7YGs4)
----


## Tipos primitivos

Os tipos primitivos em Java são aqueles que guardam o valor real das variáveis.
São tipos primitivos em JAVA: byte, short, int, long, float, double, char.


[Fonte](https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html)

Note:
Um inteiro literal é de tipo longo se termina com a letra L ou l; Caso contrário, é do tipo int.
// O número 26, em decimal
Int decVal = 26;
// O número 26, em hexadecimal
Int hexVal = 0x1a;
// O número 26, em binário
Int binVal = 0b11010;
double d1 = 123.4;
// Mesmo valor utilizando ponto flutuante ou notação científica
double d2 = 1.234e2;
float f1  = 123.4f;

----  ----

# 3. Exercício prático (ex1)

A forma mais simples de aprender a utilizar classes é criando cenários da vida real.

----

## Classe de um Computador

Crie um cenário pensando no computador:
* Liste 10 propriedades
* Liste 2 componentes Internos
* Liste 2 ações para o computador
* Liste 1 ações para cada componente

----

## Exercício

Tente passar tudo que foi criado para a linguagem Java.

----  ----

# 4. Entrada e Saída

A linguagem Java possui diversos tipos de entrada e saída de dados, os principais
são pela entrada padrão e por argumentos.

----

## Saída de dados

A saída de dados padrão do Java é o terminal. Para utilizá-la é necessário utilzar
o seguinte código:

```
 System.out.println("OlaUnipac");
 ou
 System.out.printf("A soma é %d%n", soma);
```

----

## Caracteres especiais

* \n Nova linha
* \t Tab na horizontal
* \r Retorna o cursor
* \\\\ Barra
* \" Aspas

----

## Entrada de dados - Scanner

A classe Scanner realiza a leitura de dados da entrada padrão (teclado).

```
import java.util.Scanner;

public class Somador {
  public static void main(String[] args){

    Scanner input = new Scanner(System.in);
    int numero1;
    int numero2;
    int soma;

    System.out.print("Digite o número 1 ");
    numero1 = input.nextInt();
    System.out.print("Digite o número 2 ");
    numero2 = input.nextInt();
    soma = numero1 + numero2;
    System.out.printf("A soma é %d%n", soma);
  }
}
```

----

## Entrada de dados - Args

O args que está no método main é utilizado para a entrada de dados:

```
public class Echo {
    public static void main (String[] args) {
        for (String s: args) {
            System.out.println(s);
        }
    }
}
```

```
javac Echo.java
```

```
java Echo Drink Hot Java

```

```
java Echo "Drink Hot Java"

```

----  ----

# 5. Métodos

Os métodos são conhecidos como funções, ações de execuções ou procedimentos, sendo responsáveis por ajudar no design do sistema (separação por blocos), e na reutilização de software, podendo ser aproveitados métodos já existentes para a construção de novos sistemas [DevMedia](http://www.devmedia.com.br/trabalhando-com-metodos-em-java/25917).

Note:

[Material Complementar](https://youtu.be/wNaoX6VOj54)

----

## Estrutura  

<img src="img/metodos.jpg" width="500">


----


## Nomenclatura

A primeira letra deve ser minúscula, e então as regras Camel Case normais devem ser usadas. Além disso, os nomes normalmente devem ser pares de verbos e substantivos.

----

## Local de criação

Os métodos devem ser criados dentro da classe.

----

## Sobrecarga

Em uma mesma classe pode haver vários métodos com o mesmo nome, contanto que possuam listas de argumentos distintas. Os argumentos podem variar em número, tipo e ordem de declaração.

----

## Exemplo de Sobrecarga

```

class MetodoSobrecarregado{

	public void testaMetodosSobrecarregados()
	{
		System.out.printf("Salário em número inteiro = %d\n", salario(700));
		System.out.printf("Salário em número double = %f\n", salario(7.500));
	}

	public int salario(int valorInt)
	{
		System.out.printf("\n Salário com argumento de inteiro = %d\n", valorInt);
		return valorInt * valorInt;
	}

	public double salario( double valorDouble)
	{
		System.out.printf("\n Salário chamado com argumento de double = %f\n", valorDouble);
		return valorDouble * valorDouble;
	}
}

public class Test_Metodos_Sobrecarregados {

	public static void main(String[] args) {

		MetodoSobrecarregado testaM = new MetodoSobrecarregado();
		testaM.testaMetodosSobrecarregados();
	}
}
```

----

## Retorno de um método

No Java um método deve informar o tipo de dados que retorna, ou informar que não retorna nada.

----

## Método sem retorno


```

class Metodo2{
	public void escrever()
	{
		System.out.println("Método sem Retorno - VOID ");
	}
}

public class Metodos_Sem_Retorno {

	public static void main(String[] args) {

		Metodo2 m = new Metodo2();
		m.escrever();
	}
}

```

----

## Método com retorno


```
class Metodo3{

	String nome = "João Silva";

	public String retornaNome()
	{
		return nome;
	}
}

public class Metodo_Com_Retorno {

	public static void main(String[] args) {

		Metodo3 m3 = new Metodo3();
		System.out.println(m3.retornaNome());

	}

}


```

----

## Método Static

Os métodos static ou métodos da classe são funções que não dependem de nenhuma
variável de instância, quando invocados executam uma função sem a dependência do
conteúdo de um objeto ou a execução da instância de uma classe, conseguindo
chamar direto qualquer método da classe e também manipulando alguns campos da classe.

----

## Exemplo de Método Static

```
class Soma{

	public static int resultado(int num1, int num2){
		return (num1 + num2);
	}
}

public class TestaSomaEstatica {

	public static void main(String[] args) {

		System.out.println(Soma.resultado(10,50));
	}
}

```

----  ----

# Modificadores de Acesso

Os modificadores de acesso são padrões de visibilidade de acessos às classes,
atributos e métodos. Esses modificadores são palavras-chave reservadas pelo Java,
ou seja, palavras reservadas não podem ser usadas como nome de métodos, classes ou atributos.
( public , protected , private, default )

----

## Modificador Default

Uma classe com acesso padrão não possui modificador declarado. Isto permite que você tenha
acesso ao nível de pacote, ou seja, uma classe com acesso padrão pode ser vista somente pelas
classes dentro do mesmo pacote.

----

## Exemplo de Modificador default

```

package bebidas;
class Bebida { }

package br.unipac; // Erro
import bebidas.Bebida;
class Cha extends Bebida { }

package bebidas;
import bebidas.Bebida;
class Cerveja extends Bebida { }

```

----

## Modificador Public

Uma declaração com o modificador public dá á todas as classes de todos os pacotes acesso à  este recurso
(classe ou método). Mas, ainda é necessário utilizar o import



----

## Exemplo de Modificador public

```

package bebidas;
public class Bebida { }

package br.unipac;
import bebidas.Bebida;
class Cha extends Bebida { }

```

----


## Modificador Private

Uma declaração marcada como privada não podem ser acessadas por códigos em qualquer classe
diferente da Classe de origem. Este modificador pode ser aplicado a métodos e e atributos de classe

----

## Exemplo de Modificador private


```

package br.edu.unipac.exercicios.ex1;

public class Memoria {

	private String modelo;
	private Integer capacidadeEmGb;

	public String getModelo() {
		return modelo;
	}
	public void setModelo(String modelo) {
		this.modelo = modelo;
	}

}

```

----

## Modificador Protected


Os níveis de controle de acesso protected e default são semelhantes, mas com uma
diferença crítica. Um membro default só pode ser acessado se a classe que está acessando
pertence ao mesmo pacote, enquanto um membro protected pode ser acessado
por meio da herança) por uma subclasse, mesmo que a subclasse esteja em um pacote diferente.


----

## Exemplo de Modificador protected


```

package bebidas;
protected class Bebida { }

package br.unipac;
import bebidas.Bebida;
class Cha extends Bebida { }

package bebidas;
import bebidas.Bebida;
class Cerveja extends Bebida { }

```

----


# Exercício

Faça a
[lista de exercícios ](https://github.com/diego91964/unipac/blob/master/disciplinas/programacao-orientada-a-objetos/exercicios.md) para treinar seus conhecimentos.
