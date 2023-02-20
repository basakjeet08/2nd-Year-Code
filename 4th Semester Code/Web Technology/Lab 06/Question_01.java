public class Question_01 {
    public static void main(String[] args){
        int num[] = new int[10];
        for(int i=0 ; i<10; i++)
            num[i] = Integer.parseInt(args[i]);

        int even = 0 , odd = 0;
        for(int i=0 ; i<10; i++){
            if(num[i]%2 == 0)
               even++;
            else
                odd++;
        }
        System.out.println("Even : " + even);
        System.out.println("Odd : " + odd);
        
    }
}