class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s(nums.begin(), nums.end()); //set sort kar deta hai
        if(s.size()<3){
            return *s.rbegin(); // reverse begin last se element return karega
        }
        s.erase(*s.rbegin()); // remove largest element
        s.erase(*s.rbegin()); //remove 2nd largest element
        return *s.rbegin();

        
    }
};