import java.lang.String;
public class Practice2 {
    public static void main(String[] args) {
        String str1="harshitverma14366@gmail.com";
        String str2="harshitverma.itsolution@gmail.com";
        System.out.println(str1.indexOf("@"));
        System.out.println(str1.lastIndexOf("com"));
        System.out.println(str1.substring(str1.indexOf("@")+1,str1.lastIndexOf("com")-1));
        System.out.println(str2.substring(0,str2.indexOf("@")));
        System.out.println("str1.charAt(str1.indexOf(\"@\")) : "+str1.charAt(str1.indexOf("@")));
        System.out.println("str1.length()"+str1.length());
        String str3 =String.valueOf("Harshit");
        System.out.println(str3);
    }
}
