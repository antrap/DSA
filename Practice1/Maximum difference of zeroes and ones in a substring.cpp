class Solution{
public:	
	int maxSubstring(string S)
	{
	   //Using Kadane's Algorithm
	    int currSum=0;
	    int res=INT_MIN;
	    for(int i=0;i<S.length();i++){
	        if(currSum<0)
	        currSum=0;
	        
	        if(S[i]=='0'){
	            currSum++;
	        }else currSum--;
	        
	        res=max(currSum,res);
	    }
	    
	    if(res==0)
	    return -1;
	    
	    return res;
	    
	}
};
/* int n=S.length();
	    int zeroes[n];
	    int ones[n];
	    int count_zero=0;
	    int count_one=0;
	    for(int i=0;i<n;i++){
	        if(S[i]=='0')
	        count_zero++;
	        
	        else if(S[i]=='1')
	        count_one++;
	        
	        zeroes[i]=count_zero;
	        ones[i]=count_one;
	    }
	    o(N2)
	    */
