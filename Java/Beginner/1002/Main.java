import java.util.Scanner;

class Main {

    public static void main(String args[]) {
    Scanner scan = new Scanner(System.in);

        double R = scan.nextDouble();
        double area = 3.14159 * R * R;

        System.out.printf("A=%.4f\n", area);

    scan.close();
    }
}