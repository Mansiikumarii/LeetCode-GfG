class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        long long a=0;
        for(int i=0; i<n; i++){
            a = a^nums[i];
        }
        a = 1ll*a&1ll*(~(1ll*a-1));
        int num1 =0;
        int num2 =0;
        for(int i=0; i<n; i++){
            if((nums[i]&a)==0)
            num1 = num1^nums[i];
            else
            num2 = num2 ^ nums[i];

        }
        return {num1, num2};
    }
};