import java.util.Scanner;
public class ReverseString{
    public static void main(String[] args) {
        try(Scanner sc= new Scanner(System.in)){
            System.out.print("Enter the string you want to reverse: ");
            String s = sc.nextLine();
            int length = s.length();
            for(int i=length -1; i>=0; i--){
                System.out.print(s.charAt(i));
            }
        }
    }
}