class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long total=0;
        for(int i=0; i<chalk.size(); ++i){
            total += chalk[i];
        }
        k %= total;
        for(int i=0; i<chalk.size(); i++){
            if(k<chalk[i]){
                return i;
            }
            k = k-chalk[i];
        }
        return -1;
    }
};