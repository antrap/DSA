class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> hash;
            for(int i=0;i<s.length();i++){
                    hash[s[i]]++;
            }
            
            
            for(int i=0;i<t.length();i++){
                    if(hash.find(t[i])!=hash.end())
                        hash[t[i]]--;
                    
                    else return false;
                    
                }
            
            for(auto i:hash){
                    if(i.second!=0)
                            return false;
            }
            
            
            return true;
    }
};



//Important test case
--->s1="a"
----->s2="ab"
