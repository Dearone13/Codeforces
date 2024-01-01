/**
    █▀▄ █▀▀ ▄▀█ █▀█ █▀█ █▄░█ █▀▀
    █▄▀ ██▄ █▀█ █▀▄ █▄█ █░▀█ ██▄
    created: 30/06/23 20:02:37
**/
import java.util.Scanner;
import java.util.Arrays;
import static java.lang.Math.*;

public class A_Presents {
    static final boolean DEBUG = false;

    public static void main(String[] args) {
        readInput();
    }

    public static void solve(int[] friends, int n) {
        //System.out.println(Arrays.toString(friends));
        int friends2[] = new int[n];
        for (int i = 0; i < n; i++) {
            friends2[friends[i]-1] = i+1;
            //System.out.println(friends2[i]+" "+i);
        }
        for (  int f : friends2) {
            System.out.print(f+" ");
        }
        //System.out.println(Arrays.toString(friends2));
    }

    public static void readInput() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int friends[] = new int[n];
        for (int i = 0; i < n; i++) {
            friends[i] = sc.nextInt();
        }
        solve(friends,n);
        sc.close(); System.out.close();
    }
}