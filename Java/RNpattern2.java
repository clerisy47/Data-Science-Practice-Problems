import java.util.Scanner;

public class RNpattern2{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        for(int i = 1; i <= r; i++){
            for(int j=i; j <= r; j++){
                System.out.print(j);
            }
            for(int j=1; j <= i-1; j++){
                System.out.print(j);
            }
            System.out.println();
        }




        sc.close();

    }
}