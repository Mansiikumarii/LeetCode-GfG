class Solution {
public:
    int minCost(vector<int>& arr) {
        priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());
        int ans = 0;

        while (pq.size() > 1) {
            int x = pq.top(); pq.pop();
            int y = pq.top(); pq.pop();

            int cost = x + y;
            ans += cost;
            pq.push(cost);
        }

        return ans;
    }
};
