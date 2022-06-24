class Solution {
public:
    int maxVowels(string s, int k) {
       int maxCount=0;
            for(int i=0;i<k;i++){
                    if(isVowel(s[i])==true)
                            maxCount++;
            }
            int count=maxCount;
            for(int j=k;j<s.length();j++){
                    if(isVowel(s[j])==true)
                            count++;
                    
                    if(isVowel(s[j-k])==true)
                            count--;
                    
                    maxCount=max(maxCount,count);
            }
            
            
            return maxCount;
    }
    
        bool isVowel(char x){
                
                    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
                          return true;
                
                     else return false;
            
        }
};


//T.C-O(n)
//S.C-O(N)
