import java.util.*;
import java.lang.*;
import java.io.*;

public class Elephant {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);

        int x = sc.nextInt();
        if (x % 5 == 0) {
            System.out.println(x / 5);
        } else {
            System.out.println((x / 5) + 1);

        }
    }
}
