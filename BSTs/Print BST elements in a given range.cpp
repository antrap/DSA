class Solution {
  public:
  
   void solve(Node* node,int l,int h,vector<int>& ans){
       if(node==NULL) return;
       
       if(node->data>h)
       solve(node->left,l,h,ans);
       
       if(node->data<l)
       solve(node->right,l,h,ans);
       
       if(node->data>=l && node->data<=h){
           solve(node->left,l,h,ans);
       ans.push_back(node->data);
       
       solve(node->right,l,h,ans);
       
       }
       
       
   }
    vector<int> printNearNodes(Node *root, int low, int high) {
        //code here   
        vector<int> res;
        solve(root,low,high,res);
        
        return res;
    }
    
};
