class Solution {
public:
    vector<vector<int>> ans;
    void solve(int start, int k, int target, vector<int>& temp) {
        // Base case
        if (temp.size() == k) {
            if (target == 0) {
                ans.push_back(temp);
            }
            return;
        }
        for (int i = start; i <= 9; i++) {
            if (i > target)
                break;
            temp.push_back(i);
            solve(i + 1, k, target - i, temp);
            temp.pop_back(); // backtrack
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        solve(1, k, n, temp);
        return ans;
    }
};