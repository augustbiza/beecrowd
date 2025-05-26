// 1047 - Tempo de Jogo com Minutos
import java.io.IOException;
import java.util.Scanner; 

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        
        int[] input = new int[4];
        for(int i = 0; i < 4; i++) input[i] = scan.nextInt();

        int minIn = input[0] * 60 + input[1], minFim = input[2] * 60 + input[3];
        int h = 0, m = 0;
        
        if(minFim > minIn) {
            h = (minFim - minIn)/60;
            m = (minFim - minIn) - 60*h;
        }
        else if(minFim < minIn) {
            h = (1440 - minIn + minFim)/60;
            m = (1440 - minIn + minFim) - 60*h;
        }
        else {
            h = 24; m = 0;
        }
        
        System.out.println("O JOGO DUROU " + h + " HORA(S) E " + m + " MINUTO(S)");
        
        scan.close();
    }
 
}