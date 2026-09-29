class Solution {
public:
    void solve(string& s, vector<string>& ans, int index)
    {
        if (index == s.size())
        {
            ans.push_back(s);
            return;
        }
        if (isdigit(s[index]))
        {
            solve(s, ans, index + 1);
            return;
        }
        s[index] = tolower(s[index]);
        solve(s, ans, index + 1);

        s[index] = toupper(s[index]);
        solve(s, ans, index + 1);
    }
    vector<string> letterCasePermutation(string s)
    {
        vector<string> ans;
        solve(s, ans, 0);
        return ans; 
    }
};