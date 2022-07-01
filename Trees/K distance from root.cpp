//Given a Binary Tree of size N and an integer K. Print all nodes that are at distance k from root (root is considered at distance 0 from itself). 
//Nodes should be printed from left to right. If k is more that height of tree, nothing should be printed.

int height(struct Node* node){
    if(node==NULL)
    return 0;
    
    return 1+max(height(node->left),height(node->right));
}
void distance(struct Node* node,vector<int>& arr,int l,int k){
   if(node==NULL)return;
    if(l==k)
    arr.push_back(node->data);
    
   if(node->left!=NULL){ 
    distance(node->left,arr,l+1,k);
   }
if(node->right!=NULL){
    distance(node->right,arr,l+1,k);
} 
}
// function should print the nodes at k distance from root
vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  int heightTree=height(root);
  if(k>heightTree) return {};
  vector<int> ans;
  distance(root,ans,0,k);
  return ans;
}
