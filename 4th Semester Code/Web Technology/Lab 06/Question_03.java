import java.util.*;
public class Question_03 {
    public static void main(String args[]){
        int n ;
        int frequency[] = new int[100];
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of List : ");
        n = sc.nextInt();
        int num[] = new int[n];
        
        System.out.println("Enter The numbers ");
        for(int i = 0;i<n ; i++){
            num[i] = sc.nextInt();
            frequency[num[i]-1]++;
        }
        for(int i=0;i<100;i++)
            if(frequency[i] > 0)
                System.out.println("Occurence of " + (i+1) + " : "+frequency[i]);

        sc.close();
    }    
}