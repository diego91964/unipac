


public class AreaDoCirculo{

  public void resolver (){
    Double diametroCirculo, raioMaior, ac1, ac2, ac3, ac4 ,ac5, ac6, areaTotal, valorTotal;
    Scanner sc1 = new Scanner(System.in);
    System.out.println("Digite o valor do diametro do circulo em cm:");
    diametroCirculo = sc1.nextDouble();
    raioMaior = diametroCirculo / 2.00;
    System.out.println("Raio Maior = " + raioMaior);
    
    ac1 = 3.14*((raioMaior)*(raioMaior));
    ac2 = 3.14*((raioMaior-1.00)*(raioMaior-1.00));
    ac3 = 3.14*((raioMaior-2.00)*(raioMaior-2.00));
    ac4 = 3.14*((raioMaior-3.00)*(raioMaior-3.00));
    ac5 = 3.14*((raioMaior-4.00)*(raioMaior-4.00));
    ac6 = 3.14*((raioMaior-5.00)*(raioMaior-5.00));

    System.out.println("AC1 = " + ac1);
    System.out.println("AC2 = " + ac2);
    System.out.println("AC3 = " + ac3);
    System.out.println("AC4 = " + ac4);
    System.out.println("AC5 = " + ac5);
    System.out.println("AC6 = " + ac6);

    areaTotal = ac1 + ac2 + ac3 + ac4 + ac5 + ac6;

    System.out.println("Area total = " + areaTotal);

    valorTotal = areaTotal * 5000;
    System.out.println("Valor total em cm² = " + valorTotal);
  }
}
