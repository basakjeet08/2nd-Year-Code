public class Lab_04_Question_05 {
    public static void main(String args[]){
        int num1 = 0 ;
        int num2 = 1 ;

        System.out.println("0\n1");
        for(int i = 0 ;i <10 ; i++){
            int num = num1 + num2;
            System.out.println(num);

            num1 = num2 ;
            num2 = num ; 
        }
    }
}
