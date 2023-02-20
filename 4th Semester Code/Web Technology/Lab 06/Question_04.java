import java.util.*;
public class Question_04 {
    public static void main(String args[]){
        int mat[][] = new int[3][3];
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the Matrix Elements : ");
        for(int i = 0;i<3;i++)
            for(int j = 0;j<3;j++){
                System.out.print("[" + i + "]" + "[" + j + "] : ");
                mat[i][j] = sc.nextInt();
            }
        sc.close();

        int left = mat[0][0] + mat[1][1] + mat[2][2];
        int right = mat[0][2] + mat[1][1] + mat[2][0];

        System.out.println("Sum of left Diagonal : " + left);
        System.out.println("Sum of right Diagonal : " + right);
    }    
}
