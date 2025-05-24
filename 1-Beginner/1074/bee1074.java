// 1074 - Par ou Ímpar
import java.io.IOException;
import java.util.Scanner;

class bee1074 {
    
    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        
        int n = scan.nextInt();
        for(; n > 0; n--) {
            int x = scan.nextInt();
            
            if(x > 0) {
                if(x % 2 == 0) System.out.println("EVEN POSITIVE");
                else System.out.println("ODD POSITIVE");
            }
            else if(x< 0) {
                if(x % 2 == 0) System.out.println("EVEN NEGATIVE");
                else System.out.println("ODD NEGATIVE");
            }
            else System.out.println("NULL");
        }
        
        scan.close();
    }
}