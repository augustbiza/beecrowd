import java.io.IOException;
import java.util.Scanner;

class Main {

    public static void main(String []args) {
        Scanner scan = new Scanner(System.in);

        int goalsInter, goalsGre, x = 1, grenais = 0, vicInter = 0, vicGre = 0, draws = 0;

        while(x == 1) {

            goalsInter = scan.nextInt();
            goalsGre = scan.nextInt();
                if(goalsInter < goalsGre) vicGre++;
                else if(goalsInter > goalsGre) vicInter++;
                else draws++;
            grenais++;

            do {

                System.out.println("Novo grenal (1-sim 2-nao)");
                x = scan.nextInt();

            }while(x != 1 && x != 2);

        }

        System.out.println(grenais + " grenais");
        System.out.println("Inter:"+vicInter);
        System.out.println("Gremio:"+vicGre);
        System.out.println("Empates:"+draws);
        if(vicGre > vicInter) System.out.println("Gremio venceu mais");
        else System.out.println("Inter venceu mais");

        scan.close();
    }
}