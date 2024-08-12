package week1;
import java.util.Scanner;
public class Gas {
    public static void main(String[] args) {
        int gal_gas; // gallons of gas
        double mpg; // mpg
        double ppg; // $ price/gallon
        
        Scanner scan = new Scanner(System.in);

        System.out.println("Welcome, this program will help calculate the cost to operate your vehicle.");

        System.out.print("Please enter the number (integer) of gallons of gas in the tank: ");
        gal_gas = scan.nextInt();
        
        System.out.print("Please enter the fuel efficiency (double) in miles per gallon: ");
        mpg = scan.nextDouble();
        
        System.out.print("Please enter the price of gas (double) per gallon: ");
        ppg = scan.nextDouble();

        double p = 100 / ppg;
        double y = mpg * gal_gas;

        System.out.printf("It will cost $ %.2f to travel 100 miles\n", p);
        System.out.println("Your vehicle will travel " + Math.round(y) + " miles with " + gal_gas + " gallons of gas");

    }
}
