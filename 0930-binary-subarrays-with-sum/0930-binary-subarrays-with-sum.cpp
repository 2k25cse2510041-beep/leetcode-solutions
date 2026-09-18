class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        unordered_map<int, int> mp;
        mp[0] = 1;
        int sum = 0;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++) { 
            sum += nums[i];  
            int need = sum - goal;        
            if(mp.find(need) != mp.end()) {
                ans += mp[need];
            }
            mp[sum]++;
        }
        return ans;
    }
};