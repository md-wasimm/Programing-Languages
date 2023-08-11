public class string {
    public static void main(String[] args){
        String name = "Wasim";
        String place = "Burdwan";
        System.out.println(name+" From "+ place);
        System.out.println(name+" From\" "+ place);
        System.out.println(name+" From\\ "+ place);     // \n - for new line
        System.out.println(name.length());
        System.out.println(name.toLowerCase());
        System.out.println(name.toUpperCase());
        System.out.println(name.contains("Was"));
        System.out.println(name.charAt(3));
        System.out.println(name.endsWith("im"));
        System.out.println(name.indexOf("sim"));
    }    
}
