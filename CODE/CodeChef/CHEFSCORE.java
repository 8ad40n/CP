import java.util.*;

import java.io.*;

public class CHEFSCORE {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 1; i <= t; i++) {
            int n = sc.nextInt();
            int x = sc.nextInt();
            int y = sc.nextInt();

            for (int j = 0; j < n; j++) {
                if (n * x == y) {
                    System.out.println("YES");

                }
            }

        }
    }
}