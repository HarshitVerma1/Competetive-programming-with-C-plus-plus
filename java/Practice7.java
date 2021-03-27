public class Practice7 {
    public static void main(String[] args) {
    String str[]={"Harshit","Ankesh","Aditya","Shubham","Mohit","Ankit"};
    java.util.Arrays.sort(str);
    for(Object x:str) //Here "Object" behaves like "auto" keyword
    {
        System.out.print(x+" ");
    }
    }
}
