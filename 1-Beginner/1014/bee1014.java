// 1014 - Consumo
import java.io.IOException;
import java.util.Scanner;

class bee1014 {

    public static void main(String[] args) throws IOException{
        Scanner scan = new Scanner(System.in);

        int distancia = scan.nextInt();
        double combustivel = scan.nextDouble();

        System.out.printf("%.3f km/l\n", distancia/combustivel);

        scan.close();
    }
}