import java.math.BigInteger;
import java.util.Scanner;

public class simpleaddition {
    public static void main(String[] args) {
        BigInteger sum;
        Scanner sc = new Scanner(System.in);
        String first = sc.nextLine();
        String second = sc.nextLine();
        BigInteger a = new BigInteger(first);
        BigInteger b = new BigInteger(second);
        sum = a.add(b);
        System.out.print(sum);
    }
}