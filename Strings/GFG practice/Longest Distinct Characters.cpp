//Wrong approach

int longestSubstrDistinctChars (string S)
{
    // your code here
    int count=0;
    int res=INT_MIN;
    unordered_map<char,int> hash;
    for(int i=0;i<S.length();i++){
        hash[S[i]]++;
       count++;
        if(hash[S[i]]!=1){
            res=max(res,count-1);
            hash[S[i]]--;
            count=1;
        }  
    }
    
    return res;
}

--------------------------------------------------------------------------------------
  
  //Correct code
