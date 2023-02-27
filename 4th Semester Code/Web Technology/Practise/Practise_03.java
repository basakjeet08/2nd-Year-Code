import java.io.*;

class Practise_03{
    public static void main(String args[]) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter the Number : ");
        int num = Integer.parseInt(br.readLine());
        String n = Integer.toString(num);
        System.out.println(n.charAt(0)+ "\n" + n.charAt(1) + "\n" + n.charAt(2));
    }

}