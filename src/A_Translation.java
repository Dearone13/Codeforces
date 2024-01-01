/**
 *   author:  Dearone
 *   created: 08/06/23 09:53:57
**/
import java.util.Scanner;

public class A_Translation {
    private static Scanner sc = new Scanner(System.in);
    private static final boolean DEBUG = false;

    public static void main(String[] args) {
        char s[] = sc.next().toCharArray();
        char t[] = sc.next().toCharArray();
        int n = s.length;
        for (int i = n-1, j = 0; i > 0; i--) {
            if (s[i] != t[j]){
                System.out.print("NO");
                break;
            } 
            
        }
        sc.close(); System.out.close();
    }
}