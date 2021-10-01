class Solution {
    public String reverseWords(String s) {
    s = " " + s + " ";
        StringBuilder result = new StringBuilder();
        int begin = 0, end = 0;
        for (int i = 1; i < s.length() - 1; i++) {
            char c = s.charAt(i);
            if (c != ' ' && s.charAt(i - 1) == ' ') {
                begin = i;
                result.append(s.substring(end + 1, begin));
            }
            if (c != ' ' && s.charAt(i + 1) == ' ') {
                end = i;
                for (int j = end; j >= begin; j--) {
                    result.append(s.charAt(j));
                }
            } 
        }
        
        return result.toString();
    }
}
