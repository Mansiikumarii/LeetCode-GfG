class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i=n-1; i >= 0; i--){//Travese from the last element
            if(digits[i]<9){
                // Agar current element is than 9 , hust add 1 and return 
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};