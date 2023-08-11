public class trycatch {
    public static void main(String[] args) {
        String[] cars = { "Hyundai", "Suzuki", "Tata", "Ford" };

        try {
            System.out.println(cars[4]);
        } catch (Exception e) {
            System.out.println(e);
        }

        System.out.println("Now it will print as try-catch throws the exception");
    }
}
