class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        for (int i=left;i<=right;i++) {
            int x=i;
            int bits=0;
            while (x>0) {
                bits+=x&1;
                x>>=1;
            }
            int prime=1;
            if (bits<2) {
                prime=0;
            } else {
                for (int j=2;j*j<=bits;j++) {
                    if (bits % j==0) {
                        prime = 0;
                        break;
                    }
                }
            }
            if (prime==1) {
                ans++;
            }
        }
        return ans;
    }
};