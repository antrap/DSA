//Important test case:To check whether string 2 can be found by rotating either in left orright direction
bool isRotated(string str1, string str2)
    {
        // Your code here
        return shiftleft(str1,str2) || shiftright(str1,str2);
    }
    bool shiftleft(string x,string y){
        int n=x.length();
        int m=y.length();
        
        if(n!=m) return false;
        int i;
        for( i=2;i<n;i++){
            if(x[i]!=y[i-2])
            return false;
        }
        if(x[0]!=y[m-2] || x[1]!=y[m-1]){
        return false;
        }
        
        
        return true;
    }
    
    bool shiftright(string x,string y){
        int n=x.length();
        int m=y.length();
        
        if(n!=m) return false;
         int j;
        for( j=n-3;j>=0;j--){
            if(x[j]!=y[j+2])
            return false;
        }
        
        if(x[n-1]!=y[1] || x[n-2]!=y[0]){
        return false;
        }
        
        
        return true;
    }
