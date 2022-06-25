//Input:
//str = aaaabbbccc
//Output: a4b3c3
//Explanation: a repeated 4 times consecutively b 3 times, c also 3 times.

string encode(string src)
{     
  //Your code here 
  string ans="";
  int lowindex=0;
  for(int i=0;i<src.length();i++){
      if(src[i]!=src[i+1]){
          ans+=src[i];
          ans+=to_string(i+1-lowindex); //because it is an integer 
          //in order to add it to the string we have to first convert it to string from integer
          lowindex=i+1;
          
      }
  }
  return ans;
}     
 
//T.C-o(N)
//S.C-O(1)
