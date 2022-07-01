//all nodes in a sorted way
void nonodes(Node* root,vector<int> &arr){
    if(root==NULL)
    return;
    
    if(root->left!=NULL && root->right!=NULL){
        nonodes(root->left,arr);
        nonodes(root->right,arr);
    }
   else  if(root->left!=NULL){
    arr.push_back(root->left->data);
    nonodes(root->left,arr);
    }
    
    else if(root->right!=NULL){
    arr.push_back(root->right->data);
    nonodes(root->right,arr);
    }
    
}
vector<int> noSibling(Node* node)
{
    vector<int> ans;
    nonodes(node,ans);
    if(ans.size()==0) return {-1};
    sort(ans.begin(),ans.end());
    return ans;
    
}

    
