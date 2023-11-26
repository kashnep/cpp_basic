import java.util.Arrays;
import java.util.Scanner;

public class MakePermutation {
    public static int[]a;
    public static void print() {
        System.out.println(Arrays.toString(a));
    }

    public static void swap(int i, int depth) {
        int tmp = a[i];
        a[i] = a[depth];
        a[depth] = tmp;
    }
    public static void makePermutation(int n, int r, int depth) {
        if(n == depth) {
            print();
            return;
        }
        for(int i = depth ; i < n ; i++) {
            swap(i, depth);
            makePermutation(n, r, depth + 1);
            swap(i, depth);
        }
    }

    public static void main(String[] args) {
        a = new int[]{2,1,3};
        Arrays.sort(a);
        makePermutation(3,3,0);
    }
}
