// 1016 - Distância
import java.io.IOException;
import java.util.Scanner;

class bee1016 {

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);

        int distancia, tempoMin;
        distancia = scan.nextInt();
        tempoMin = distancia*2;

        System.out.println(tempoMin + " minutos");

        scan.close();
    }
}