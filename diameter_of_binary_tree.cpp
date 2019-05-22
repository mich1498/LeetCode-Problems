/*
* Given a binary tree detemine the diameter of a the binary tree
* eg : Input = [1,2,3,4,5] 
* output: 3 ie the diameter is either [4,2,1,3] or [5,2,1,3]
*/



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//My solution uses depth first seach. intuititon is if we know the max length of arrows L,R for each child then the best
//path is L+R+1 nodes 
class Solution {
private: 
    int result; 
public:
    int diameterOfBinaryTree(TreeNode* root) {
        result =1 ; 
        depth_of_tree(root); 
        return result -1; 
    }
    int depth_of_tree(TreeNode* node){
        if (node == NULL ) return 0;
        int L = depth_of_tree(node->left); 
        int R = depth_of_tree(node->right);
        result= max(result, L+R+1); 
        return max(L,R)+1;
    }
};
