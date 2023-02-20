public class Practise_02 {
    public static void main(String args[]){
        Apple a = new Apple();
        Orange o = new Orange();
        Cherry c = new Cherry();

        Apple ref = a;
        ref.display();
        
        ref = o;
        ref.display();

        ref = c;
        ref.display();
    }
}

class Apple{
    void display(){
        System.out.println("Apple");
    }
}

class Orange extends Apple{
    void display(){
        System.out.println("Orange");
    }
}


class Cherry extends Apple{
    void display(){
        System.out.println("Cherry");
    }
}