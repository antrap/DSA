class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
            int m=needle.length();
            for(int i=0;i<=n-m;i++){
                    int j;
                    for(j=0;j<m;j++){
                            if(haystack[i+j]!=needle[j])
                                    break;
                    }
                    
                    
                    
                    if(j==m)
                            return i;
            }
            
            
            return -1;
            
            
    }
};

//T.C-O(n*m)
//S.C-O(1)
