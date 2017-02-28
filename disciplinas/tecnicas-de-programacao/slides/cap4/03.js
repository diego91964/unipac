function calcularAreaCirculo () {

    var diametroCirculo;
    var raioMaior;
    var ac1 , ac2, ac3, ac4, ac5, ac6;
    var somaAreas;
    var valorTotal;

    var diametroCirculo = prompt('Entre com o diâmetro do circulo em cm','Diametro');

    raioMaior = diametroCirculo / 2.0;

    ac1 = 3,14 * ((raioMaior)*(raioMaior));
    ac2 = 3,14 * ((raioMaior-1)*(raioMaior-1));
    ac3 = 3,14 * ((raioMaior-2)*(raioMaior-2));
    ac4 = 3,14 * ((raioMaior-3)*(raioMaior-3));
    ac5 = 3,14 * ((raioMaior-4)*(raioMaior-4));
    ac6 = 3,14 * ((raioMaior-5)*(raioMaior-5));

    somaAreas = ac1 + ac2 + ac3 + ac4 + ac5 + ac6;

    valorTotal = somaAreas * 5000;

    alert ("Total de papelão a ser comprados em cm²: " + valorTotal);

}
