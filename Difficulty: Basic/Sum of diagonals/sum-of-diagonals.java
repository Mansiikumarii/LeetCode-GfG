class Solution {
    int sumDiagonal(int N, int[][] M) {
        // Write your code here
        int primary =0;
        for(int i=0; i<N;i++){
            for(int j=0; j<N; j++){
                if(i == j)
                primary += M[i][j];
            }
        }
        return primary;
    }
}