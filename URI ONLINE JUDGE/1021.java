/*
PROBLEMA:
1021 - Billetes y Monedas
RESPUESTA:
Accepted
LENGUAJE:
Java 8 (OpenJDK 1.8.0) [+2s]
TIEMPO:
0.307s
TAMAÑO DE ARCHIVO:
1,03 KB
MEMORIA:
-
ENVIO:
14/5/21 21:10:54
 */

import java.math.BigDecimal;
import java.util.Scanner;

class Main{
  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);
    BigDecimal monto = sc.nextBigDecimal();
    sc.close();

    int[] billetes = { 100, 50, 20, 10, 5, 2 };

    BigDecimal[] coins = {
        BigDecimal.ONE,
        new BigDecimal("0.50"),
        new BigDecimal("0.25"),
        new BigDecimal("0.10"),
        new BigDecimal("0.05"),
        new BigDecimal("0.01") };

    System.out.println("NOTAS:");

    for (int n : billetes) {
      BigDecimal[] total = monto.divideAndRemainder(new BigDecimal(n));
      System.out.printf("%d nota(s) de R$ %d.00\n", total[0].intValue(), n);
      monto = total[1];
    }

    System.out.println("MOEDAS:");

    for (BigDecimal n : coins) {
      BigDecimal[] total = monto.divideAndRemainder(n);
      System.out.printf("%d moeda(s) de R$ %.2f\n", total[0].intValue(), n);
      monto = total[1];
    }
  }
}

