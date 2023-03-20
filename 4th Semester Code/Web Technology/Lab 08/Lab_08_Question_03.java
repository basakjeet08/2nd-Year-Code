public class Lab_08_Question_03 {
    public static void main(String[] args) {
        Kiitians ob = new Kiitians(21051880, 21082418);
        ob.course();
    }
}

abstract class Student {
    int rollNo, regNo;

    Student(int rollNo, int regNo) {
        this.regNo = regNo;
        this.rollNo = rollNo;
    }

    abstract void course();
}

class Kiitians extends Student {
    Kiitians(int rollNo, int regNo) {
        super(rollNo, regNo);
    }

    void course() {
        System.out.println("Roll No : " + rollNo + " Reg No : " + regNo);
    }
}