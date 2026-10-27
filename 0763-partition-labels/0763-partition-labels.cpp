
class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> last(26, 0);

        // Store the last occurrence of each character
        for (int i = 0; i < s.size(); i++) {
            last[s[i] - 'a'] = i;
        }

        vector<int> ans;
        int start = 0;
        int end = 0;

        for (int i = 0; i < s.size(); i++) {
            end = max(end, last[s[i] - 'a']);

            if (i == end) {
                ans.push_back(end - start + 1);
                start = i + 1;
            }
        }

        return ans;
    }
};
