class Solution{
  public:
    // root : the root Node of the given BST
    // target : the target sum
    void inorder(struct Node* node,vector<int>& v){
    if(node==NULL) return;
    inorder(node->left,v);
    v.push_back(node->data);
    inorder(node->right,v);
    }
    int isPairPresent(struct Node *root, int target)
    {
        vector<int> ans;
        inorder(root,ans);
        int low=0;
        int high=ans.size()-1;
        while(low<high){
            int sum=ans[low]+ans[high];
            if(sum==target)
            return 1;
            
            else if(sum<target)
            low++;
            
            else high--;
        }
        
        return 0;
    }
};

