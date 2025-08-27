class Solution {
    public int maximum69Number (int num) {
        String str = String.valueOf(num);
        String newStr = str.replaceFirst("6", "9"); 
        return Integer.parseInt(newStr); // convert back to int
    }
}