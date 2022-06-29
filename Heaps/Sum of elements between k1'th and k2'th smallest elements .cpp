long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        // Your code goes here
        priority_queue<long long,vector<long long>,greater<long long>> pq;
        for(long long i=0;i<N;i++){
            pq.push(A[i]);
        }
        for(long long j=0;j<K1;j++){
            pq.pop();
        }
        long long sum=0;
        for(long long j=0;j<K2-K1-1;j++){
            sum+=pq.top();
            pq.pop();
        }
        
        return sum;
    }
