import java.util.*;
import java.lang.*;
import java.io.*;

class CHEFSCORE {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 1; i <= t; i++) {
            int n = sc.nextInt();
            int x = sc.nextInt();
            int y = sc.nextInt();

            if (n >= y / x && y % x == 0)
                System.out.println("YES");
            else
                System.out.println("NO");

        }
    }
}