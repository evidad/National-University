import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;
import java.io.FileNotFoundException;

public class FileReaderApp {

    public static void main(String[] args) {
      
        Scanner scanner = new Scanner(System.in);

        // Asks the user for the file name
        System.out.print("Enter the file name: ");
        String filePath = scanner.nextLine();

        BufferedReader reader = null;
        int totalWordCount = 0;
        int totalCharCount = 0;
        int totalLineCount = 0;

        try {
            reader = new BufferedReader(new FileReader(filePath));

            // Counts the number of lines in the file
            totalLineCount = countLines(new BufferedReader(new FileReader(filePath)));

            // Variable to hold each line
            String line;

            // Reading file line by line
            while ((line = reader.readLine()) != null) {
                // Counting words in the current line
                totalWordCount += countWords(line);
                // Counting chars in the current line
                totalCharCount += countChars(line);
            }

            System.out.println("Total number of words in the file: " + totalWordCount);
            System.out.println("Total number of chars in the file: " + totalCharCount);
            System.out.println("Total number of lines in the file: " + totalLineCount);

        } catch (FileNotFoundException e) {
            // Handling file not found exception
            System.out.println("The file was not found. Please check the file path and try again.");
        } catch (IOException e) {
            // Handling exceptions
            System.out.println("An error occurred while reading the file:");
            e.printStackTrace();
        } finally {
            // Closes reader
            try {
                if (reader != null) {
                    reader.close();
                }
            } catch (IOException e) {
                e.printStackTrace();
            }
        }

        // Closes scanner
        scanner.close();
    }

    // Method to count words in a string
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

    // Method to count chars in a line
    public static int countChars(String str) {
        int charCount = 0;

        if (str.length() == 0) {
            return charCount;
        }

        // Count every character in the string, including spaces
        charCount = str.length();

        return charCount;
    }

    // Method to count lines in the file
    public static int countLines(BufferedReader reader) throws IOException {
        int lineCount = 0;
        while (reader.readLine() != null) {
            lineCount++;
        }
        return lineCount;
    }

}
