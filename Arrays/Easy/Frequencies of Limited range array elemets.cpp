/*Given an array A[] of N positive integers which can contain integers from 1 to P where
elements can be repeated or can be absent from the array. Your task is to count the frequency of all elements from 1 to N.
*/


//Using HashMap
//T.C-O(N)
//S.C-O(N)
void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
       //array elements can be from 1 to P
       //count frequency of elements from 1 to N
       unordered_map<int,int> hash;
       for(int i=0;i<N;i++){
           hash[arr[i]]++;
       }
       for(int i=1;i<=N;i++){
           if(hash.find(i)!=hash.end())
           arr[i-1]=hash[i];
           
           else arr[i-1]=0;
       }
    }
