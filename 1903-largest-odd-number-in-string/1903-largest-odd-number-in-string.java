class Solution {
    public String largestOddNumber(String num) {
        String str = "";
        int index = num.length() - 1;

        while (index >= 0) {
            int m = num.charAt(index) - '0';

            if (m % 2 != 0) {
                for (int i = 0; i <= index; i++) {
                    str += num.charAt(i);
                }
                break;
            }

            index--;
        }

        return str;
    }
}