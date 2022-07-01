//Function to return the level order traversal line by line of a tree.
vector<vector<int>> levelOrder(Node* node)
{
  //Your code here
  if(node==NULL) return {};
  queue<Node*> q;
  vector<vector<int>> ans;
  q.push(node);
  while(q.empty()==false){
      int size=q.size();
      vector<int> res;
      while(size--){
          Node* temp=q.front();
          q.pop();
          res.push_back(temp->data);
          if(temp->left!=NULL)
          q.push(temp->left);
          
          if(temp->right!=NULL)
          q.push(temp->right);
          
      }
      
      ans.push_back(res);
      
  }
  
  return ans;
}

