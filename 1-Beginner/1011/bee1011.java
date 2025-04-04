//1011 - Esfera
import java.io.IOException;
import java.util.Scanner;

class bee1011 {

    public static void main(String[] args) throws IOException{
        Scanner scan = new Scanner(System.in);

        double raio, volume;
        raio = scan.nextDouble();

        volume = Math.pow(raio, 3) * 3.14159 * ((double)4/3);

        System.out.printf("VOLUME = %.3f\n", volume);

        scan.close();
    }
}