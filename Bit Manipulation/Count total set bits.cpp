//One approach--time limit exceeded
class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int setbits(int N){
        int count=0;
        while(N!=0){
            if(N&1==1){
                count++;
            }
            N=N>>1;
        }
        return count;
    }
    int countSetBits(int n)
    {
        // Your logic here
        int total=0;
        while(n!=0){
            total+=setbits(n);
            n=n-1;
        }
        
        return total;
    }
};
---------------------------------------------------------------------
  
