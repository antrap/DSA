class Solution{
public:

    void solve(vector<int>& v,int N){
        
        if(N>0){
            v.push_back(N);
            solve(v,N-5);
        }
        v.push_back(N);//the negative or zero value
      
    }
    
    
    vector<int> pattern(int N){
        // code here
        vector<int> v;
        solve(v,N);
        return v;
    }
};
