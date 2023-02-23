public class Practise_04 {
    public static void main(String args[]){
        int arr[] = {1 , 2, 3, 4, 5, 6, 7, 8, 9, 10};

        start : for(int n : arr){
            System.out.println(n);
            for(int j = 0 ; j<10;j++){
                if(n == 5)
                    break start;
            }
        }
    }
}
