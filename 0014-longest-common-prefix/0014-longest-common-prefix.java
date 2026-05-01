import java.util.Arrays;

class Solution {
    public String longestCommonPrefix(String[] strs) {
        Arrays.sort(strs);  // sort array

        String a = strs[0];
        String b = strs[strs.length - 1];

        String res = "";

        int i = 0;
        while (i < a.length() && i < b.length()) {
            if (a.charAt(i) == b.charAt(i)) {
                res = res + a.charAt(i);
                i++;
            } else {
                break;
            }
        }

        return res;
    }
}