// 1010 - Cálculo Simples
import java.io.IOException;
import java.util.Scanner;

class bee1010 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int codigo, qt;
        double valorUni, total = 0;

        for(int i = 0; i < 2; i++) {
            codigo = scan.nextInt();
            qt = scan.nextInt();
            valorUni = scan.nextDouble();

            total += qt*valorUni;
        }
            System.out.printf("VALOR A PAGAR: R$ %.2f\n", (total));

        scan.close();
    }
}