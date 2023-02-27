public class prac {
    public static void main(String args[]){
        B ob = new B();

        ob.display();
    }
}
abstract class A{
    abstract void display();
}

class B extends A{
    void display(){
        System.out.println("B");
    }
}
