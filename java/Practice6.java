import java.util.Scanner;

public class Practice6 {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter sentence with multiple spaces : ");
        String str=sc.nextLine();
        System.out.println(str.replaceAll("\\s+"," "));
    }
}
