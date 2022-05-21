import java.util.Arrays;

public class SortedArrays {
    public static void main(String[] args) {
        int[] m = { 1, 9, -9, 0, 3, 5, 7 };

        Arrays.sort(m);

        for (int i = 0; i < m.length; i++) {
            System.out.println(m[i]);
        }
    }
}