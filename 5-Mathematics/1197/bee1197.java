// 1197 - Volta à Faculdade de Física
import java.io.IOException;
import java.util.Scanner;

class bee1197 {

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);

        while(scan.hasNext()) {

            int v = scan.nextInt(); 
            int t = scan.nextInt();

            int s = 2*v*t;
            System.out.println(s);
        }

        scan.close();
    }
}