class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       unordered_map<char,int> hash;
       for(int i=0;i<S.length();i++){
           hash[S[i]]++;
       }
       //If we traverse the hash to find if hash.second==1
       //it will give us wrong results as the elements can be inside the hashmap in any order
       for(int i=0;i<S.length();i++){
           if(hash[S[i]]==1)
           return S[i];
       }
       
       return '$';
      
    }

};


//T.C-O(N)
//S.C-O(N)
