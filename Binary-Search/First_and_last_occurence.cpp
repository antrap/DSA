class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
            vector<int> res;
            res.push_back(first_index(nums,target));
            res.push_back(last_index(nums,target));
            
            return res;
        
    }
        
        
        int first=-1;
        int first_index(vector<int>& arr,int x){
              int low=0 ;
                int high=arr.size()-1;
                while(low<=high){
                        int mid=low+(high-low)/2;
                        if(arr[mid]==x){
                                first=mid;
                                high=mid-1;
                        }
                        
                        else if(arr[mid]<x)
                                low=mid+1;
                        
                        else high=mid-1;
                }
                
                return first;
        }
        
        int last=-1;
        int last_index(vector<int>& arr,int x){
              int low=0 ;
                int high=arr.size()-1;
                while(low<=high){
                        int mid=low+(high-low)/2;
                        if(arr[mid]==x){
                                last=mid;
                                low=mid+1;
                        }
                        
                        else if(arr[mid]<x)
                                low=mid+1;
                        
                        else high=mid-1;
                }
                
                return last;
        }
};
