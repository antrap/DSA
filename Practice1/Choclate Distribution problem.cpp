/*Input:
N = 8, M = 5
A = {3, 4, 1, 9, 56, 7, 9, 12}
Output: 6
Explanation: The minimum difference between 
maximum chocolates and minimum chocolates 
is 9 - 3 = 6 by choosing following M packets :
{3, 4, 9, 7, 9}.*/

long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(),a.end());
        long long diff;
        diff=a[m-1]-a[0];
        for(long long i=m;i<n;i++){
            diff=min(diff,a[i]-a[i-m+1]);
        }
        
        return diff;
    }   
