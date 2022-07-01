class Solution{
  public:
    /*You are required to complete below method */
    int maxLevelSum(Node* root) {
        // Your code here
        int maxsum=INT_MIN;
        queue<Node*> q;
        q.push(root);
        while(q.empty()==false){
            int size=q.size();
            int sum=0;
            while(size--){
                Node* temp=q.front();
                q.pop();
                sum+=temp->data;
                if(temp->left!=NULL)
                q.push(temp->left);
                
                if(temp->right!=NULL)
                q.push(temp->right);
            }
            if(sum>maxsum)
            maxsum=sum;
        }
        return maxsum;
    }
};
