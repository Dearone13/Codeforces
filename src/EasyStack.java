
/**
    █▀▄ █▀▀ ▄▀█ █▀█ █▀█ █▄░█ █▀▀
    █▄▀ ██▄ █▀█ █▀▄ █▄█ █░▀█ ██▄
    created: 10/07/23 11:40:02
**/
import java.util.Scanner;
import java.util.Arrays;
import java.util.Stack;
import static java.lang.Math.*;

public class EasyStack {
    static final boolean DEBUG = false;

    public static void main(String[] args) {
        readInput();
    }

    public static void solve(Stack<Integer> numbers, int step) {

    }

    public static void readInput() {
        Scanner sc = new Scanner(System.in);
        Stack<Integer> number = new Stack<Integer>();
        int t = sc.nextInt();
        while (t-- > 0) {
            int step = sc.nextInt();
            if (step == 1) {
                number.push(step);
                step = sc.nextInt();
                solve(number, step);
            } else if (step == 2) {
                number.push(step);
                solve(number);
            }
        }
        sc.close();
        System.out.close();

    }
}