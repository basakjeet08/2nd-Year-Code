import java.util.*;

class Lab_04_Question_01{
    public static void main(String args[]){

        int marks = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Your Marks : ");
        if(sc.hasNextInt())
            marks = sc.nextInt();

        char grade ;
        if(marks >= 90)
            grade = 'O';
        else if(marks >= 80)
            grade = 'E';
        else if(marks >= 70)
            grade = 'A';
        else if(marks >= 60)
            grade = 'B';
        else if(marks >= 50)
            grade = 'C';
        else
            grade = 'D';
        System.out.println("Your Grade is : " + grade);
    }
}