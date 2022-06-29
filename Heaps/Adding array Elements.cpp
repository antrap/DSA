/*Given an array Arr[] of size N and an integer K,
you have to add the first two minimum elements of the array until all the elements 
are greater than or equal to K and find the number of such operations required.*/

class Solution{
  public:
    int minOperations(int arr[], int n, int k) {
        // code here
     priority_queue<int,vector<int>,greater<int>> pq;
     for(int i=0;i<n;i++){
         pq.push(arr[i]);//1 2 3 9 10 12
     }
     
     int count=0;
     while(pq.top()<k){
         int first=pq.top();
         pq.pop();
         
         int second=pq.top();
         pq.pop();
         
         pq.push(first+second);
         count++;
     }
     return count;
    }
};
