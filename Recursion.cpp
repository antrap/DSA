//Given a number and its reverse. Find that number raised to the power of its own reverse.
//Note: As answers can be very large, print the result modulo 109 + 7


long long power(int N,int R)
    {
       //Your code here
       if(R==0) return 1;
       long long half=power(N,R/2)%1000000007;
       long long sq=(half*half)%1000000007;
       if(R%2==0) return sq;
       return (N*sq)%1000000007;
        
    }

//T.C-O(logN)
//S.C-O(1)
