//Given a Binary Search Tree (BST) and a range l-h(inclusive), count the number of nodes in the BST that lie in the given range.

//The values smaller than root go to the left side
//The values greater and equal to the root go to the right side

class Solution{
public:
    int getCount(Node *root, int l, int h)
    {
      // your code goes here
      if(root==NULL) return 0;
  
  if(root->data==l && root->data==h) //since l and h are same so its a BST
  return 1; //left subtree and right subtree have unequal values
 
  
  if(root->data>=l && root->data<=h)
  return 1+getCount(root->left,l,h)+getCount(root->right,l,h);
  
  
  else if(root->data<l)
  return getCount(root->right,l,h);
  
  else if(root->data>h)
  return getCount(root->left,l,h);
    }
};

//Time Complexity: O(N)
//Expected Auxiliary Space: O(Height of the BST).
