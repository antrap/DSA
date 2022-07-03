void insert(stack<int>& s,int temp){
    if(s.empty()==true || s.top()<temp){
        s.push(temp);
        return;
    }
    
    int n=s.top();
    s.pop();
    insert(s,temp);
    s.push(n);
}
void SortedStack :: sort()
{
    if(s.empty()==true) return;
  int x=s.top();
  s.pop();
  sort();//sort the rest of the stack
  insert(s,x);//insert the element to the correct place in the sorted stack(n-1)
}
