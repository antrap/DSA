/*Input:
N = 3
list = {Geeks, For, Geeks}
Output: 1
Explanation: 'Geeks' is the only word that 
appears twice.
*/

class Solution
{
    public:
        int countWords(string list[], int n)
        {
            
           unordered_map<string,int> hash;
           for(int i=0;i<n;i++){
               hash[list[i]]++;
           }
           int words=0;
            for(auto i:hash){
                if(i.second==2)
                words++;
            }
            
            
            
            return words;
        }

};
