
/**
    █▀▄ █▀▀ ▄▀█ █▀█ █▀█ █▄░█ █▀▀
    █▄▀ ██▄ █▀█ █▀▄ █▄█ █░▀█ ██▄
    created: 06/07/23 18:19:51
**/
import java.util.Scanner;
import java.util.Arrays;
import static java.lang.Math.*;

public class A_Calculating_Function {
    static final boolean DEBUG = false;

    public static void main(String[] args) {
        readInput();
    }

    public static void solve(long num) {
        System.out.println(num % 2 == 0 ? num / 2 : -(num + 1) / 2);
    }

    public static void readInput() {
        Scanner sc = new Scanner(System.in);
        long num = sc.nextLong();
        solve(num);
        sc.close();
        System.out.close();
    }
}