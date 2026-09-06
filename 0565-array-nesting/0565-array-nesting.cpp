class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        
        int n = nums.size();
        int result = 0;
        
        for(int i = 0; i < n; i++) {
            
            int count = 0;
            int j = i;
            
            while(nums[j] != -1) {
                int next = nums[j];
                nums[j] = -1;
                j = next;
                count++;
            }
            
            result = max(result, count);
        }
        return result;
    }
};