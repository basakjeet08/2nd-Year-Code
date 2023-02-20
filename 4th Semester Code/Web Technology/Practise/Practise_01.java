class Practise_01{
    public static void main(String args[]){
        WoddenBox obj = new WoddenBox(9.8f, 2.3f, 3.9f, 2.1f);
        obj.showData();
    }
}
class Plate{
    float length , width ;

    Plate(float length , float width){
        this.length = length ;
        this.width = width ;
    }

    void showData(){
        System.out.println("Length : " + length);
        System.out.println("Width : " + width);
        
    }
}
class Box extends Plate{
    float height;

    Box(float length , float width , float height){
        super(length , width);
        this.height = height ;
    }
    
    @Override
    void showData(){
        super.showData();
        System.out.println("Height : " + height);
    }
}

class WoddenBox extends Box {
    float thick ;
    WoddenBox(float length , float width , float height , float thick){
        super(length , width , height);
        this.thick = thick;
    }

    @Override
    void showData(){
        super.showData();
        System.out.println("Thickness : " + thick);
    }
}