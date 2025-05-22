// 1019 - Time Conversion

import java.io.IOException;
import java.util.Scanner;

public class bee1019 {
 
    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
 
        int h, m, s;
        
        s = scan.nextInt();
        
        h = s/3600;
        s -= h*3600;
        
        m = s/60;
        s -= m*60;
        
        System.out.println(h + ":" + m + ":" + s);
        
        scan.close();
    }
 
}