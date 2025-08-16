class Solution {
  public:
    int primeProduct(int L, int R) {
        const int MOD = 1e9+7;
        vector<bool> mark(R+1, true);

        mark[0] = mark[1] = false;

        for (int p = 2; p * p <= R; p++) {
            if (mark[p]) {
                for (int i = p * p; i <= R; i += p)
                    mark[i] = false;
            }
        }

        long long product = 1;
        bool found = false;

        for (int p = L; p <= R; p++) {
            if (mark[p]) {
                product = (product * p) % MOD;
                found = true;
            }
        }

        return found ? (int)product : 1; 
        // if no prime in [L, R], return 1
    }
};
