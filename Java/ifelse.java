import java.util.Scanner;

public class ifelse {
    public static void main(String[] args) {
        try (Scanner scan = new Scanner(System.in)) {
            System.out.print("Eneter your age: ");
            int input = scan.nextInt();

            if (input > 18) {
                System.out.println("Congrats you are eligible for driving.");
            } else if (input == 18) {
                System.out.println("You can drive but carefully.");
            } else {
                System.out.println("You cannot drive.");
            }
        }
    }
}
