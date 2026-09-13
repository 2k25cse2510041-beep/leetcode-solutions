class Solution {
public:
    vector<int> majorityElement(vector<int>& nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int count = 1;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    count++;
                }
            }
            if (count > nums.size() / 3)
            {
                bool alreadyPresent = false;
                for (int k = 0; k < ans.size(); k++)
                {
                    if (ans[k] == nums[i])
                    {
                        alreadyPresent = true;
                        break;
                    }
                }
                if (!alreadyPresent)
                {
                    ans.push_back(nums[i]);
                }
            }
        }
        return ans;
    }
};