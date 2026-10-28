class Solution {
    public int lengthOfLastWord(String s) {
        s = s.trim(); // Removes leading and trailing spaces
        return s.length() - 1 - s.lastIndexOf(' ');
    }
}
