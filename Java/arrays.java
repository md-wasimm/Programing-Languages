public class arrays {
    public static void main(String[] args){
        int [] marks ={10,20,30,40};
        marks[3]=50;
        // System.out.println(marks[3]);
        // System.out.println(marks[2]);
        
        // Classical way to iterate array
        
        // for(int i=0;i<marks.length;i++){
        //     System.out.println(marks[i]);
        // }

        // Modern way to iterate array
        
        // for(int value:marks){
        //     System.out.println(value);
        // }

        // 2D array

        int [][] twodarray={{1,2,3},{4,5,6}};
        System.out.println(twodarray[0][2]);

        String [] cars = {"Hyundai", "Suzuki", "Tata", "Ford" };
        for(String value:cars){
            System.out.println(value);
        }
    }
}
