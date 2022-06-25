//Given a string check if it is Pangram or not. A pangram is a sentence containing every letter in the English Alphabet.

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string &str) {
        // your code here
        int hash[26]={0};
        for(int i=0;i<str.length();i++){
            if(str[i]>=65 && str[i]<=90)
            hash[str[i]-65]=1;
            
            else if(str[i]>=97 && str[i]<=122)
            hash[str[i]-97]=1;
            
            else continue;
        }
        
        for(int i=0;i<26;i++){
            if(hash[i]==0) //if any char is not present
            return false;
        }
        return true;
    }

};
