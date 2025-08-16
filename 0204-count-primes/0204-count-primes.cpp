class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        vector<bool> prime(n, true);   // indices 0..n-1
        prime[0] = prime[1] = false;

        for (int i = 2; 1LL * i * i < n; ++i) {
            if (prime[i]) {
                for (long long j = 1LL * i * i; j < n; j += i) {
                    prime[j] = false;
                }
            }
        }

        int cnt = 0;
        for (int i = 2; i < n; ++i) cnt += prime[i];
        return cnt;
    }
};
