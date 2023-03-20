public class Practise_06 {
    public static void main(String args[]){
        Outer.Inner ob = new Outer().new Inner();
        ob.show();
    }
}
class Outer{
    
    class Inner{
        void show(){
            System.out.println("Inner Class");
        }
    }
}