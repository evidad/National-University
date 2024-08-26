package week3;

import java.util.Scanner;

public class WordCount {

    /**
     * Finds the position of the next blank character in a String
     * If none exists, the length of the string is returned.
     */
    public static int nextSpacePosition(String str, int from) {

        for (int i = from; i < str.length(); i++) {
            char ch = str.charAt(i);
            if (ch == ' ') {
                return i;
            }
        }
        return str.length();
    }

    /**
     * Finds the position of the next non-blank character in a String
     * If none exists, the length of the string is returned.
     */
    public static int nextNonSpacePosition(String str, int from) {
        for (int i = from; i < str.length(); i++) {
            char ch = str.charAt(i);
            if (ch != ' ') {
                return i;
            }
        }

        return str.length();
    }

    /**
     * Count and return the number of words in a given string
     * If string is empty, return 0;
     */
    public static int countWords(String str) {
        int wordCount = 0;

        if (str.length() == 0) {
            return wordCount;
        }

        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            if (ch != ' ' && (i == 0 || str.charAt(i - 1) == ' ')) {
                wordCount++;
            }
        }

        return wordCount;
    }

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String prompt = scan.nextLine();

        String str = "Hello World!";

        int answer1 = nextSpacePosition(str, 0);
        System.out.println("Next space position: " + answer1);

        int answer2 = nextNonSpacePosition(str, 6);
        System.out.println("Next non-blank char: " + answer2);

        int answer3 = countWords(prompt);
        System.out.println("Word count is: " + answer3);

        scan.close();
    }

}
