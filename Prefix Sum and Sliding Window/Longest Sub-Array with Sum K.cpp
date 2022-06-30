//What,s wrong in this??
int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        int prefix[N+1];
        unordered_map<int,int> hash;
        prefix[0]=0;
        hash[0]=0;
        int res=0;
        for(int i=1;i<N+1;i++){
            prefix[i]=prefix[i-1]+A[i-1];
            
            if(hash.find(prefix[i]-K)!=hash.end())
            res=max(res,i-hash[prefix[i]-K]);
            
          //if the number prefix sumoccurs again we will not insert in the hash map
            //because we already have a value with lower index so
            // our subarrAY size will be large.
            if(hash.find(prefix[i])==hash.end())
            hash[prefix[i]]=i;
          
        }
        return res;
    } 
