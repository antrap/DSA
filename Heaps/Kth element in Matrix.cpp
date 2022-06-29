int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  priority_queue<int,vector<int>,greater<int>> pq;
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          pq.push(mat[i][j]);
      }
  }
  for(int i=0;i<k-1;i++){
      pq.pop();
  }
  return pq.top();
}


-------------------------------------------------------------------------
  //Try solving with different methods
