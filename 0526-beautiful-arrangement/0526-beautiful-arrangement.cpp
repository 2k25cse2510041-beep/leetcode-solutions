class Solution {
public:
    int count =0;
    void solve(int pos, int n, vector<bool>& used)
    {
        if(pos > n)
        {
            count++;
            return;
        }
        for(int num = 1; num <= n; num++)
        {
            if(!used[num] &&
               (num % pos == 0 || pos % num == 0))
            {
                used[num] = true;

                solve(pos + 1, n, used);

                used[num] = false;
            }
        }
    }
    int countArrangement(int n)
    {
        vector<bool> used(n + 1, false);

        solve(1, n, used);

        return count;
    }
};