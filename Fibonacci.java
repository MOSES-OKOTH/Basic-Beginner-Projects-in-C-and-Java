import java.util.Scanner;

public class Fibonacci {
    public static void main(String[] args) {
        Scanner ace = new Scanner(System.in);

        int no1, no2, no3;
        no1 = 0;
        no2 = 1;

        System.out.print("Enter the number of characters in your fibonacci series: ");
        int Count = ace.nextInt();

        System.out.println("Your Fibanacci series of " + Count + " characters is: ");

        System.out.print(no1 + " " + no2 + " ");

        for (int i = 0; i < Count; i++) {
            no3 = no1 + no2;
            System.out.print(no3 + " ");

            no1 = no2;
            no2 = no3;
        }
    }
}
