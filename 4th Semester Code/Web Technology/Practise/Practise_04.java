abstract class Figure{
    float length , breadth;
    Figure(float a , float b){
        length = a ;
        breadth = b ;
    }
    abstract void area();
}

class Triangle extends Figure{
    Triangle(float a , float b){
        super(a,b);
    }
    void area(){
        float a = super.length * super.breadth;
        System.out.println("Area : " + a);
    }
}

public class Practise_04 {
    public static void main(String args[]){
        Triangle ob = new Triangle(2, 3);
        ob.area();
    }
}
