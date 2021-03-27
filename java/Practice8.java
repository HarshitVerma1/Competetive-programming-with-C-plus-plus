import java.util.Scanner;
public class Practice8 {
    public static void main(String[] args) {
        int arr[][];
        arr=new int[3][];
        arr[0]=new int[2];
        arr[1]=new int[4];
        arr[2]=new int[6];
        Scanner sc =new Scanner(System.in);
        for(int i=0;i<arr.length;i++)
        {
            for (int j=0;j<arr[i].length;j++)
            {
                System.out.println("Enter the value of "+(i+1)+"th row and "+(j+1)+" th column is: ");
                arr[i][j]=sc.nextInt();
            }
        }
        for(int i=0;i<arr.length;i++)
        {
            for (int j=0;j<arr[i].length;j++)
            {
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
    }
}
