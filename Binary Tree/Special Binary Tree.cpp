/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

bool isSpecialBinaryTree(BinaryTreeNode<int>* root)
{
    if(root->left==NULL && root->right==NULL)
        return true;
    
    if((root->left!=NULL && root->right==NULL)||(root->left==NULL && root->right!=NULL))
        return false;
    
    bool left_ans=isSpecialBinaryTree(root->left);
    bool right_ans=isSpecialBinaryTree(root->right);
    
    return left_ans && right_ans;
    
}
