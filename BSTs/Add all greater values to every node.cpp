//A trial
void inorder(Node* node,vector<int>& v){
    if(node==NULL) return;
    inorder(node->left,v);
    v.push_back(node->data);
    inorder(node->right,v);
}
// modify the BST and return its root
void solve(Node* root,unordered_map<int,int>& mp){
    vector<int> ans;
    inorder(root,ans);
    int n=ans.size();
    vector<int> suffix(n);
    suffix[n-1]=ans[n-1];
    mp[ans[n-1]]=suffix[n-1];
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]+ans[i];
        mp[ans[i]]=suffix[i];
    }
    
}


Node* modify(Node *root)
{
   if(root==NULL)  return NULL;
   root->data=mp[root->data];
   modify(root->left);
   modify(root->right);
}
---------------------------------------------------------------------------------
  //correct solution
  void helper(Node* node,int& sum){
    if(node==NULL) return;
    
    helper(node->right,sum);
    sum+=node->data;
    node->data=sum;
    helper(node->left,sum);//already we will have sum of the root and its right subtree
    //when recursion comes to left subtree it will already have sum of the trees right subtree and 
    //that root
}
// modify the BST and return its root
Node* modify(Node *root)
{
    // Your code here
    int sum=0;
    helper(root,sum);
    return root;
}
