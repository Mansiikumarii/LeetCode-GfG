class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int>Xor(n,0);
        Xor[0] = arr[0];
       for(int i=1; i<n; i++){
        Xor[i] = Xor[i-1]^arr[i];
       }
       vector<int>result;
       for(auto q: queries){
        int L = q[0];
        int R = q[1];

        int xor_val =0;
        if(L==0){
            xor_val = Xor[R];
        }
        else{
            xor_val = Xor[R] ^ Xor[L-1];
        }

        result.push_back(xor_val);
       }
       return result;
    }
};