
/**
   █▀▄ █▀▀ ▄▀█ █▀█ █▀█ █▄░█ █▀▀
   █▄▀ ██▄ █▀█ █▀▄ █▄█ █░▀█ ██▄
    created: 06/09/23 20:22:53
**/
import java.util.Scanner;
import java.util.Arrays;
import static java.lang.Math.*;

public class ID {
   static final boolean DEBUG = false;

   public static void main(String[] args) {
      readInput();
   }

   public static void solve(int[] x, int n) {
      // Ordenamiento por inserción directa
      // 7514326
      for (int j = 2; j < n; j++) {
         int i = j - 1;
         int x2 = x[j];
         while (x2 < x[i] && i > 0) {
            x[i + 1] = x[i];
            i = i - 1;
         }
         x[i + 1] = x2;
      }
      System.out.println(Arrays.toString(x));
   }

   public static void readInput() {
      Scanner sc = new Scanner(System.in);
      String auxX = sc.next();
      int n = auxX.length();
      int x[] = new int[n];
      for (int i = 0; i < n; i++) {
         x[i] = Character.getNumericValue(auxX.charAt(i));
      }
      solve(x, n);
      sc.close();
      System.out.close();
   }
}