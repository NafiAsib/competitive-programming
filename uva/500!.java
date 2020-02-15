import java.util.Scanner;
import java.math.BigInteger;

public class Main
{
    public static void main(String args[])
    {
        int n;

        Scanner in = new Scanner(System.in);

        while(in.hasNext()) {
            
            n = in.nextInt();
            BigInteger factorial = BigInteger.ONE;

            for(int i = 2; i <= n; i++) {
                factorial = factorial.multiply(BigInteger.valueOf(i));
            }

            System.out.println(n+"!");
            System.out.println(factorial);
        }
    }
}