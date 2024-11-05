import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        
        int n = scan.nextInt();
        
        while(n > 0) {
            
            int x = scan.nextInt(), y = scan.nextInt(), sum = 0, c = 0;
            
            while(c < y) {
                
                if(x % 2 != 0) {
                    sum += x;
                    c++;
                }
                
                x++;
            }

            System.out.println(sum);
            
            n--;
        }
        
        
        scan.close();
    }
 
}