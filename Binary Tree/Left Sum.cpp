/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/


long long leftSum(BinaryTreeNode<int> *root)
{
    if(root==NULL||(root->left==NULL && root->right==NULL))
        return 0;
    
    long long ans=0;
    queue<BinaryTreeNode<int> *>x;
    x.push(root);
    
    while(x.size()!=0){
        int size=x.size();
        while(size--){
            if(x.front()->left!=NULL){
                ans+=x.front()->left->data;
                x.push(x.front()->left);
            }
            if(x.front()->right!=NULL)
                x.push(x.front()->right);
            
            x.pop();
        }
    }
    
    return ans;
}
