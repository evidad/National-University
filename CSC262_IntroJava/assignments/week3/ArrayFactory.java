package week3;

import java.util.Scanner;

public class ArrayFactory {
    public static int sumWithoutLargest(int[] arr) {
        // Handles edge case if array is empty
        if (arr.length == 0)
            {
                return 0;
            }
        
        int sum = 0;
        int largest = 0;
        int difference;

        // Loops through array and adds integer values to sum
        for (int i = 0; i < arr.length; i++) {
            sum = sum + arr[i];
            // Finds and stores largest integer value
            if (arr[i] > largest) {
                largest = arr[i];
        }
    }

        // Calculates then returns the difference between the sum and largest integer value
        difference = sum - largest;
        return difference;
    }

    public static void swapLargestSmallest (int[] arr) {
        // Handles edge case if array is empty
        if (arr.length == 0)
        {
            return;
        }

        int smallest = arr[0];
        int largest = arr[0];
        int indexSmall = 0;
        int indexLarge = 0;

        
        for (int i = 1; i < arr.length; i++) {
            // Finds and stores smallest integer value and index
            if (arr[i] < smallest) {
                smallest = arr[i];
                indexSmall = i;
            }
            // Finds and stores largest integer value and index
            if (arr[i] > largest) {
                largest = arr[i];
                indexLarge = i;
            }
        }

        // Swaps largest and smallest integer values in array
        arr[indexSmall] = largest;
        arr[indexLarge] = smallest;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        // Prompt the user for the number of elements in the array
        System.out.print("Enter the number of elements in the array: ");
        int n = scan.nextInt();

        // Create an array of size n
        int[] intArray = new int[n];

        
        // Prompt the user to enter each element and store it in the array
        System.out.print("Enter the elements of the array: ");
        for (int i = 0; i < n; i++) {
            intArray[i] = scan.nextInt();
        }

        int answer1 = sumWithoutLargest(intArray);
        System.out.println("Sum without largest value: " + answer1);
        
        swapLargestSmallest(intArray);
        System.out.print("Array with largest and smallest elements swapped: ");
        for (int num : intArray) {
            System.out.print(num + " ");
        }

        scan.close();
    }
    
}
