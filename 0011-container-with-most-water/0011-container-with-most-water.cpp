class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
     int left =0, right = n-1;
     int ans=0;

     while(left<right){
        int length = right - left;
        int height1 = min(height[left], height[right]);
        int area = length*height1;
        ans = max(ans,area);
        if(height[left]<height[right]){
            left++;
        }
        else{
            right--;
        }
     } 
     return ans;  
    }
};