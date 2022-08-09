/*
Following is the structure of Tree Node

class TreeNode 
{
   public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) 
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
*/
void help(TreeNode* root,vector<int> &ans){
    if(root==NULL)
        return ;
    
    help(root->left,ans);
    help(root->right,ans);
    ans.push_back(root->val);
    
}

vector<int> postorderTraversal(TreeNode* root)
{
    if(root==NULL)
        return {};
    vector<int> ans;
    help(root,ans);
    return ans;
}
