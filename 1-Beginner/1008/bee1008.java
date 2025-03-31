// 1008 - Salário
import java.io.IOException;
import java.util.Scanner;

class bee1008 {

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);

        int num, qtHoras;
        double valorHora;

        num = scan.nextInt();
        qtHoras = scan.nextInt();

        valorHora = scan.nextDouble();

        System.out.println("NUMBER = " + num);
        System.out.printf("SALARY = U$ %.2f\n", valorHora*qtHoras);

        scan.close();
    }
}