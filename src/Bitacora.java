
/**
    █▀▄ █▀▀ ▄▀█ █▀█ █▀█ █▄░█ █▀▀
    █▄▀ ██▄ █▀█ █▀▄ █▄█ █░▀█ ██▄
    created: 21/06/23 11:45:31
**/
import java.util.Scanner;
import java.util.Arrays;
import java.util.Stack;
import static java.lang.Math.*;

import java.lang.reflect.Array;

public class Bitacora {
    static final boolean DEBUG = false;
    static Stack numeros = new Stack<>();

    public static void main(String[] args) {
        readInput();
    }

    public static void solve(int t[], Stack<Integer> numeros) {
        // System.out.println(t.toString());
        System.out.println(numeros.toString());
        int n = t.length;
        int pos = 0;
        boolean exist = false;
        int e[] = new int[n];
        System.out.println(numeros.get(0));
        e[0] = numeros.get(0);
        for (int i = 0; i < n; i++) {
            pos += t[i];
            System.out.println(pos);
            if (pos < n) {
                e[i + 1] = numeros.get(pos);
                System.out.println(numeros.elementAt(pos) + "Tiempo: " + pos);

            } else {
                System.out.println(Arrays.toString(e));
                for (int j = n-1 ,c = 0; j > 0 && c < n; j--, c++) {
                    System.out.println("Entro"+numeros.get(j));
                    for (int c = 0; c < n; c++) {
                        System.out.println("Entro 2");
                        System.out.println(e[c] + " " + Bitacora.numeros.get(j));
                        if (numeros.get(j).equals(e[c])) {
                            System.out.println(numeros.get(j));
                        }
                    }
                }
                break;

            }

        }
    }

    public static void readInput() {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int n = N;
        int t[] = new int[N];
        for (int i = 0; i < N; i++) {
            t[i] = sc.nextInt();
        }
        ;
        while (n-- > 0) {
            int numeros2 = sc.nextInt();
            numeros.push(numeros2);
        }
        ;

        solve(t, numeros);
        sc.close();
        System.out.close();
    }
}