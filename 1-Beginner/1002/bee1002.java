// 1002 - Área do Círculo
import java.io.IOException;
import java.util.Scanner;

class bee1002 {

    public static void main(String[] args) throws IOException{
        Scanner scan = new Scanner(System.in);

        double raio, areaCirculo;
        raio = scan.nextDouble();

        areaCirculo = 3.14159 * Math.pow(raio, 2);

        System.out.printf("A=%.4f\n", areaCirculo);

        scan.close();
    }
}