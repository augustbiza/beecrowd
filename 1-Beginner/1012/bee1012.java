// 1012 - Área
import java.io.IOException;
import java.util.Scanner;

class bee1012 {

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);

        double a, b, c;
        a = scan.nextDouble();
        b = scan.nextDouble();
        c = scan.nextDouble();

        System.out.printf("TRIANGULO: %.3f\n", (a*c)/2);
        System.out.printf("CIRCULO: %.3f\n", 3.14159 * Math.pow(c, 2));
        System.out.printf("TRAPEZIO: %.3f\n", (a+b)*c/2);
        System.out.printf("QUADRADO: %.3f\n", Math.pow(b, 2));
        System.out.printf("RETANGULO: %.3f\n", a*b);

        scan.close();
    }
}