import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner scan = new Scanner(System.in);
        
        int n = scan.nextInt();
        scan.nextLine();
        
        for(int i = 0; i < n; i++) {
            String text = scan.nextLine();
            int result;
            
            if(text.charAt(0) == text.charAt(2)) result = (text.charAt(2) - 48) * (text.charAt(0) - 48);
            
            else if(text.charAt(1) >= 65 && text.charAt(1) <= 90) result = (text.charAt(2) - 48) - (text.charAt(0) - 48);
            
            else result = (text.charAt(2) - 48) + (text.charAt(0) - 48);
            
            System.out.println(result);
        }
        
        //  text.charAt() = posição na tabela ascii
        //  número 0 = 48 na tabela ascii;      1 = 49, 2 = 50, ...
        //  por isso se subtrai 48 do charAt() para ter o valor real do número
        
        scan.close(); 
    }
 
}