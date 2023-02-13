import java.util.*;

class Student {
    int roll;
    String name;
    float cgpa;

    Student(int roll, String name, float cgpa) {
        this.roll = roll;
        this.name = name;
        this.cgpa = cgpa;
    }

    void display() {
        System.out.println("Roll: " + roll);
        System.out.println("Name: " + name);
        System.out.println("CGPA: " + cgpa);
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
            System.out.print("Roll: ");
            int roll = sc.nextInt();
            System.out.print("Name: ");
            String name = sc.next();
            System.out.print("CGPA: ");
            float cgpa = sc.nextFloat();
            students[i] = new Student(roll, name, cgpa);
        }
        float min = students[0].cgpa;
        int minIndex = 0;
        for (int i = 1; i < n; i++) {
            if (students[i].cgpa < min) {
                min = students[i].cgpa;
                minIndex = i;
            }
        }
        System.out.println("Student with lowest CGPA:");
        students[minIndex].display();
    }
}