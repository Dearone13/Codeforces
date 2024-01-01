
/**
    █▀▄ █▀▀ ▄▀█ █▀█ █▀█ █▄░█ █▀▀
    █▄▀ ██▄ █▀█ █▀▄ █▄█ █░▀█ ██▄
    created: 25/06/23 08:55:29
**/
import java.util.Scanner;
import java.util.Arrays;
import static java.lang.Math.*;

public class A_In_Search_of_an_Easy_Problem {
    static final boolean DEBUG = false;

    public static void main(String[] args) {
        readInput();
    }

    public static void solve(int[] p, int n) {
        boolean es = false;
        for (int i = 0; i < n; i++) {
            if (p[i] == 1) {
                es = true;
                break;
            } else {
                es = false;
            }
        }
        System.out.println(es == false ? "EASY" : "HARD");
    }
    public static void readInput() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int p[] = new int[n];
        for (int i = 0; i < n; i++) {
            p[i] = sc.nextInt();
        }
        solve(p, n);
        sc.close();
        System.out.close();
    }
}