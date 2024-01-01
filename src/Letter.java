
/**
    █▀▄ █▀▀ ▄▀█ █▀█ █▀█ █▄░█ █▀▀
    █▄▀ ██▄ █▀█ █▀▄ █▄█ █░▀█ ██▄
    created: 24/06/23 15:34:41
**/
import java.util.Scanner;
import java.util.Arrays;
import static java.lang.Math.*;

public class Letter {
    static final boolean DEBUG = false;

    public static void main(String[] args) {
        readInput();
    }

    public static void solve(char w[][], int n) {
        System.out.println(Arrays.toString(w));

    }

    public static void readInput() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String w[] = new String[n + 1];
        for (int i = 0; i < n + 1; i++) {
            w[i] = sc.nextLine();
        }
        System.out.println(Arrays.toString(w));
        int size = 0;
        for (int i = 1; i < n + 1; i++) {
            if (size < w[i].length()) {
                size = w[i].length();
            }
        }
        System.out.println(size);
        char w2[][] = new char[n][size];
        for (int c = 1; c < n; c++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < size; j++) {
                    int t = w[c].length();
                    if (j < t) {
                        String l = w[c];
                        System.out.println(l.charAt(j));
                        w2[i][j] = String.valueOf(l.charAt(j));
                        System.out.println(w2[i][j]);

                    } else {
                        break;
                    }

                }
            }
        }
       for (int i = 0; i < n; i++) {
        for (int j = 0; j < size; j++) {
            System.out.println(w2[i][j]);
        }
       }

        solve(w2, n);

        sc.close();
        System.out.close();
        // * */
    }
}