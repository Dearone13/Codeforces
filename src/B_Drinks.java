
/**
    █▀▄ █▀▀ ▄▀█ █▀█ █▀█ █▄░█ █▀▀
    █▄▀ ██▄ █▀█ █▀▄ █▄█ █░▀█ ██▄
    created: 10/07/23 10:05:42
**/
import java.util.Scanner;
import java.util.Arrays;
import static java.lang.Math.*;

public class B_Drinks {
    static final boolean DEBUG = false;

    public static void main(String[] args) {
        readInput();
    }

    public static void solve(double n, double size) {
        System.out.println(size / n);

    }

    public static void readInput() {
        Scanner sc = new Scanner(System.in);
        double n = sc.nextInt();
        int f = (int) n;
        double size = 0.0;
        while (f-- > 0) {
            size += sc.nextInt();
        }
        solve(n, size);
        sc.close();
        System.out.close();
    }
}