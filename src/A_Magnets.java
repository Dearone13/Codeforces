
/**
    █▀▄ █▀▀ ▄▀█ █▀█ █▀█ █▄░█ █▀▀
    █▄▀ ██▄ █▀█ █▀▄ █▄█ █░▀█ ██▄
    created: 29/06/23 17:20:09
**/
import java.util.Scanner;
import java.util.Arrays;
import static java.lang.Math.*;

public class A_Magnets {
    static final boolean DEBUG = false;

    public static void main(String[] args) {
        readInput();
    }

    public static void solve(String[] iman, int n) {
        int cont = 1;
        for (int i = 0; i < n-1; i++) {
            if(!(iman[i].equals(iman[i+1]))){
                cont++;
            }
        }
        System.out.println(cont);
    }

    public static void readInput() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String iman[] = new String[(int) n];
        for (int i = 0; i < n; i++) {
            iman[i] = sc.next();
        }
        // System.out.println(Arrays.toString(iman));
        solve(iman, n);
        sc.close();
        System.out.close();
    }
}