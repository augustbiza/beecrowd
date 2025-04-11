// 1015 - Distância Entre Dois Pontos
import java.io.IOException;
import java.util.Scanner;

class bee1015 {

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);

        double x1, y1, x2, y2;
        x1 = scan.nextDouble();
        y1 = scan.nextDouble();
        x2 = scan.nextDouble();
        y2 = scan.nextDouble();

        double distancia = Math.sqrt((Math.pow((x2-x1), 2)) + Math.pow((y2-y1), 2));

        System.out.printf("%.4f\n", distancia);

        scan.close();
    }
}