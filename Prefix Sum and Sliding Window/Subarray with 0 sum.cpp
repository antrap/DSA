 bool subArrayExists(int arr[], int n)
    {
        //Your code here
      int prefix[n];
      unordered_set<int> hash;
      prefix[0]=arr[0];
      hash.insert(prefix[0]);
      for(int i=1;i<n;i++){
          prefix[i]=prefix[i-1]+arr[i];
          if(prefix[i]==0)
          return true;
          
          else if(hash.find(prefix[i])!=hash.end())
          return true;
          
          else hash.insert(prefix[i]);
      }
      
      return false;
        
    }
