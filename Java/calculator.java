import java.util.Scanner;

public class calculator {
    public static void main(String[] args) {
        try (Scanner scan = new Scanner(System.in)) {
            System.out.print("Please enter the operand(+,-,*,/) to perform operation in JAVA calculator: ");
            char input = scan.next().charAt(0);

            if (input == '+') {
                System.out.println("You have opted for summation.");
            } else if (input == '-') {
                System.out.println("You have opted for difference.");
            } else if (input == '*') {
                System.out.println("You have opted for multiplication.");
            } else if (input == '/') {
                System.out.println("You have opted for division.");
            } else {
                System.out.println("You have entered wrong input.");
            }

            System.out.print("Enter fisrt number: ");
            float num1 = scan.nextFloat();
            System.out.print("Enter second number: ");
            float num2 = scan.nextFloat();

            switch (input) {
                case '+':
                    System.out.print("The sum is: ");
                    System.out.println(num1 + num2);
                    break;
                case '-':
                    System.out.print("The difference is: ");
                    System.out.println(num1 - num2);
                    break;
                case '*':
                    System.out.print("The multiplication is: ");
                    System.out.println(num1 * num2);
                    break;
                case '/':
                    System.out.print("The division is: ");
                    System.out.println(num1 / num2);
                    break;
            }
        }
    }
}
