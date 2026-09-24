class Solution {
public:
    int numPrimeArrangements(int n) {
        const long long MOD = 1000000007;
        int primeCnt = 0;
        for (int i = 2; i <= n; i++) {
            bool p = true;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    p = false;
                    break;
                }
            }
            if (p)
                primeCnt++;
        }
        long long ans = 1;
        for (int i = 1; i <= primeCnt; i++) {
            ans = (ans * i) % MOD;
        }
        for (int i = 1; i <= n - primeCnt; i++) {
            ans = (ans * i) % MOD;
        }
        return ans;
    }
};