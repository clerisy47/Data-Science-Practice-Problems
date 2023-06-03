import java.util.Scanner;

public class HRSpattern1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r =  sc.nextInt();
        int c = sc.nextInt();
        for(int i = 1 ;i <= r ; i++){
            for(int j = 1; j <= c; j++){
                if(i == 1 || j == 1 || i == r || j == c ){
                System.out.print("*");}
                else{System.out.print(" ");}
                
            }
            System.out.println();
            sc.close();
        }

    }
}
