public class Question_03 {

    void show_area(double r) {
        double area = 3.14 * r * r;
        System.out.println("Area of Circle :" + area);
    }

    void show_area(int l, int b) {

        double area = l * b;
        System.out.println("Area of Rectangle :" + area);

    }

    void show_area(double b, double h) {
        double area = 0.5 * b * h;
        System.out.println("Area of Triangle :" + area);

    }

    public static void main(String[] args) {
        Question_03 ob = new Question_03();
        ob.show_area(7, 8);
        ob.show_area(8.9);
        ob.show_area(7.8, 9.8);
    }
}