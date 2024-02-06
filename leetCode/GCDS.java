package leetCode;

import java.util.*;

class GCDS {
   public static void main(String[] args) {
      System.out.println("Hola");
      Scanner sc = new Scanner(System.in);
      String str1 = sc.nextLine();
      String str2 = sc.nextLine();
      System.out.println(gcdOfStrings(str1, str2));
      sc.close();

   }

   public static String gcdOfStrings(String str1, String str2) {
      String ans = "";
      String parts[] = str1.split("");
      String div[] = str2.split("");
      int s = parts.length;
      int stop = div.length;
      boolean flag = false;

      // System.out.println("Size: " + s);
      for (int i = 0, c = 0; i < s; i++, c++) {
         if (!(c < stop)) {
            c = 0;
            flag = true;
         }
         if (parts[i].equals(div[c])) {
            if (flag == true) {
               ans += parts[i];
               parts[i] = null;

            } else {
               parts[i] = null;
            }
         } else {
            // System.out.println("\"\"");
            return "";
         }
      }

      // System.out.println(ans);
      return ans;
   }
}