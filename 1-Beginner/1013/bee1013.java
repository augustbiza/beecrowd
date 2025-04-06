// 1013 - O Maior
import java.io.IOException;
import java.util.Scanner;

class bee1013 {

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);

        int a, b, c, maior;
        a = scan.nextInt();
        b = scan.nextInt();
        c = scan.nextInt();

        maior = (a+b + Math.abs(a-b))/2;
        maior = (maior+c + Math.abs(maior-c))/2;

        System.out.println(maior + " eh o maior");

        scan.close();
    }
}