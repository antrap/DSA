/*Given a string of S as input. Your task is to write a program to remove or delete the minimum
number of characters from the string so that the resultant string is a palindrome.*/

class Solution{
  public:
    int minimumNumberOfDeletions(string S) { 
        // code here
        string S1=S;
        reverse(S1.begin(),S1.end());
        int m=lcs(S,S1);
        return S.length()-m;
        
    } 
    int lcs(string a,string b){
        int n=a.length();
        int m=b.length();
        int dp[n+1][m+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0 || j==0)
                dp[i][j]=0;
            }
        }
        
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(a[i-1]==b[j-1])
                dp[i][j]=1+dp[i-1][j-1];
                
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
};
