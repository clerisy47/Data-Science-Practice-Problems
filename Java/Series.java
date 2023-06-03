
public class Series {
    public static void main(String[] args){
        double sum = 0;
        double i = 1;
        while(true){
            sum = sum + Math.pow(-1,i+1) * i;
            i++;
            if(i>4){
                System.out.print("The sum is: " + sum);
                break;
            }
        }
    }
}
