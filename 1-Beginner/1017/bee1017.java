// 1017 - Gasto de Combustível
import java.io.IOException;
import java.util.Scanner;

class bee1017 {

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);

        //12km/L
        int horas, vel;
        horas = scan.nextInt(); vel = scan.nextInt();

        int distancia = vel*horas;

        double litros = (double)distancia/12;

        System.out.printf("%.3f\n", litros);

        scan.close();
    }
}