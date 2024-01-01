
/**
 *   author:  Dearone
 *   created: 11/07/23 09:31:44
**/
import java.util.Scanner;
import java.util.Stack;

public class ES {
    private static Scanner sc = new Scanner(System.in);
    private static final boolean DEBUG = false;

    public static void main(String[] args) {
        Stack<Integer> number = new Stack<Integer>();
        int t = sc.nextInt();
        String order = "";
        int num = 0;
        while (t-- > 0) {
            int step = sc.nextInt();
            if (step == 1) {
                num = sc.nextInt();
                number.push(num);
            } else if (step == 2 && !number.empty()) {
                number.pop();
            } else if (step == 3) {
                if (number.empty()) {
                    order += "Empty!,";
                    // System.out.println("Empty!");
                } else {
                    order += String.valueOf(number.peek() + ",");
                    // System.out.println(number.peek());
                }

            }
        }
        String order2[] = order.split(",");
        for (String word : order2) {
            System.out.println(word);
        }

        sc.close();
        System.out.close();
    }
}