/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    vector<int> traverse(TreeNode* root, int parent, int target, int depth)
    {
        if(root==NULL)
            return {};
        
        if(root->val==target)
            return {depth, parent};
         
        parent=root->val;
        vector<int> l= traverse(root->left, parent, target, depth+1);
        vector<int> r= traverse(root->right, parent, target, depth+1);
        
        if(l.empty())
            return r;
        else 
            return l;

    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        
        vector<int>ans1= traverse(root, -1, x, 0);
        vector<int>ans2= traverse(root, -1, y, 0);     
        
        if((ans1[0]==ans2[0]) && (ans1[1]!=ans2[1]))
            return true;
        else 
            return false;
    }
};
