//Input:
//N = 5, S = 12
//Output:
//93000
//Explanation:
//Sum of elements is 12. Largest possible 5 digit number is 93000 with sum 12.




class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        // Your code here
        int arr[10]={0,1,2,3,4,5,6,7,8,9};
        int i=9;
        string ans="";
        while(n>0){
            if(arr[i]<=sum){
                ans+=to_string(arr[i]);
                n--;
                sum-=arr[i];
            }
            
            else if(arr[i]>sum)
            i--;
            
        }
        
        if(sum!=0) return "-1";
      
        return ans;
    }
};
