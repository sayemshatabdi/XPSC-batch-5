#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    map<string,string>ans,has;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        if(has.find(a)!=has.end())
        {
            string s=has[a];
            ans[s]=b;
            has.erase(a);
            has[b]=s;
        }
        else
        {
            ans[a]=b;
            has[b]=a;
        }
    }
    cout<<ans.size()<<endl;
    for(auto [x,y]:ans)
    {
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}