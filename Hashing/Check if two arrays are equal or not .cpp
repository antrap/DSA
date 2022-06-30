/*iven two arrays A and B of equal size N, the task is to find if given arrays are equal or not. Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though.
Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.*/

 bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        if(A.size()!=B.size())
        return false;
        
       unordered_map<ll,ll> hash;
       for(int i=0;i<N;i++){
           hash[A[i]]++;
       }
       
       for(int i=0;i<N;i++){
           if(hash.find(B[i])==hash.end())
           return false;
           
           else{
               hash[B[i]]--;
           }
       }
        for(auto i:hash){
            if(i.second!=0)
            return false;
        }
        
        return true;
    }
