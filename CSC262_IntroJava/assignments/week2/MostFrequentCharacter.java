import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class MostFrequentCharacter {
    public static void main(String[] args) {
    Map<Character, Integer> frequencyMap = new HashMap<>();
    Scanner sc = new Scanner(System.in);
    
    String input; 

    System.out.print("Enter a word to receive the most repeated character(s): ");
    
    input = sc.nextLine();
    input = input.toLowerCase();


    for (char c : input.toCharArray()) {
      frequencyMap.put(c, frequencyMap.getOrDefault(c, 0) + 1);
    }


    int maxFrequency = 0;
    for (int frequency : frequencyMap.values()) {
      if (frequency > maxFrequency) {
        maxFrequency = frequency;
      }
    }


    for (Map.Entry<Character, Integer> entry : frequencyMap.entrySet()) {
      if (entry.getValue() == maxFrequency) {
        System.out.println(entry.getKey() + " (" + entry.getValue() + ")");
      }
    }
  }
}
