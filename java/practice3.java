public class practice3 {
    public static void main(String[] args) {
        String str1="Ankesh";
        String str2="Ankesh";
        String str3=new String("Ankesh");
        System.out.println(str1.equals(str2));
        System.out.println(str1.equals(str3));
        System.out.println(str2.equals(str3));
        System.out.println(str1==str2);
        System.out.println(str1==str3);
        System.out.println(str2==str3);
    }
}
