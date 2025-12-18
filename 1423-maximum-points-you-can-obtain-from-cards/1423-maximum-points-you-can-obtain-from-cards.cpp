class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum = 0, rsum =0;
        int n = cardPoints.size();
        int rindex = n-1;
        for(int i=n-k; i<n; i++){
            rsum += cardPoints[i];
        }
        int maxSum = rsum;
        //sliding window add left remove right
        for(int i= 0; i<k; i++){
            lsum += cardPoints[i];
            rsum -= cardPoints[n-k+i];
            rindex = rindex-1;
            maxSum = max(maxSum, lsum+rsum);
        }
        return maxSum;
    }
};