import java.util.*;

class Student {
    int roll;
    String name;
    float cgpa;

    void showData() {
        System.out.println("Roll: " + roll);
        System.out.println("Name: " + name);
        System.out.println("CGPA: " + cgpa);
    }

    void getData(Scanner sc){
        System.out.print("Roll: ");
        roll = sc.nextInt();
        sc.nextLine();
        System.out.print("Name: ");
        name = sc.nextLine();
        System.out.print("CGPA: ");
        cgpa = sc.nextFloat();
    }
}

public class Question_02
{
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of students: ");
        int n = sc.nextInt();
        Student[] students = new Student[n];

        for (int i = 0; i < n; i++) {
            System.out.println("Enter details of student " + (i + 1));
            students[i] = new Student();
            students[i].getData(sc);
        }

        sc.close();
        Student min = students[0];
        for (int i = 1; i < n; i++)
            if (students[i].cgpa < min.cgpa)
                min = students[i];

        System.out.println("Student with lowest CGPA:");
        min.showData();
    }
}