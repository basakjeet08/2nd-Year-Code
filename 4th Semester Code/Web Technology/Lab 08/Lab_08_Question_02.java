public class Lab_08_Question_02 {
    public static void main(String[] args) {
        TwoDimension ob1 = new TwoDimension(43);
        ThreeDimension ob2 = new ThreeDimension(56);

        ob1.calculatePrice();
        ob2.calculatePrice();
    }
}

class TwoDimension {
    int value;

    TwoDimension(int value) {
        this.value = value;
    }

    void calculatePrice() {
        int price = value * 40;
        System.out.println("The Price of the 2D sheet : " + price);
    }
}

class ThreeDimension extends TwoDimension {
    ThreeDimension(int volume) {
        super(volume);
    }

    void calculatePrice() {
        int price = super.value * 60;
        System.out.println("The Price of the 3D sheet : " + price);
    }
}