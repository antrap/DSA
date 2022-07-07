//My try-------
class Solution{
public:
    pair pi{
        int first;
        int second;
    };
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        if(arr[n-1]>arr[n-2])
        swap(arr[n-1],arr[n-2]); //last two elements 3 4-->4 3
        priority_queue<pi,vector<pi>,greater<pi>> q;
        int i=n-1;
        while(i>=0){
            if(arr[i]<arr[i-1]){
                q.push({arr[i],i});
                i--;
            }
            else if(arr[i]>arr[i-1]){
                while(arr[i]>q.top()) {
                    q.pop();
                }
                
                int j=q.top().second;
                swap(arr[i-1],arr[j
                
                
                reverse(arr,i,N);
                break;
            }
            
            
            
        }
    }
};
                                  
                                  
                                  
///Correct ----Intution same as above
                                  class Solution{
public:
    void reverse(vector<int>& arr,int i,int j){
        while(i<j) swap(arr[i++],arr[j--]);
    }
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        if(N==1) return arr;
        int i=N-2;
        while(i>=0 && arr[i]>=arr[i+1]){
            i--;//1 7 5 4 3
        } 
        if(i>=0){
            int j=N-1;
            while(arr[j]<=arr[i])//1 5 7 4 3 2
                j--;
            
            swap(arr[i],arr[j]);
        }
        
        reverse(arr,i+1,N-1);
        return arr;
    }
};

                                  
