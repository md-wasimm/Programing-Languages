import java.util.Scanner;

public class userinput {
    public static void main(String[] args) {
        try (Scanner scan = new Scanner(System.in)) {
            System.out.print("Enter name: ");
            String input2 = scan.nextLine();
            System.out.print("The name is: ");
            System.out.println(input2);
        }
    }
}
