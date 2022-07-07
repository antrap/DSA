vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         int n=intervals.size();
         sort(intervals.begin(),intervals.end());
         vector<vector<int>> ans;
         int j=0;
         int i;
         for(i=1;i<n;i++){
             if(intervals[j][1]>=intervals[i][0]){
                 intervals[j][1]=max(intervals[j][1],intervals[i][1]);
             }
             else{
                 ans.push_back(intervals[j]);
                 intervals[j]=intervals[i];
             }
         }
         if(i==n) ans.push_back(intervals[j]);
         
         return ans;
    }
