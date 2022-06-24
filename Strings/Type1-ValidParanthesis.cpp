class Solution {
public:
    bool isValid(string s) {
        stack<char> temp;
            for(int i=0;i<s.length();i++){
                    if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                            temp.push(s[i]);
                    
                    
                    else if(s[i]==')'){
                            if(temp.empty()==true)
                                    return false;
                            
                            if(temp.top()=='(' )
                                    temp.pop();
                            
                            else return false;
                    }
                    
                     else if(s[i]=='}'){
                              if(temp.empty()==true)
                                    return false;
                            if(temp.top()=='{')
                                    temp.pop();
                             
                             
                             else return false;
                    }
                    
                     else if(s[i]==']'){
                              if(temp.empty()==true)
                                    return false;
                            if(temp.top()=='[')
                                    temp.pop();
                             
                             else return false;
                    }
            }
            
            
            return temp.empty();
            
    }
};


//T.C-O(N)
//S.C-O(n)
