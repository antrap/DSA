//Using division operator
 vector<long long int>ans;
        long long int totalproduct=1;
        int countzero=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                countzero++;
            }
            else
            {
            totalproduct*=nums[i];
            }
            
        }
        if(countzero>0)
        {
           if(countzero==1)
           {
                for(int i=0;i<n;i++)
                {
                    if(nums[i]==0)
                      ans.push_back(totalproduct);
                      else
                      {
                         ans.push_back(0); 
                      }
                }
                
            }
            else
            {
                for(int i=0;i<n;i++)
                {
                     ans.push_back(0);
                }
            }
        }
               
        
        else
        {
            for(int i=0;i<n;i++)
        {
            long long int temp=totalproduct/nums[i];
            ans.push_back(temp);
        }
        }
        return ans;
}

-----------------------------------------------------------------------------------
  
  
  vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
      if(n==0 || n==1)
      return {n};
      
      //for n>=2 
        vector<long long int> prefix(n);
        vector<long long int> suffix(n);
        
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]*nums[i];
        }
        
        suffix[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]*nums[i];
        }
        vector<long long int> ans;
        ans.push_back(suffix[1]); 
        for(int i=1;i<n-1;i++){
            ans.push_back(prefix[i-1]*suffix[i+1]);
        }
        ans.push_back(prefix[n-2]);
        return ans;
        
        
    }
