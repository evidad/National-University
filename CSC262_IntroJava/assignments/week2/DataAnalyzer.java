import java.util.Scanner;

public class DataAnalyzer {
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);

    double firstDouble = 0;
    double secondDouble = 0;
    double thirdDouble = 0;
    double fourthDouble = 0;

    System.out.print("Enter a double number: ");
    firstDouble  = scan.nextDouble();
    System.out.print("Enter the second double number: ");
    secondDouble  = scan.nextDouble();
    System.out.print("Enter the third number: ");
    thirdDouble  = scan.nextDouble();
    System.out.print("Enter the last double number: ");
    fourthDouble  = scan.nextDouble();

    double average = (firstDouble + secondDouble + thirdDouble + fourthDouble)/4;

    double minimum = firstDouble;

    if (firstDouble > secondDouble)
      {
        minimum = secondDouble;
      }
    if (secondDouble > thirdDouble)
      {
        minimum = thirdDouble;
      }
    if (thirdDouble > fourthDouble)
      {
        minimum = fourthDouble;
      }

    double maximum = firstDouble;

    if (firstDouble < secondDouble)
      {
        maximum = secondDouble;
      }
    if (secondDouble < thirdDouble)
      {
        maximum = thirdDouble;
      }
    if (thirdDouble < fourthDouble)
      {
        maximum = fourthDouble;
      }

    double difference = maximum - minimum;
    
    System.out.println("The average of all the doubles is: " + average);
    System.out.println("The minimum of all the doubles is: " + minimum);
    System.out.println("The maximum of all the doubles is: " + maximum);
    System.out.println("The range of all the doubles is: " + difference);
  }

}
