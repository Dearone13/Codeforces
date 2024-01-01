
/**
    █▀▄ █▀▀ ▄▀█ █▀█ █▀█ █▄░█ █▀▀
    █▄▀ ██▄ █▀█ █▀▄ █▄█ █░▀█ ██▄
    created: 12/07/23 10:39:38
**/
import java.util.Scanner;
import java.util.Arrays;
import java.util.Stack;
import static java.lang.Math.*;

public class Paren {
    static final boolean DEBUG = false;

    public static void main(String[] args) {
        readInput();
    }

    public static void solve(String[] paren) {
        Stack<String> elemenStack = new Stack<String>();
        int n = paren.length;
        int cont = 0;
        if (n % 2 == 0) {
            for (int i = 0, j = elemenStack.size()  ; i < n; i++) {
                elemenStack.push(paren[j]);
                if (!(j == 0)) {
                    //System.out.println(elemenStack.get(i-1)+" "+elemenStack.peek());
                    if ((elemenStack.get(j - 1).equals("(") || elemenStack.get(j - 1).equals("[")
                            || elemenStack.get(j - 1).equals("{") || elemenStack.get(j - 1).equals("<"))
                            && (elemenStack.peek().equals(")") || elemenStack.peek().equals("]")
                                    || elemenStack.peek().equals("}")
                                    || elemenStack.peek().equals(">"))) {
                                        cont++;
                                        //elemenStack.remove(j-1);
                                        //elemenStack.pop();
                                        System.out.println("Tam "+elemenStack.size());
                    }
                }
                System.out.println(elemenStack.toString());
            }
        } else {
            System.out.println("imposible");

        }
        System.out.println(cont);

    }

    public static void readInput() {
        Scanner sc = new Scanner(System.in);
        String charter[] = sc.next().split("");
        solve(charter);
        sc.close();
        System.out.close();

    }
}