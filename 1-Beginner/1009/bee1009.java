// 1009 - Salário com Bônus
import java.io.IOException;
import java.util.Scanner;

class bee1009 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        String nome = scan.nextLine();
        double salario = scan.nextDouble(), vendas = scan.nextDouble();

        System.out.printf("TOTAL = R$ %.2f\n", salario + vendas*0.15);

        scan.close();
    }
}