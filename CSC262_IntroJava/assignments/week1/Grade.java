package week1;
import java.util.Scanner;
public class Grade {

  public static void main(String[] args) {

    String grade;
    Scanner scan = new Scanner(System.in);
    // Decision making
    System.out.println("Welcome, this program will help calculate letter grade to GPA grade.");
    System.out.print("Please enter the letter grade: ");
    grade = scan.nextLine();
    grade = grade.toUpperCase();

    if (grade.equals("A")) {
      System.out.println("Earned 96% - 100%");
    }

    else if (grade.equals("A-")) {
      System.out.println("Earned 90% - 95.99%");
    }

    else if (grade.equals("B+")) {
      System.out.println("Earned 87% - 89.99%");
    }

    else if (grade.equals("B")) {
      System.out.println("Earned 84% - 86.99%");
    }

    else if (grade.equals("B-")) {
      System.out.println("Earned 80% - 83.99%");
    }

    else if (grade.equals("C+")) {
      System.out.println("Earned 77% - 79.99%");
    }

    else if (grade.equals("C")) {
      System.out.println("Earned 74% - 76.99%");
    }

    else if (grade.equals("C-")) {
      System.out.println("Earned 70% - 73.99%");
    }

    else if (grade.equals("D+")) {
      System.out.println("Earned 67% - 69.99%");
    }

    else if (grade.equals("D")) {
      System.out.println("Earned 64% - 66.99%");
    }

    else if (grade.equals("D-")) {
      System.out.println("Earned 60% - 63.99%");
    }

    else if (grade.equals("F")) {
      System.out.println("Earned 59.99% and below");
    }

    else {
      System.out.println("Please run the program again and enter a valid letter grade");
    }
  }

}
