import java.util.Scanner;

public class Decimal_Binary {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int decimal= sc.nextInt();
        int binary = 0;
        int i = 0;
        while(decimal > 0 ){
            double rem = decimal %2;
            decimal /= 2;
            binary += rem*Math.pow(10,i);
            i++ ;

        }
        System.out.println("The equivalent binary conversion is "+ binary);




        sc.close();

    }
}