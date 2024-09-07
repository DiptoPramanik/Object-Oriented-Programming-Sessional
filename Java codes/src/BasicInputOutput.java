import java.util.*;

public class BasicInputOutput {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String name = input.nextLine();
        int id = input.nextInt();
        double cg = input.nextDouble();
        System.out.println("Name : "+name);
        System.out.println("SID : "+id);
        System.out.println("CGPA : "+cg);
        }
}
