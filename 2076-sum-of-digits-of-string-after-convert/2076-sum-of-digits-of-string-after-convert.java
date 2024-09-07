class Solution {
    public int getLucky(String s, int k) {
        // Convert each character in the string to its corresponding numeric value
        StringBuilder number = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            char x = s.charAt(i);
            number.append(x - 'a' + 1);
        }
        
        // Perform the transformation `k` times
        while (k > 0) {
            int temp = 0;
            String numStr = number.toString();  // Convert the StringBuilder to a String
            for (int i = 0; i < numStr.length(); i++) {
                char x = numStr.charAt(i);
                temp += x - '0';  // Sum the digits of the current number
            }
            number = new StringBuilder(String.valueOf(temp));  // Convert the sum back to a string
            k--;
        }
        return Integer.parseInt(number.toString());  // Return the final result as an integer
    }
}
