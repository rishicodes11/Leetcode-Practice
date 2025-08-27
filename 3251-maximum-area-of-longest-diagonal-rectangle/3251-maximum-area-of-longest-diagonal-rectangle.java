class Solution {
    public int areaOfMaxDiagonal(int[][] dimensions) {
        int n = dimensions.length;
        int maxArea = 0;   // stores best area so far
        int maxDiag = 0;   // stores best diagonal^2 so far

        for (int i = 0; i < n; i++) {
            int len = dimensions[i][0];
            int w = dimensions[i][1];
            int diagSq = len * len + w * w; // diagonal squared
            int area = len * w;

            if (diagSq > maxDiag || (diagSq == maxDiag && area > maxArea)) {
                maxDiag = diagSq;
                maxArea = area;
            }
        }
        return maxArea;
    }
}