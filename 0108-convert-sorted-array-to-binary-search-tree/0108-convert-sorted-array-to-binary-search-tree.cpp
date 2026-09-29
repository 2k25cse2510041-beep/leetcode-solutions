class Solution {
public:
    TreeNode* solve(vector<int>& nums, int left, int right)
    {
        if (left > right)
            return NULL;

        // Find middle element
        int mid = left + (right - left) / 2;

        // Create root
        TreeNode* root = new TreeNode(nums[mid]);

        // Left half → left subtree
        root->left = solve(nums, left, mid - 1);

        // Right half → right subtree
        root->right = solve(nums, mid + 1, right);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums)
    {
        return solve(nums, 0, nums.size() - 1);
    }
};