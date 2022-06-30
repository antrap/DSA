/*Given a N x N matrix M. Write a program to find count of all
the distinct elements common to all rows of the matrix. Print count of such elements.
*/

class Solution{
public:
    int distinct(vector<vector<int>> M, int N)
    {
        // code here
        unordered_map<int,int> hash;
        for(int i=0;i<N;i++){
            unordered_set<int> s;
            for(int j=0;j<N;j++){
                if(s.find(M[i][j])==s.end())
                hash[M[i][j]]++;
                
                
                s.insert(M[i][j]);
            }
        }
        int count=0;
        for(auto i:hash){
            if(i.second==N)
            count++;
        }
        
        
        return count;
    }
};
