class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes)
    {
        int m = primes.size();
        vector<long long> ugly(n);
        vector<int> index(m, 0);
        ugly[0] = 1;
        for(int i = 1; i < n; i++)
        {
            long long next = LLONG_MAX;
            for(int j = 0; j < m; j++)
            {
                next = min(next, ugly[index[j]] * primes[j]);
            }
            ugly[i] = next;
            for(int j = 0; j < m; j++)
            {
                if(ugly[index[j]] * primes[j] == next)
                {
                    index[j]++;
                }
            }
        }
        return ugly[n - 1];
    }
};