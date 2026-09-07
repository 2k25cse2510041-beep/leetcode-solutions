class Solution {
public:
    int distinctSubseqII(string s) {
        int d= 1000000007;
        int n = s.size();
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        vector<int> last(26, 0);
        for(int i = 1; i <= n; i++)
        {
            int c = s[i - 1] - 'a';
            dp[i] = (2LL * dp[i - 1]) % d;
            dp[i] = (dp[i] - last[c] + d) % d;
            last[c] = dp[i - 1];
        }
        return (dp[n] - 1 + d) % d;
    }
};