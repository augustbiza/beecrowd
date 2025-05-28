// 1061 - Tempo de um Evento
import java.io.IOException;
import java.util.Scanner; 

public class bee1061 {
 
    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        
        String[] dia1 = scan.nextLine().split(" ");
        String[] hora1 = scan.nextLine().split(" ");
        String[] dia2 = scan.nextLine().split(" ");
        String[] hora2 = scan.nextLine().split(" ");
        
        int inicioH = Integer.parseInt(hora1[0])*3600 + Integer.parseInt(hora1[2])*60 + Integer.parseInt(hora1[4]);
        int fimH = Integer.parseInt(hora2[0])*3600 + Integer.parseInt(hora2[2])*60 + Integer.parseInt(hora2[4]);
    
        int inicioD = Integer.parseInt(dia1[1]);
        int fimD = Integer.parseInt(dia2[1]);
        
        int d, h, m, s;
        if(inicioH < fimH) {
            d = fimD - inicioD;
            s = fimH - inicioH;
            h = s/3600;   s -= h*3600;
            m = s/60;     s -= m*60;
        }
        else if(inicioH > fimH) {
            d = fimD - inicioD - 1;
            s = 86400 - inicioH + fimH;
            h = s/3600;   s -= h*3600; 
            m = s/60;     s -= m*60;
        }
        else {
            d = fimD - inicioD;
            h = 0; m = 0; s = 0;
        }

        System.out.println(d + " dia(s)\n" + h + " hora(s)\n" + m + " minuto(s)\n" + s + " segundo(s)");
    
        scan.close();
    }
 
}