// 1020 - Idade em dias
import java.io.IOException;
import java.util.Scanner;

public class bee1020 {
 
    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        
        int a, m, d;
        d = scan.nextInt();
        
        a = d/365;
        d -= a*365;
        
        m = d/30;
        d -= m*30;
        
        System.out.println(a + " ano(s)\n" + m + " mes(es)\n" + d + " dia(s)");
        
        scan.close();
    }
 
}