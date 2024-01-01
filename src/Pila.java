
/**
 *   author:  Dearone
 *   created: 21/06/23 10:55:46
**/
import java.util.Arrays;
import java.util.Scanner;
import java.util.Stack;

import javax.net.ssl.SSLContext;

public class Pila {
    private static Scanner sc = new Scanner(System.in);
    private static final boolean DEBUG = false;     
    private static Stack pila = new Stack<>();
    private static int[] arr = { 9, 10, 11, 12, 13, 14 };

    public static void main(String[] args) {
        for (int i = 5; i >= 1; i--) {
            pila.push(i);
        }
        pila.sort(null);
        for (int i = 0; i < 5 ; i++) {
            System.out.println("Valor "+Pila);
        }
        
        System.out.println(pila.toString());
        sc.close();
        System.out.close();
    }
}
