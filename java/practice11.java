public class practice11 {
    public static void main(String[] args) {
        double sum=0;
        for (String str : args) {
            if (str.matches("[0-9\\.]+"))
            {
                sum=sum + Double.parseDouble(str);
            }
        }
        System.out.println("SUM IS : "+sum);
    }
}
