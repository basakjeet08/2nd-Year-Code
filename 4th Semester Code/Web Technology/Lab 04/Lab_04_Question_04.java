import java.util.*;
public class Lab_04_Question_04 {
    public static void main(String args[]){

        String firstName = "" ;
        String lastName = "";
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Your First Name : ");
        firstName = sc.nextLine();

        System.out.print("Enter Your Last Name : ");
        lastName = sc.nextLine();

        System.out.println("Your Name : " + firstName + " " + lastName);
    }
}
