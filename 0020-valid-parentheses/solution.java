class Solution {
    public boolean isValid(String s) {
        // Allocate space equivalent to the length of the string
        char[] stack = new char[s.length()];
        int top = -1; // Pointer to track the "top" of our stack array
        
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            
            // Push the expected closing bracket onto our array
            if (c == '(') {
                stack[++top] = ')';
            } else if (c == '{') {
                stack[++top] = '}';
            } else if (c == '[') {
                stack[++top] = ']';
            } 
            // If it's a closing bracket, check for empty or a mismatch
            else {
                if (top == -1 || stack[top--] != c) {
                    return false;
                }
            }
        }
        
        // If top is back to -1, all brackets were matched perfectly
        return top == -1;
    }
}

