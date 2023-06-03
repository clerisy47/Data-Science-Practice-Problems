import java.util.Scanner;

public class RNpattern1{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        int c = sc.nextInt();
        for(int i = 1; i <= r; i++){
            for(int j=1; j <= c; j++){
                System.out.print(j);
            }
            System.out.println();
        }
        sc.close();

    }
}