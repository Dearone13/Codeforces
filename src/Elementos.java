/**
    █▀▄ █▀▀ ▄▀█ █▀█ █▀█ █▄░█ █▀▀
    █▄▀ ██▄ █▀█ █▀▄ █▄█ █░▀█ ██▄
    created: 11/07/23 14:19:54
**/
import java.util.Scanner;
import java.util.Arrays;
import java.util.Stack;
import static java.lang.Math.*;

public class Elementos {
    static final boolean DEBUG = false;

    public static void main(String[] args) {
        readInput();
    }

    public static void solve(String[] charter) {
        int n = charter.length;
        int cont = 0;
        Stack<String> par = new Stack<String>();
        for (int i = 0; i < n ; i++) {
            if(charter[i].equals("(") || charter[i].equals("{")|| charter[i].equals("[")|| charter[i].equals("<")){
                par.push(charter[i]);

            }else{
                if(charter[i].equals(")") && par.peek().equals("(")){
                    par.pop();

                }else if(charter[i].equals("}") && par.peek().equals("{")){
                    par.pop();

                }else if(charter[i].equals("]") && par.peek().equals("[")){
                    par.pop();

                }else if(charter[i].equals(">") && par.peek().equals("<")){
                    par.pop();

                }else{
                    cont++;
                }
            }
        }


        System.out.println((cont == 0? "0":(!par.empty())? "imposible":cont));
    }

    public static void readInput() {
        Scanner sc = new Scanner(System.in);
        String charter[] = sc.next().split("");
        solve(charter);
        sc.close(); System.out.close();
    }
}