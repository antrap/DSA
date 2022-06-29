//Not so optimised solution run time error
public:
    vector<int> kthLargest(int k, int arr[], int n) {
        // code here
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=kth_largest(arr,k,i+1);
        }
        
        return ans;
    }
    int kth_largest(int a[],int K,int N){
        priority_queue<int> pq;
        for(int i=0;i<N;i++){
            pq.push(a[i]);//elements stored in decreasing order in stack
        }
        
        if(pq.size()<K)
        return -1;
        
        for(int i=0;i<K-1;i++){
            pq.pop();
        }
        return pq.top();
    }


---------------------------------------------------------
  //Optimised solution
  /*k = 4, n = 6
arr[] = {1, 2, 3, 4, 5, 6}
Output:
-1 -1 -1 1 2 3*/
//Logic---always keep thsize of min heap k  
   vector<int> kthLargest(int k, int arr[], int n) {
        // code here
        vector<int> ans;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<k;i++){
            pq.push(arr[i]);
            if(i<k-1)
            ans.push_back(-1);
        }
        ans.push_back(pq.top());
        for(int i=k;i<n;i++){
            pq.push(arr[i]);
            pq.pop();
            ans.push_back(pq.top());
        }
        
        return ans;
    }
