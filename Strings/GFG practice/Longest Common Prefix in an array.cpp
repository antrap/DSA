//Complex solution done by own---3/500 test case pass
class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
       
        int minLenIndex=0;
        int minNum=arr[0].length();
        for(int i=1;i<N;i++){
            if(arr[i].length()<minNum){
                minNum=arr[i].length();
                minLenIndex=i;
            }
        }
        
        vector<string> s;
        for(int i=0;i<N;i++){
            s.push_back(commonPrefix(arr[i],arr[minLenIndex]));
        }
        
        int minindex=INT_MAX;
        int minNumber=s[0].length();
        for(int i=0;i<s.size();i++){
            if(s[i].length()<minNumber){
                minNumber=s[i].length();
                minindex=i;
            }
        }
        
    
        
        return s[minindex];
        
    }
    string commonPrefix(string a,string b){
        string ans="";
        int n=a.length();
        int m=b.length();
        for(int i=0;i<m;i++){
            if(a[i]==b[i])
            ans+=a[i];
            
            else break;
        }
        return ans;
    }
};




----------------------------------------------------------------------------
  
  
  
  //Another solution easy but 3/500 test cases pass
   // your code here
        string prefix=arr[0];
        for(int i=1;i<N;i++){
            prefix=commonPrefix(arr[i],prefix);
        }
        return prefix;
    }
    string commonPrefix(string a,string b){
        string ans="";
        int len=min(a.length(),b.length());
        for(int i=0;i<len;i++){
            if(a[i]==b[i])
            ans+=a[i];
            
            else break;
        }
        
        return ans;
