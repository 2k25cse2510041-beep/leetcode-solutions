
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> pairs(1001, 0);

        for (auto trip : trips)
        {
            int num = trip[0];
            int from = trip[1];
            int to = trip[2];

            pairs[from]+=num;
            pairs[to] -= num;
        }
        int current = 0;
        for (int i = 0; i < 1001; i++)
        {
            current=current+pairs[i];
            if(current>capacity)
            {
                return false;
            }
        }
        return true;
    }
};