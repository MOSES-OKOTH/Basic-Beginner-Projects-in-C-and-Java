import java.util.Scanner;

public class Arrays2 {
    public static void main(String[] args) {
        Scanner ace = new Scanner(System.in);

        System.out.print("Enter the number of rows you want your matrix to have: ");
        int a = ace.nextInt();

        System.out.print("Enter the number of columns you want your matrix to have: ");
        int b = ace.nextInt();

        int[][] matrix = new int[a][b];
        int i, j;

        for (i = 0; i < a; i++) {
            for (j = 0; j < b; j++) {
                System.out.print("Enter the value of row " + (i + 1) + " column " + (j + 1) + ": ");
                matrix[i][j] = ace.nextInt();
            }
        }

        System.out.println("The transpose is: ");

        for (i = 0; i < a; i++) {
            for (j = 0; j < b; j++) {
                System.out.println("Row " + (i + 1) + " column " + (j + 1) + "= " + matrix[j][i]);
            }
        }
    }
}