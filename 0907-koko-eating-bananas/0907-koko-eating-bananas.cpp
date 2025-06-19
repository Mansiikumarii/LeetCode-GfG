class Solution {
public:
    bool isPossible(long long mid, vector<int>& piles, int h) {
        long long time = 0; 
        for (int pile : piles) {
            time += (pile + mid - 1) / mid;  // ceiling division
        }
        return time <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1; //speed
        long long high = *max_element(piles.begin(), piles.end());
        long long ans = high;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (isPossible(mid, piles, h)) { //predicate function
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return static_cast<int>(ans);
    }
};
