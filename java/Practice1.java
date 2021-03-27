public class Practice1 {
        public static void main(String[] args) {
            int y=13;
            float x=14.89f;
            String str="Radhe";
            System.out.printf("%3$s %1$f %2$d",x,y,str);
            System.out.println();
            System.out.printf("%3$s  %1$+7.2f  %2$(d",x,y,str);
            System.out.println();
            System.out.printf("%3.1f",x);
            System.out.println();
            System.out.printf("%20s",str);
            System.out.println();
            System.out.printf("%-20s",str);
        }
}
