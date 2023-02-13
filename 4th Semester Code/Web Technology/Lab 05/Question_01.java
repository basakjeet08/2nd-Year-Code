import java.util.*;
public class Question_01 {
    int subtract(int a , int b){
        return a - b ;
    }
    double subtract(double a , double b){
        return a - b;
    }
    public static void main(String args[]){
        Question_01 obj = new Question_01();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Two Numbers(Int) : ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int res1 = obj.subtract(a, b);
        System.out.println("The Result is : " + res1);


        System.out.print("Enter Two Numebers(Double) : ");
        double num1 = sc.nextDouble();
        double num2 = sc.nextDouble();
        double res2 = obj.subtract(num1, num2);
        System.out.print("The Result is : " + res2);
    
        
        sc.close();
    }
}
