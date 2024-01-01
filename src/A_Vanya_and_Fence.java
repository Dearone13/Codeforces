/**
    █▀▄ █▀▀ ▄▀█ █▀█ █▀█ █▄░█ █▀▀
    █▄▀ ██▄ █▀█ █▀▄ █▄█ █░▀█ ██▄
    created: 08/06/23 11:09:10
**/
import java.util.Scanner;
import java.util.Arrays;
import static java.lang.Math.*;

public class A_Vanya_and_Fence {
    static final boolean DEBUG = false;

    public static void main(String[] args) {
        readInput();
    }

    public static void solve(int[] a, int h) {
        int n = a.length;
        int cont = 0;
        for (int i = 0; i < n; i++) {
            cont += (a[i]>h?2:1);
        }
        System.out.print(cont);
    }
    public static void readInput() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int h = sc.nextInt();
        int v[] = new int[n];
        for (int i = 0; i < n; i++) {
            v[i] = sc.nextInt();
        }
        solve(v,h);
        sc.close(); System.out.close();
    }
}