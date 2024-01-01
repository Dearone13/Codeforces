
/**
    █▀▄ █▀▀ ▄▀█ █▀█ █▀█ █▄░█ █▀▀
    █▄▀ ██▄ █▀█ █▀▄ █▄█ █░▀█ ██▄
    created: 15/06/23 11:35:07
**/
import java.util.Scanner;
import java.util.Arrays;
import static java.lang.Math.*;

public class A_Maximum_GCD {
    static final boolean DEBUG = false;

    public static void main(String[] args) {
        readInput();
    }

    public static void solve(int n) {
        int ans = n/2;
        System.out.println(ans);
    }

    public static void readInput() {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();

            if (n == 2) {
                System.out.println(1);
            } else {
                solve(n);

            }
        }
        sc.close();
        System.out.close();
    }
}