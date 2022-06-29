/*Input:
K = 4
arr[][]={{1,2,3,4}{2,2,3,4},
         {5,5,6,6},{7,8,9,9}}
Output:
1 2 2 2 3 3 4 4 5 5 6 6 7 8 9 9 */

class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        vector<int> ans;
        priority_queue<int> pq;
        for(int i=0;i<K;i++){
            for(int j=0;j<K;j++){
                pq.push(arr[i][j]);
            }
        }
        //9 8 7 6 5 4 3 2 1
        while(pq.empty()==false){
            ans.push_back(pq.top());
            pq.pop();
        }
        
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
