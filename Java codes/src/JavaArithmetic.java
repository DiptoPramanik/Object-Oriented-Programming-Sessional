import java.util.*;

public class JavaArithmetic {
    public  static  void main(String[] ags)
    {
        Scanner input = new Scanner(System.in);
        int num1 = input.nextInt();
        int num2 = input.nextInt();
        //Addition
        int sum = num1 + num2;
        //Subtraction
        int sub = num1 - num2;
        //Division
        double div = (double)num1/num2;
        //Multiplication
        long mul = (long)num1*num2;
        //Modulus
        int mod = num1%num2;

        System.out.println("Addition : "+sum);
        System.out.println("Subtraction : "+sub);
        System.out.println("multiplication : "+mul);
        System.out.println("Division : "+div);
        System.out.println("Modulus : "+mod);
    }
}
