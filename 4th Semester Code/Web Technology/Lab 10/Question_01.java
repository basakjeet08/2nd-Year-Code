interface Numbers{
    int process(int x , int y);
}

class Sum implements Numbers{

    @Override
    public int process(int x, int y) {
        return x+y;
    }
}

class Average implements Numbers{
    @Override
    public int process(int x , int y){
        return (x+y)/2;
    }
}
public class Question_01{
    public static void main(String args[]){
        Sum s = new Sum();
        int sum = s.process(2, 3);
        Average av = new Average();
        int average = av.process(4, 7);

        System.out.println("Sum : " + sum);
        System.out.println("Average : " + average);
    }
}
