class Solution {
    public boolean isPalindrome(int x) {
        int rev =0;
        int num = x;
        if(x<0){
            return false;
        }

        while(num!=0){
            int digi = num%10;
            rev = rev *10 + digi;
            num/=10;
        }

        return x == rev;
    }
}
