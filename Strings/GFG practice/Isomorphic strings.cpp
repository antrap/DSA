//Two strings str1 and str2 are called isomorphic if there is a one-to-one mapping possible for every character of str1 to every character of str2. And all occurrences of every character in ‘str1’ map to the same character in ‘str2’.

Examples: 

Input:  str1 = "aab", str2 = "xxy"
Output: True
'a' is mapped to 'x' and 'b' is mapped to 'y'.


bool areIsomorphic(string str1, string str2)
    {
        if(str1.length()!=str2.length())
        return false;
        // Your code here
        string temp1="";
        string temp2="";
        int j=0;
        int i;
        for(i=0;i<str1.length()-1;i++){
            if(str1[i]!=str1[i+1]){
                temp1+=str1[i];
                temp1+=to_string(i+1-j);
                j=i+1;
            }
        }
        
        temp1+=str1[i];
        temp1+=to_string(i+1-j);
        
        j=0;
        i=0;
        for(i=0;i<str2.length()-1;i++){
            if(str2[i]!=str2[i+1]){
                temp2+=str2[i];
                temp2+=to_string(i+1-j);
                j=i+1;
            }
        }
        
        temp2+=str2[i];
        temp2+=to_string(i+1-j);
        
        if(temp1.length()!=temp2.length())
        return false;
        
        int m=1,k=1;
        while(m<temp1.length()){//becuase if string lengths aren't equal it will already be return false
            if(temp1[m]!=temp2[k])
              return false;     
            
            else m=m+2;
        }
      return true;  
    }
