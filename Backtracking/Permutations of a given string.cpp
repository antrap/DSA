	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    set<string> st;//ABB ---->ABB BAB BBA
		    //set is used to store all the permutations in ordered way only 1 time
		    //if we dont use set then we can have duplicate permutation results.
		    vector<string> ans;
		    Permute(S,st,0,S.length()-1);
		    for(auto i:st){
		        ans.push_back(i);
		    }
		    return ans;
		}
		void Permute(string x,set<string>& res,int l,int r){
		    
		        if(l==r)
		        res.insert(x);
		       for(int i=l;i<x.length();i++){ 
		        swap(x[i],x[l]);
		        Permute(x,res,l+1,r);
		        swap(x[i],x[l]);
		    }
		    
		}
