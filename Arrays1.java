import java.util.*;

public class Arrays1 {
    public static void main(String[] args) {
        int a = 3, b = 3;
        int[][] x = new int[a][b];

        Scanner ace = new Scanner(System.in);

        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                System.out.print("Enter the value of x" + (i + 1) + (j + 1) + ": ");
                x[i][j] = ace.nextInt();
            }
        }

        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                System.out.print("The value of x" + (i + 1) + (j + 1) + "= " + x[i][j]);
            }
        }
    }
}