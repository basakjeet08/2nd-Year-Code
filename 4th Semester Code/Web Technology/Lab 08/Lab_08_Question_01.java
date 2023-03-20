import java.util.*;

public class Lab_08_Question_01 {
    public static void main(String args[]) {
        Number ob = new Number();
        ob.read();
        ob.swap();
        ob.display();
    }
}

class Number {
    int n;
    int[] num;

    void read() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Number of Integers : ");
        n = sc.nextInt();
        num = new int[n];

        System.out.println("Enter the Numbers :- ");
        for (int i = 0; i < n; i++)
            num[i] = sc.nextInt();
        sc.close();
    }

    void display() {
        System.out.println("The Numbers are : --");
        for (int i = 0; i < n; i++)
            System.out.print(num[i] + " ");
    }

    void swap() {
        int min = num[0];
        int max = num[0];
        int min_index = 0;
        int max_index = 0;

        for (int i = 0; i < n; i++) {
            if (min > num[i]) {
                min = num[i];
                min_index = i;
            }
            if (max < num[i]) {
                max = num[i];
                max_index = i;
            }
        }

        int temp = num[min_index];
        num[min_index] = num[max_index];
        num[max_index] = temp;
    }
}