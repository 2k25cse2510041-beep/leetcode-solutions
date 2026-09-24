class Solution {
public:

    void solve(vector<int>& candidates, int target, int index,
               vector<int>& temp, vector<vector<int>>& ans) {

        // Target reached
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        // Target becomes negative
        if (target < 0)
            return;

        // No more elements
        if (index == candidates.size())
            return;

        // Take current element
        temp.push_back(candidates[index]);

        // Same element can be used again
        solve(candidates, target - candidates[index],
              index, temp, ans);

        // Remove current element
        temp.pop_back();

        // Don't take current element
        solve(candidates, target, index + 1,
              temp, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates,
                                        int target) {

        vector<vector<int>> ans;
        vector<int> temp;

        solve(candidates, target, 0, temp, ans);

        return ans;
    }
};