class Solution{
  public:
    // Function should return all the ancestor of the target node
    bool solve(struct Node* root,vector<int>& v,int n){
        if(root==NULL)
        return false;
        
        if(root->data==n) return true;
        if(solve(root->left,v,n)==true || solve(root->right,v,n)==true)
        {
            v.push_back(root->data);
            return true;
        }
        
        return false;
    }
    vector<int> Ancestors(struct Node *root, int target)
    {
         // Code here
         vector<int> ans;
         solve(root,ans,target);
         
         return ans;
    }
    
};
