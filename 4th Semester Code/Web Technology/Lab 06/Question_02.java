public class Question_02 {
    static int count = 0;

    Question_02(){
        count++;
    }
    public static void main(String args[]){

        Question_02 ob1 = new Question_02();
        Question_02 ob2 = new Question_02();
        System.out.println("Count : " + count);
    }
}