// 1007 - Diferença
import java.io.IOException;
import java.util.Scanner;

class bee1007 {

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);

        int a, b, c, d, diferenca;
            a = scan.nextInt();
            b = scan.nextInt();
            c = scan.nextInt();
            d = scan.nextInt();

        diferenca = (a*b - c*d);

        System.out.println("DIFERENCA = " + diferenca);

        scan.close();
    }
}