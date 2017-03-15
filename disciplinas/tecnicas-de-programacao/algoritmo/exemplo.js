var alg = new Algoritmo();

var soma = 0;
var i = 1;
var num = 0;

for (i = 1 ; i < 5 ; i ++){
      num = alg.ler('Digite um número');
      soma = alg.soma(soma, num);
}

alg.escrever(soma);
