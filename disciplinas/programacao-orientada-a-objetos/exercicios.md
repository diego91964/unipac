1 - Desenvolva um programa em java que leia o nome e a idade de 3 pessoas e mostre o nome da pessoa mais velha e o nome da pessoa mais nova. Para isto, crie uma classe pessoa.


2 - Utilize seu conhecimento em orientação a objetos para desenvolver um programa que simule um banco.

* Uma pessoa pode:
  - Ter até três contas (uma de cada tipo).
  - Uma pessoa tem um nome;
  - Uma pessoa tem um cpf;
* Uma conta possui algumas características:
  - Identificador.
  - Saldo.
* Uma conta possui duas ações básicas:
  - Verificar saldo;
  - Fazer depósito;
  - Fazer saque;
* Uma conta pode ser de três tipos :
  - Conta corrente;
  - Conta poupança;
  - Conta salário;
* Conta corrente:
  - Não tem rendimento;
  - Tem custo mensal;
* Conta poupança:
  - Tem rendimento;
  - Não tem custo mensal;
* Conta salário:
  - Permite apenas um saque;
* Um banco tem algumas ações:
  - Sacar o dinheiro de uma conta;
  - Depositar dinheiro em uma conta;
  - Realizar transferência entre contas;

3 - Desenvolva uma classe que represente uma calculadora com as seguintes funções estáticas:

* Soma;
* Divisão;
* Multiplicação;
* Resto da divisão;
* Transformação de decimal para binário;
* Transformação de binário para decimal;
* Porcentagem;
* Potenciação;

4 - Faça o seguinte cenário:
* Crie a classe Pedido, considerando que esta possui:
  * Construtor
    - Deve ter um construtor, cujos parâmetros são: Código do Pedido, Cliente e Descrição.
  * Atributos
    - Código de Pedido
    - Cliente
    - Descrição do Pedido
  * Métodos
    - Modifica Cliente
    - Modifica a descrição do pedido
    - Retorna a descrição do pedido
    - Retorna o nome do cliente.
* Crie uma classe Cliente, considerando que esta deva possuir :
  * Construtor
    - O Constutor da classe deve possuir como parâmetro somente o código do Cliente
  * Atributos
    - Código do Cliente
    - Nome Completo		
  * Métodos
    - Inserção do nome do cliente
    - Retorna do nome do cliente
    - Retorna Código do Cliente
*  Crie um programa que instancie dois objetos Cliente (c1,c2), atribua o valor ao atributo Nome do Cliente. Antes e após a atribuição, imprima o Nome do Cliente utilizando a função de retorno. Após isso instancie dois objetos do tipo Pedido (p1 e p2) e atribua um cliente para cada pedido, depois troque os clientes (c1 para p2 e c2 para p1). Imprima os resultados.

5 - Crie um programa que implemente agregação. Para isto, suponha que você foi contratado por um fabricante de carros. Crie as seguintes classes, com os métodos  e atributos necessários:

  * Pneus:
    - preço;
    - tipo;
    - fabricante;
  * Motor:
    - potência;
    - preço;
    - fabricante;
  * Bancos
    - preço;
    - modelo;
    - fabricante;
  * Carro (que  é a agregação das classes Pneus, Motor e Bancos)
  * Instancie duas classe carro, para isto, instancie e atribua os pneus, o motor e os bancos.

6 -  Crie uma classe chamada Pessoa. Uma pessoa possui um nome e uma idade.

  * Crie 2 construtores: 1 que recebe o nome e a idade como parâmetros de entrada e um que não recebe parâmetros e inicializa os atributos com um valor padrão ("sem nome" para Strings e 0 para inteiros).
  * Crie os métodos de acesso para os atributos (GET e SET).

7 - Utilize seus conceitos de classe abstrata e polimorfismo para modificar a questão dois.

8 - Você trabalha em uma fabrica de software e uma faculdade da região pediu para você criar um sistema de gerenciamento da instituição. O sistema, inicialmente, deve suportar os seguintes usuários:
  * Pessoa que pode ser:
    * Funcionário, que também pode ser:
      - Técnico adminstrativo;
      - Professor;
    * Estudante.
  * Uma pessoa possui os atributos:
    - Nome;
    - Nome Social;
    - CPF;
    - E-mail;
  * Um Funcionário (que é uma pessoa) possui os seguintes atributos:
    - Número carteira de trabalho;
    - Número da chapa;
  * Um Estudante (que é uma pessoa) possui os suintes atributos:
    - Matrícula;
  * Criar uma classe Turma, que é uma agregação de Estudantes;
  * Uma turma possui:
    - Dia da semana das aulas;
    - Horário das aulas;
    - Agregação de alunos;
    - Agregação de docentes;
   * Criar uma classe Administracao que tem as seguintes ações:
    - Retirar estudante de uma turma;
    - Adicionar estudante à turma;
    - Retirar docente de uma turma;
    - Adicionar docente à turma;
    - Criar uma nova turma;
   * Criar uma classe Principal e um cenário de teste para esta instituição.
