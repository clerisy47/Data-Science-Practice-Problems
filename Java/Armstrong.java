import java.util.Scanner;

public class Armstrong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i=0;i<n;i++){
            int temp1 = i;
            int temp2 = i;
            int count = 0;
            int sum =0;
            while(temp1>0){
                temp1/=10;
                count++;
            }
            while(temp2>0){
                int a= temp2%10;
                temp2/=10;
                sum += Math.pow(a,count);}
            if (sum==i){
                System.out.println(sum);
                }

        }
        sc.close();
    }
}