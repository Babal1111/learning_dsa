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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preorderIndex = 0;
        int size= preorder.size();

        return solve(preorder,inorder,preorderIndex,0,size-1,size-1);

        
    }
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int &preorderIndex,int inorderStart,int inorderEnd,int size){

        if(preorderIndex >= preorder.size() || inorderStart>inorderEnd ){
            return NULL;
        }

        int rootEle = preorder[preorderIndex++];
        TreeNode* temp = new TreeNode(rootEle);

        int position = findPosition(inorder,rootEle);

        temp->left = solve(preorder,inorder,preorderIndex,inorderStart,position-1,size);
        temp->right = solve(preorder,inorder,preorderIndex,position+1,inorderEnd,size);


        return temp;
    }

    int findPosition(vector<int>& inorder,int rootEle){
        for(int i=0;i<inorder.size();i++){
            if(inorder[i]==rootEle){
                return i;

            }
        }
        return -1;
    }

    
};