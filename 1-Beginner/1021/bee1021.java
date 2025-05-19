// 1021 - Notas e Moedas
// 100 - 50 - 20 - 10 - 5 - 2 - 1
// 1 - 0.5 - 0.25 - 0.10 - 0.05 - 0.01
import java.io.IOException;
import java.util.Scanner;

class bee1021 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        double n = scan.nextDouble();
        n *= 100;

    //notas
        System.out.println("NOTAS:");

        int notas = (int)n/10000;
        System.out.println(notas + " nota(s) de R$ 100.00"); 
        n -= notas*10000;

        notas = (int)n/5000;
        System.out.println(notas + " nota(s) de R$ 50.00"); 
        n -= notas*5000;

        notas = (int)n/2000;
        System.out.println(notas + " nota(s) de R$ 20.00"); 
        n -= notas*2000;

        notas = (int)n/1000;
        System.out.println(notas + " nota(s) de R$ 10.00"); 
        n -= notas*1000;

        notas = (int)n/500;
        System.out.println(notas + " nota(s) de R$ 5.00"); 
        n -= notas*500;

        notas = (int)n/200;
        System.out.println(notas + " nota(s) de R$ 2.00"); 
        n -= notas*200;

    //moedas
    System.out.println("MOEDAS:");

        int moedas = (int)n/100;
        System.out.println(moedas + " moeda(s) de R$ 1.00"); 
        n -= moedas*100;

        moedas = (int)n/50;
        System.out.println(moedas + " moeda(s) de R$ 0.50"); 
        n -= moedas*50;

        moedas = (int)n/25;
        System.out.println(moedas + " moeda(s) de R$ 0.25"); 
        n -= moedas*25;

        moedas = (int)n/10;
        System.out.println(moedas + " moeda(s) de R$ 0.10"); 
        n -= moedas*10;

        moedas = (int)n/5;
        System.out.println(moedas + " moeda(s) de R$ 0.05"); 
        n -= moedas*5;

        moedas = (int)n;
        System.out.println(moedas + " moeda(s) de R$ 0.01"); 

        scan.close();
    }
}
