//Given two strings of lowercase alphabets and a value K, your task is to complete the given function which tells if  two strings are K-anagrams of each other or not.

//Two strings are called K-anagrams if both of the below conditions are true.
//1. Both have same number of characters.
//2. Two strings can become anagram by changing at most K characters in a string.




class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) {
        // code here
        if(str1.length()!=str2.length())
        return false;
        
        unordered_map<char,int> hash;
        for(int i=0;i<str1.length();i++){
            hash[str1[i]]++;
        }
        
        
        for(int i=0;i<str2.length();i++){
            if(hash.find(str2[i])!=hash.end()  && hash[str2[i]]!=0){ //important test case--when hash[str2[i]]==0 if we decrease then it will be -1 ,-2.......
              //so the number will eventually decrease in our final count
                hash[str2[i]]--;
            }
        }
        
        int count=0;//distinct elements in str1
        for(auto i:hash){
            count+=i.second;
        }
        
        return (count<=k);
    }
};
