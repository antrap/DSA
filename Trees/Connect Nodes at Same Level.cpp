class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your Code Here
       if(root==NULL) return;
       queue<Node*> q;
       q.push(root);
       
        while(q.empty()==false){
         int size=q.size();
        Node* prev=NULL;
        
          while(size--){
          Node* temp=q.front();
          q.pop();
          
          if(prev==NULL)
          prev=temp;
          
          else{
              prev->nextRight=temp;
              prev=temp;
          }
          if(temp->left!=NULL)
          q.push(temp->left);
          
          if(temp->right!=NULL)
          q.push(temp->right);
          
      }
      
  }
  

    }    
      
};
