import java.util.Scanner;
public class TSpattern3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r =  sc.nextInt();
        for(int i = 1 ;i <= r ; i++){
            for(int j = 1; j <= r + 1 - i; j++){
                System.out.print(" ");}
            for(int j = 1;j <= 2*i-1; j++ ){
                System.out.print("*");}

            System.out.println();}
            sc.close();
        }
    }


    
