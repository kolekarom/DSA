import java.util.HashMap;
import java.util.Map;

public class RomanToInteger {
    
    // Convert Roman numeral to Integer
    public int romanToInt(String s) {
        // Step 1: Store Roman numeral values in a map
        Map<Character, Integer> romanMap = new HashMap<>();
        romanMap.put('I', 1);
        romanMap.put('V', 5);
        romanMap.put('X', 10);
        romanMap.put('L', 50);
        romanMap.put('C', 100);
        romanMap.put('D', 500);
        romanMap.put('M', 1000);

        int result = 0;
        int n = s.length();

        // Step 2: Loop through the string (except last char)
        for (int i = 0; i < n - 1; i++) {
            int current = romanMap.get(s.charAt(i));
            int next = romanMap.get(s.charAt(i + 1));

            // Subtraction case (like IV, IX, XL, etc.)
            if (current < next) {
                result -= current;
            } else {
                result += current;
            }
        }

        // Step 3: Add the last Roman numeral
        result += romanMap.get(s.charAt(n - 1));

        return result;
    }

    // Main method to test
    public static void main(String[] args) {
        RomanToInteger converter = new RomanToInteger();

        System.out.println(converter.romanToInt("III"));      // 3
        System.out.println(converter.romanToInt("LVIII"));    // 58
        System.out.println(converter.romanToInt("MCMXCIV"));  // 1994
    }
}
