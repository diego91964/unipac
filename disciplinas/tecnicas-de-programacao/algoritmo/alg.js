var Algoritmo = function () {

}

Algoritmo.prototype.ler = function (mensagem) {
  return prompt(mensagem);
};

Algoritmo.prototype.escrever = function (mensagem , metodo){
  if (metodo == 'console'){
    console.log(mensagem);
  }else {
    alert(mensagem);
  }
};

Algoritmo.prototype.soma = function (a , b) {
  var op1 = Number(a);
  var op2 = Number(b);
  return op1 + op2;
};

Algoritmo.prototype.sub = function (a , b) {
  var op1 = Number(a);
  var op2 = Number(b);
  return op1 - op2;
};

Algoritmo.prototype.mult = function (a , b) {
  var op1 = Number(a);
  var op2 = Number(b);
  return op1 * op2;
};




Algoritmo.prototype.div = function (a , b) {
  var op1 = Number(a);
  var op2 = Number(b);
  return op1 / op2;
};
