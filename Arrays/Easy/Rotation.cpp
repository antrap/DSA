//Given an ascending sorted rotated array Arr of distinct integers of size N. The array is right rotated K times. Find the value of K.
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int minele=arr[0];
	   int ans=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]<minele){
	            minele=arr[i];
	            ans=i;
	        }
	    }
	    
	    return ans;
	}

};
