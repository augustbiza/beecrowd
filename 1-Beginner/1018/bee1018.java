// 1018 - Cédulas
// 100 - 50 - 20 - 10 - 5 - 2 - 1
import java.io.IOException;
import java.util.Scanner;

class bee1018 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();

        System.out.println(n);

        int notas = n/100;
        System.out.println(notas + " nota(s) de R$ 100,00"); 
        n -= notas*100;

        notas = n/50;
        System.out.println(notas + " nota(s) de R$ 50,00"); 
        n -= notas*50;

        notas = n/20;
        System.out.println(notas + " nota(s) de R$ 20,00"); 
        n -= notas*20;

        notas = n/10;
        System.out.println(notas + " nota(s) de R$ 10,00"); 
        n -= notas*10;

        notas = n/5;
        System.out.println(notas + " nota(s) de R$ 5,00"); 
        n -= notas*5;

        notas = n/2;
        System.out.println(notas + " nota(s) de R$ 2,00"); 
        n -= notas*2;

        notas = n;
        System.out.println(notas + " nota(s) de R$ 1,00");

        scan.close();
    }
}