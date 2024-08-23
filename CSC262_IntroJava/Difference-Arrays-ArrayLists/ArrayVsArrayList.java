import java.util.ArrayList;

public class ArrayVsArrayList {
    public static void main(String[] args) {
        // Create an integer array with a length of 3
        int[] intArray = new int[3];
        intArray[0] = 10;
        intArray[1] = 20;
        intArray[2] = 30;

        // Print each element within the integer array
        System.out.println("Array elements:");
        for (int i = 0; i < intArray.length; i++) {
            System.out.println("Element at index " + i + ": " + intArray[i]);
        }

        System.out.println();

        // Update each array element
        intArray[0] = 40;
        intArray[1] = 50;
        intArray[2] = 60;

        // This will throw an error if uncommented
        // intArray[3] = 70;

        System.out.println("Updated array elements:");
        for (int i = 0; i < intArray.length; i++) {
            System.out.println("Element at index " + i + ": " + intArray[i]);
        }
        
        // Create an integer ArrayList and use the add() method to add elements
        ArrayList<Integer> intArrayList = new ArrayList<>();
        intArrayList.add(10);
        intArrayList.add(20);
        intArrayList.add(30);
        intArrayList.add(40);

        // Prints the ArrayList
        // Need to use get() method to access elements by index
        System.out.println("\nArrayList elements:");
        for (int i = 0; i < intArrayList.size(); i++) {
            System.out.println("Element at index " + i + ": " + intArrayList.get(i));
        }

        // Removes the element at index 2 (ArrayList will dynamically shrink)
        intArrayList.remove(2);
        // Add a new element at the end of the ArrayList (ArrayList will dynamically grow)
        intArrayList.add(100);

        // Prints the updated ArrayList
        System.out.println("\nArrayList after modifications:");
        for (int i = 0; i < intArrayList.size(); i++) {
            System.out.println("Element at index " + i + ": " + intArrayList.get(i));
        }
    }
}
