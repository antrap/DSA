//Given an array arr of size N, write a program that returns 1 if array represents Inorder traversal of a BST, else returns 0.
//Note: All keys in BST must be unique.

class Solution{
    public:
    int isRepresentingBST(int arr[], int N)
    {
        // code here
        
        for(int i=0;i<N-1;i++){
            if(arr[i+1]<=arr[i]){ //IN BST weshould have distinct values
            //in inorder traversal of BST elements are sorted
                return 0;
            }
        }
        
        return 1;
    }
};
