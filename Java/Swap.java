import java.util.Scanner;
public class Swap {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any two numbers: ");
        int x = sc.nextInt();
        int y = sc.nextInt();
        System.out.println("The numbers before swapping are "+ x +"and"+ y);
        x = x + y;
        y = x - y;
        x = x - y;
        System.out.println("The numbers after swapping are "+ x +"and"+ y);
        sc.close();
    }


}
