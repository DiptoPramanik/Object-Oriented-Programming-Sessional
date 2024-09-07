import java.util.*;

public class JavaCondition {
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        if(num % 2 == 0)
        {
            System.out.println("The number is EVEN");
        }
        else
        {
            System.out.println("The number is ODD");
        }
    }
}
