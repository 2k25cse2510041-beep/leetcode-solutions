class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != 0)
            {
                ans.push_back(nums[i]);
            }
        }
        while(ans.size() < nums.size())
        {
            ans.push_back(0);
        }
        nums = ans;
    }
};