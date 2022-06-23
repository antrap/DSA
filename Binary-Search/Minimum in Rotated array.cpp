//Suppose an array of length n sorted in ascending order is rotated between 1 and n times. 
//Given the sorted rotated array nums of unique elements, return the minimum element of this array.
//You must write an algorithm that runs in O(log n) time.

class Solution {
public:
    int findMin(vector<int>& nums) {
            int n=nums.size();
        int low=0;
            int high=n-1;
            
           
            while(low<=high){
                    if(nums[low]<=nums[high]) //if one element is present
                            return nums[low];
                   
                    int mid=low+(high-low)/2;
                    if(nums[mid]>nums[n-1])
                            low=mid+1;
                    
                    else high=mid;
            }
            
     return -1;
    }
};



//T.C-O(N)
//S.C-O(1)
