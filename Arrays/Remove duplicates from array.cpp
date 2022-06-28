//if all the elements are greater than 0 and we want only the size of the new array
class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        for(int i=n-1;i>0;i--){
            if(a[i]==a[i-1])
            a[i]=-1;
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]!=-1)
            count++;
        }
        return count;
    }
};


//returning new size with modification
class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int i=0; 
        for(int j=1;j<n;j++){
            if(a[i]!=a[j]){
            i++;
            a[i]=a[j];
            }
            else a[i]=a[j];
        }
        return i+1;
    }
};
