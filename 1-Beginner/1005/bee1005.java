// 1005 - Média 1
import java.io.IOException;
import java.util.Scanner;

class bee1005 {

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);

        double a, b, media;
        a = scan.nextDouble();
        b = scan.nextDouble();

        media = ((a*3.5) + (b*7.5))/11;

        System.out.printf("MEDIA = %.5f\n", media);

        scan.close();
    }
}