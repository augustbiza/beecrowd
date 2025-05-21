// 1168 - LED
import java.io.IOException;
import java.util.Scanner;

class bee1168 {

    public static int qtLeds(char painel) {
        int qt = 0;

        switch(painel) {
            case '0': qt = 6; break;
            case '1': qt = 2; break;
            case '2': qt = 5; break;
            case '3': qt = 5; break;
            case '4': qt = 4; break;
            case '5': qt = 5; break;
            case '6': qt = 6; break;
            case '7': qt = 3; break;
            case '8': qt = 7; break;
            case '9': qt = 6; break;
        }

        return qt;
    }

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();
            scan.nextLine();    //para ler uma string após um int precisa de uma leitura vazia entre os dois

        for(; n > 0; n--) {

            String painel = scan.nextLine();

            int leds = 0;

            for(int i = 0; i < painel.length(); i++) {
                leds += qtLeds(painel.charAt(i));
            }

            System.out.println(leds + " leds");
        }

        scan.close();
    }
}