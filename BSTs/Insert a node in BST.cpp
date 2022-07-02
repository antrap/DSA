Node* insert(Node* root, int Key) {
    if(root==NULL){
       return new Node(Key);
    }
    
    if(root->data==Key) return root;//Don,t have to add any node
    
    if(root->data<Key) root->right=insert(root->right,Key);
    
    if(root->data>Key)  root->left=insert(root->left,Key);
    
    
    return root;
}


//T.C-O(H)
//S.C-O(H)
