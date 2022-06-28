 int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
      unordered_set<int> hash;
      for(int i=0;i<n;i++){
          hash.insert(a[i]);
      }
     int count=0;
      for(int i=0;i<m;i++){
          if(hash.find(b[i])!=hash.end()){
             count++; 
             hash.erase(b[i]);//remove that common
             //element from the hash because if there is a same element in the second array 
             //it will again make a count
             //since we are finding intersection even if the number appears two times each in both the arrays
             //we will count only once
             
             
          }
          
      }
      
      
      return count;
    }
