class NumArray {
public:
vector<int>pre;
    NumArray(vector<int>& nums) {
        pre = {};
        int n= nums.size();
        int sum =nums[0];

        pre.push_back(nums[0]);
        for(int i=1; i<n; i++){
            sum += nums[i];
            pre.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        int sum=0; //isme ans store karenge

        if(left == 0) return pre[right];
        else sum = pre[right] - pre[left-1];
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */