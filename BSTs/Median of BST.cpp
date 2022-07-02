void inorder(Node* node,vector<int>& v){
    if(node==NULL) return;
    inorder(node->left,v);
    v.push_back(node->key);
    inorder(node->right,v);
}
float findMedian(struct Node *root)
{
      //Code here
      vector<int> ans;
      inorder(root,ans);
      int n=ans.size();
      float median;
      if(n%2==0){
          median=ans[n/2-1]+ans[n/2];
          median=median/2;
      }
      
      else if(n%2!=0){
          median=ans[n/2];
      }
      
      return median;
       
}
