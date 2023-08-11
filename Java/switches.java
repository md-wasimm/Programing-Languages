import java.util.Scanner;

public class switches {
    public static void main(String[] args) {
        try (Scanner scan = new Scanner(System.in)) {
            System.out.print("Eneter your age: ");
            int input = scan.nextInt();

            switch (input) {
                case 10:
                    System.out.println("You are 10 years old.");
                    break;
                case 15:
                    System.out.println("You are 15 years old.");
                    break;
                default:
                    System.out.println("You did not match any cases");
            }

        }
    }
}
