// package Lab08.General;

class Employee{
    protected int empid;
    private String ename ;
    
    Employee(int empid , String ename){
        this.empid = empid ;
        this.ename = ename;
    }

    void earning(double basic , double da , double hra){
        double salary = basic + (0.8)*da + (0.15)*hra;
        System.out.println("Name : " + ename);
        System.out.println("ID : " + empid);
        System.out.println("Salary : " + salary);
    }
}