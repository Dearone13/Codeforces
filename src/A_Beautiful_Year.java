
/**
    █▀▄ █▀▀ ▄▀█ █▀█ █▀█ █▄░█ █▀▀
    █▄▀ ██▄ █▀█ █▀▄ █▄█ █░▀█ ██▄
    created: 08/06/23 11:31:22
**/
import java.util.Scanner;
import java.util.Arrays;
import static java.lang.Math.*;

public class A_Beautiful_Year {
    static final boolean DEBUG = false;

    public static void main(String[] args) {
        readInput();
    }

    public static void solve(int a) {
        int n = 4;
        int cont = 0;
        while (cont != 3) {
            cont = 0;
            a = a + 1;
            String x[] = String.valueOf(a).split("");
            Arrays.sort(x);
            for (int i = 0; i < n - 1; i++) {
                if (!x[i].equals(x[i + 1])) {
                    cont++;
                }
            }
        }
        System.out.println(a);
    }

    public static void readInput() {
        Scanner sc = new Scanner(System.in);
        int y2 = sc.nextInt();
        solve(y2);
        sc.close();
        System.out.close();
    }
}