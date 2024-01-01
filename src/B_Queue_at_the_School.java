
/**
 *   author:  Dearone
 *   created: 08/06/23 10:11:52
**/
import java.util.Scanner;
import java.util.Arrays;

public class B_Queue_at_the_School {
    private static Scanner sc = new Scanner(System.in);
    private static final boolean DEBUG = false;
    public static void main(String[] args) {
        int n = sc.nextInt();
        int t = sc.nextInt();
        String s[] = sc.next().split("");
        String w[] = s.clone();
        for (int i = 0; i < t; i++) {
            w = s.clone();
            for (int j = 0; j < n-1; j++) {
                if (w[j].equals("B") && w[j + 1].equals("G") ) {
                    String aux = s[j];
                    s[j] = s[j + 1];
                    s[j + 1] = aux;
                }
            }
        }
        for (String i : s) {
            System.out.print(i);
        }
        sc.close();
        System.out.close();
    }
}