import java.util.*;
public class Lab_04_Question_03 {
    public static void main(String args[]){
        int number = 0;

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Number : ");
        if(sc.hasNextInt())
            number = sc.nextInt();
        
        int temp = number ;
        int new_number = 0;
        while(temp > 0){
            new_number = new_number*10 + (temp%10);
            temp/= 10 ;
        }
        if(new_number == number){
            System.out.println("It is a Palindrome");
        }
        else{
            System.out.println("It is not a Palindrome");
        }
    }
}
