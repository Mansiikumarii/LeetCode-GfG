class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
    int c0 = 0, c1 = 0, c2 = 0;

    // Count 0s, 1s and 2s
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            c0 += 1;
        else if (arr[i] == 1)
            c1 += 1;
        else
            c2 += 1;
    }

    int idx = 0;
    
    // Place all the 0s
    for (int i = 0; i < c0; i++)
        arr[idx++] = 0;

    // Place all the 1s
    for (int i = 0; i < c1; i++)
        arr[idx++] = 1;

    // Place all the 2s
    for (int i = 0; i < c2; i++)
        arr[idx++] = 2;
    }
};