
/**
    █▀▄ █▀▀ ▄▀█ █▀█ █▀█ █▄░█ █▀▀
    █▄▀ ██▄ █▀█ █▀▄ █▄█ █░▀█ ██▄
    created: 24/06/23 13:57:09
**/
import java.util.Scanner;
import java.util.Arrays;
import static java.lang.Math.*;

public class Calendar {
    static final boolean DEBUG = false;

    public static void main(String[] args) {
        readInput();
    }

    public static void solve(int d1, int m1, int y1, int n, int d2, int m2, int y2) {
        // System.out.println(d1 + " " + m1 + " " + y1 + " " + n);
        // System.out.println(d2 + " " + m2 + " " + y2);

        int canty = 0;
        int ds = 0;
        boolean dif = false;
        for (int contd = d1, contm = m1, conty = y1, postd = n; dif == false; canty++) {
            if (contm <= 12) {
                if (contd <= 30) {
                    if (postd <= 7) {
                        contd++;
                        postd++;
                        ds = postd;
                        System.out.println("Datos: " + contd + " " + contm + " " + conty + " " + postd);

                    } else {
                        postd = 1;
                    }
                } else {
                    contd = 1;
                    contm++;
                }

            } else {
                conty++;
                System.out.println(contd + " " + contm + " " + conty);
                if (contd == d2 && contm == m2 && conty == y2) {
                    System.out.println("Entre");
                    dif = true;
                }
            }
        }

        System.out.println(ds);
    }

    public static void readInput() {
        Scanner sc = new Scanner(System.in);
        int d1, m1, y1, n, d2, m2, y2;
        d1 = sc.nextInt();
        m1 = sc.nextInt();
        y1 = sc.nextInt();
        n = sc.nextInt();
        d2 = sc.nextInt();
        m2 = sc.nextInt();
        y2 = sc.nextInt();
        solve(d1, m1, y1, n, d2, m2, y2);
        sc.close();
        System.out.close();
    }
}