class Solution {
    public int maxArea(int[] height) {
        int n= height.length;
        int lp = 0, rp = n-1, maxWater = 0;
        while(lp < rp){
            int w = rp - lp;
            int ht = Math.min(height[lp], height[rp]);
            int areaWater = w*ht;
            maxWater = Math.max(maxWater, areaWater); 

        if(height[lp] < height[rp])
        lp++ ;
        else
        rp--;
        }
        return maxWater;
    }
}