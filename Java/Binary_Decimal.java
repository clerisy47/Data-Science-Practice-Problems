import java.util.Scanner;

public class Binary_Decimal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int binary= sc.nextInt();
        int decimal = 0;
        int i = 0;
        while(binary > 0 ){
            double rem = binary % 10;
            binary /= 10;
            decimal += rem*Math.pow(2,i);
            i++ ;

        }
        System.out.println("The equivalent binary conversion is "+ decimal);




        sc.close();

    }
}