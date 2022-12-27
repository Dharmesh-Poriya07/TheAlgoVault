// https://leetcode.com/problems/construct-string-from-binary-tree/

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
    string tree2str(TreeNode* root) {
        if(nullptr==root)
            return "";
        string ans = "",left="",right="";
        ans = to_string(root->val);
        
        if(nullptr!=root->left){
            left.push_back('(');
            for(char ch : tree2str(root->left)) left.push_back(ch);
            left.push_back(')');
        }else if(nullptr!=root->right){
            left.push_back('(');
            left.push_back(')');
        }
        
        if(nullptr!=root->right){
            right.push_back('(');
            for(char ch : tree2str(root->right)) right.push_back(ch);
            right.push_back(')');
        }
        
        return ans+left+right;
    }
};