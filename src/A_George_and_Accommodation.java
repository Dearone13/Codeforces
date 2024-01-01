
/**
    █▀▄ █▀▀ ▄▀█ █▀█ █▀█ █▄░█ █▀▀
    █▄▀ ██▄ █▀█ █▀▄ █▄█ █░▀█ ██▄
    created: 25/06/23 09:19:01
**/
import java.util.Scanner;
import java.util.Arrays;
import static java.lang.Math.*;

public class A_George_and_Accommodation {
    static final boolean DEBUG = false;

    public static void main(String[] args) {
        readInput();
    }

    public static void solve(int[][] a, int n) {
        int p = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 2-1; j++) {
                if(a[i][j] <= a[i][j+1]-2){
                    p++;
                }
            }
        }
        System.out.println(p);
    }

    public static void readInput() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int rooms[][] = new int[n][2];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 2; j++) {
                rooms[i][j] = sc.nextInt();
            }
        }
        solve(rooms, n);
        sc.close();
        System.out.close();
    }
}