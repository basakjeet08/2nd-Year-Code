import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileWriter;
import java.io.IOException;

public class IO {

    public static void main(String[] args) throws IOException {
        IO ob = new IO();
        ob.dataInputStreamSimulation();
        ob.fileInputSteamSimulation();
        ob.fileOutputSteamSimulation();
        ob.fileWriterSimulation();
    }

    void dataInputStreamSimulation() throws IOException {
        DataInputStream ds = new DataInputStream(System.in);
        FileOutputStream fos = new FileOutputStream("Data Input Steam IO.txt");

        System.out.println("Data Input Stream Input -------");

        char ch;
        while ((ch = (char) ds.read()) != '@') {
            fos.write(ch);
        }
        fos.close();
    }

    void fileInputSteamSimulation() {
        FileInputStream fis;
        try {
            fis = new FileInputStream("Data Input Steam IO.txt");

            int readItem;
            do {
                readItem = fis.read();
                // System.out.print((char)readItem);
                System.out.print(readItem + " ");
            } while (readItem != -1);
            fis.close();

        } catch (FileNotFoundException e) {
            System.out.println("File Not Found !!");
            return;
        } catch (IOException e) {
            System.out.println("Problem in reading the File");
            return;
        }
    }

    void fileOutputSteamSimulation() {

        FileInputStream fis;
        FileOutputStream fos;
        int readItem = 0;
        try {
            fis = new FileInputStream("Data Input Steam IO.txt");
        } catch (FileNotFoundException e) {
            System.out.println("File not found!!");
            return;
        }

        try {
            fos = new FileOutputStream("File Output Stream IO.txt");

            while (readItem != -1){
                readItem = fis.read();
                fos.write(readItem);
            }

            fos.close();
            fis.close();

        } catch (FileNotFoundException e) {
            System.out.println("Output IO File not Found!!");
        } catch (IOException e) {
            System.out.println("Problem in reading the File");
        }
    }

    void fileWriterSimulation(){
        FileWriter fw ;
        try{
            fw = new FileWriter("File Writer IO.txt");

            String inputToFile = "Anirban Basak";
            for(int i = 0 ; i < inputToFile.length() ; i++){
                fw.write(inputToFile.charAt(i));
            }
            fw.close();
        }catch(IOException e){
            System.out.println("Can't write into the File!!");
        }
    }
}