#include<bits/stdc++.h>
#include<set>;//Set Class is used to find distinct numbers,it avoids duplicate 
using namespace std;
int main()
{
    set<int>obj;
    int n;
    cin>>n;//number of levels
    int p,q;
    cin>>p;
    for (int i=0;i<p;i++)
    {
        int level;
        cin>>level;
        obj.insert(level);
    }
      cin>>q;
    for (int i=0;i<q;i++)
    {
        int level;
        cin>>level;
        obj.insert(level);
    }
if(obj.size()==n)
cout<<"I become the guy.";
else
cout<<"Oh, my keyboard!";
return 0;
}