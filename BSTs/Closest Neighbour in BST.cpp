//Using Inorder traversal
void inorder(Node* node,vector<int>& v){
    if(node==NULL) return;
    inorder(node->left,v);
    v.push_back(node->key);
    inorder(node->right,v);
}
int findMaxForN(Node* root, int N)
{
    vector<int> ans;
    inorder(root,ans);
    for(int i=ans.size()-1;i>=0;i--){
        if(ans[i]<=N)
        return ans[i];
    }
}
----------------------------------------------------
    
    //Recursive
    void solver(Node *root, int n , int &ans)
{
    if(!root) return ;
    if(root->key <=n) ans= max(ans, root->key);
    if(n<root->key) solver(root->left, n,ans);
    if(n>root->key) solver(root->right, n, ans);
}
