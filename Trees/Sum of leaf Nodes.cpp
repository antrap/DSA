void solve(Node* node,int &sum){
    if(node==NULL) return;
    if(node->left==NULL && node->right==NULL)  sum+=node->data;
    
    solve(node->left,sum);
    solve(node->right,sum);
}
int sumLeaf(Node* root)
{
    // Code here
    int sumleaves=0;
    solve(root,sumleaves);
    return sumleaves;
    
}
