
/**
 *   author:  Dearone
 *   created: 20/06/23 11:12:29
**/
import java.util.Scanner;

public class Recursividad {
    private static Scanner sc = new Scanner(System.in);
    private static final boolean DEBUG = false;

    public static int suma(int a, int b) {
        if (b == 0) {
            return a;
        } else {
            return suma(a + 1, b - 1);
        }

    }

    public static int resta(int a, int b) {
        if (b == 0) {
            return a;
        } else {
            return resta(a - 1, b - 1);
        }

    }

    public static int multiplicacion(int a, int b) {
        if (b == 0) {
            return a;
        } else if (a == 0) {
            return b;
        } else {
            if (a > b) {
                return multiplicacion(a * b, b - 1);
            } else {
                return multiplicacion(a - 1, b * a);
            }

        }

    }

    public static void main(String[] args) {
        System.out.println("Suma " + suma(6, 5));
        System.out.println("Resta " + resta(8, 5));
        System.out.println("multiplicacion: " + multiplicacion(2, 3));
        sc.close();
        System.out.close();
    }
}