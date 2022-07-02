
class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
	int closest=INT_MAX;
    int minDiff(Node *root, int K)
    {
        //Your code here
        if(root==NULL)  return -1;
      
        else if(root->data<=K){
            closest=min(closest,abs(root->data-K));
            minDiff(root->right,K);
        }
        else{
            closest=min(closest,abs(root->data-K));
            minDiff(root->left,K);
        }
        
        
        return closest;
        
    }
};
