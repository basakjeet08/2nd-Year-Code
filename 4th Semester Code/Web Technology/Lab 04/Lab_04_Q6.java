import java.util.*;
import java.lang.Math.*;
public class Lab_04_Q6 {
    public static void main(String args[]){

        int num = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Number : ");
        if(sc.hasNextInt())
            num = sc.nextInt();

        int flag = 0;
        for(int i = 2 ;i <= Math.sqrt(num) ; i++){
            if(num%i == 0){
                flag = 1 ;
            }
        }

        if(flag == 1)
            System.out.println("Not a Prime Number");
        else
            System.out.println("Prime Number");
    }
}
