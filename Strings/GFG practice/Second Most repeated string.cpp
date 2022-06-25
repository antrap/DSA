class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        unordered_map<string,int> hash;
        int firstmax=0;
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
            firstmax=max(firstmax,hash[arr[i]]);
        }
        
        
        int secmax=0;
        string s;
        for(auto i:hash){
            if(i.second<firstmax){
                secmax=max(secmax,i.second);
                if(i.second==secmax)
                s= i.first;
            
            }
        }
        if(secmax==0)
        return "";
        
        
        return s;
        
    }
};
