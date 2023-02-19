import java.util.*;

class Question_04{
    int num[];
    int n = 0;

    void read(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the amount of Number : ");
        n = sc.nextInt();
        num = new int[n];
        System.out.println("Enter the Numbers ");
        for(int i = 0;i<n ; i++)
            num[i] = sc.nextInt();
        sc.close();
    }
    void display(){
        System.out.println("The List : ");
        for(int i = 0;i<n;i++)
            System.out.print(num[i] + " ");
    }
    void swap(){
        int minIndex = 0 , maxIndex = 0;
        int min , max ;
        min = max = num[0];

        for(int i = 1 ; i<n ; i++){
            if(min > num[i]){
                minIndex = i;
                min = num[i];
            }
            if(max < num[i]){
                maxIndex = i ;
                max = num[i];
            }
        }
        num[minIndex] = max ;
        num[maxIndex] = min ;
    }

    public static void main(String args[]){
        Question_04 ob = new Question_04();
        ob.read();
        ob.swap();
        ob.display();
    }
}