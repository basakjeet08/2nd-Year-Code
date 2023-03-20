public class Question_01{
    public static void main(String args[]){
        WoddenBox obj = new WoddenBox(9.8f, 2.3f, 3.9f, 2.1f);
        obj.height = 2;// No need to write
    }
}
class Plate{
    float length , width ;

    Plate(float length , float width){
        this.length = length ;
        this.width = width ;
        System.out.println("Inside Plate Class");
    }
}
class Box extends Plate{
    float height;

    Box(float length , float width , float height){
        super(length , width);
        this.height = height ;
        System.out.println("Inside Box Class");
    }
}
class WoddenBox extends Box {
    float thick ;
    WoddenBox(float length , float width , float height , float thick){
        super(length , width , height);
        this.thick = thick;
        System.out.println("Inside Wodden Box Class");
    }
}