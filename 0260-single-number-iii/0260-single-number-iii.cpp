class Solution {
public:
    vector<int> singleNumber(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        for(int i = 0; i < nums.size(); )
        {
            if(i + 1 < nums.size() && nums[i] == nums[i + 1])
            {
                i += 2;
            }
            else
            {
                ans.push_back(nums[i]);
                i++;
            }
        }
        return ans;
    }
};