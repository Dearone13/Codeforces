
/**
    █▀▄ █▀▀ ▄▀█ █▀█ █▀█ █▄░█ █▀▀
    █▄▀ ██▄ █▀█ █▀▄ █▄█ █░▀█ ██▄
    created: 10/07/23 11:15:54
**/
import java.util.Scanner;
import java.util.Arrays;
import java.util.Stack;
import static java.lang.Math.*;

public class Ultimos {
    static final boolean DEBUG = false;

    public static void main(String[] args) {
        readInput();
    }

    public static void solve(Stack<String> names) {
        int n = names.size();
        while (n-- > 0) {
            System.out.println(names.pop());
        }
    }

    public static void readInput() {
        Scanner sc = new Scanner(System.in);
        Stack<String> pila = new Stack<String>();
        boolean stop = true;
        while (stop) {
            String name = sc.next();
            if (name.equals("#"))
                stop = false;
            else
                pila.push(name);
        }
        solve(pila);
        sc.close();
        System.out.close();
    }
}