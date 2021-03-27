import java.util.Scanner;
public class practice5 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Gmail for finding USER_NAME and DOMAIN: ");
        String str=sc.nextLine();
        int index=str.indexOf("@");
        System.out.println("Domain : "+str.substring(index+1,str.length()));
        System.out.println("User Name: "+str.substring(0,str.indexOf("@")));
    }
}
