class Solution {
public:
     TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()== 0 )
            return NULL;
        return helperFunction(nums, 0, nums.size()-1);
    }
    
    TreeNode* helperFunction(vector<int>& nums, int start, int end)
    {
        if(start> end ) return NULL;
        
        int mid = start + (end - start)/2;
        TreeNode* node = new TreeNode(nums[mid]);
       node->left=  helperFunction(nums, start, mid-1);
       node->right= helperFunction(nums, mid+1, end);
        return node;
    }
   
};
