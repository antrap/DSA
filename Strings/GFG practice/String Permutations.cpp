vector<string> permutation(string S)
    {
        vector<string> ans;
        permute(S,ans,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
    void permute(string a,vector<string>& res,int low){
        if(low>=a.length()){
            res.push_back(a);
            return;
        }
        
        for(int i=low;i<a.length();i++){
            swap(a[i],a[low]);
            permute(a,res,low+1);
            swap(a[i],a[low]); 
        }
        
      
      
      //T.C-O(N*N!)
      //N!-total permutations
      //n to print
