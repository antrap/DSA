
void inorder(Node* node,vector<int>& v){
    if(node==NULL) return;
    inorder(node->left,v);
    v.push_back(node->data);
    inorder(node->right,v);
}
Node* balancedTree(vector<int> v,int l,int h){
    if(l>h) return NULL;
    int mid=l+(h-l)/2;
    Node* temp=new Node(v[mid]);
    temp->left=balancedTree(v,l,mid-1);
    temp->right=balancedTree(v,mid+1,h);
    
    return temp;
}

Node* buildBalancedTree(Node* root)
{
	
	vector<int> ans;
	inorder(root,ans);
	root=balancedTree(ans,0,ans.size()-1);
	return root;
	
}

//T.C-O(N)
//S.C-O(N)
