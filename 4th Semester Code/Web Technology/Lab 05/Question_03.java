import java.util.*;
public class Question_03{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        Shapes obj = new Shapes();

        System.out.println("1. Circle");
        System.out.println("1. Rectangle");
        System.out.println("3. Triangle \n");

        System.out.print("Enter Your Choice : ");
        int choice = sc.nextInt();
        double area = 0;
        switch(choice){
            case 1 : 
                System.out.print("Enter the Radius : ");
                area = obj.calculateArea(sc.nextDouble());
                break;
            case 2 : 
                System.out.print("Enter the Length and Breadth : ");
                area = obj.calculateArea(sc.nextInt(), sc.nextInt());
                break ;
            case 3 : 
                System.out.print("Enter the Base and Height : ");
                area = obj.calculateArea(sc.nextDouble(), sc.nextDouble());
                break;
        }
        sc.close();
        System.out.println("Area : " + area );
    }
}
class Shapes{
    double calculateArea(double r){
        return 3.14 * r * r;
    }

    int calculateArea(int length , int breadth){
        return length * breadth ;
    }

    double calculateArea(double base , double height){
        return 0.5 * base * height ;
    }
}