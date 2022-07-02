bool search(Node* root, int x) {
    // Your code here
    if(root==NULL) return 0;
    if(root->data==x) return 1;
    
    if(root->data<x)
     search(root->right,x);
     
     else search(root->left,x);
}


//T.C-O(H)
//S.C-O(1)
