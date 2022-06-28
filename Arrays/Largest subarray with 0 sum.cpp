class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int> hash;
        int sum=0;
        int res=0;
        for(int i=0;i<n;i++){
            sum+=A[i];
            
            if(sum==0) return i+1;
           
            else{
            if(hash.find(sum)!=hash.end()){
                res=max(res,i-hash[sum]);
            }
            else 
            hash[sum]=i;
            
            }
        }
        
        return res;


    }
};
