import java.util.*;
public class Lab_04_Question_02 {

    public static void main(String args[]){

        int date = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Your Date : ");
        if(sc.hasNextInt())
            date = sc.nextInt();

        String weekDay = "";
        switch(date){
            case 6 :
            case 13 :
            case 20 :
            case 27 :
                weekDay = "Monday";
                break;
            case 7 :
            case 14 :
            case 21 :
            case 28 :
                weekDay = "Tuesday";
                break ;
            case 1 :
            case 8 :
            case 15 :
            case 22 :
                weekDay = "Wednesday";
                break ;
            case 2 :
            case 9 :
            case 16 :
            case 23 :
                weekDay = "Thursday";
                break;
            case 3 :
            case 10 :
            case 17 :
            case 24 :
                weekDay = "Friday";
                break;

            case 4 :
            case 11 :
            case 18 :
            case 25 :
                weekDay = "Saturday";
                break;

            case 5 :
            case 12 :
            case 19 :
            case 26 :
                weekDay = "Sunday";
                break;
            default :
                weekDay = "Error Wrong Input";
        }

        System.out.println(weekDay);

        sc.close();
    }
}
