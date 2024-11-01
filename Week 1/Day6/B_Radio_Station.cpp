#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    map<string,string>mp,cmd;
    for(int i=0;i<n;i++)
    {
        string a,b;
        cin>>a>>b;
        mp[b]=a;
    }
    for(int i=0;i<m;i++)
    {
        string c,d;
        cin>>c>>d;
        d.erase(d.size()-1);
        cout<<c<<" "<<d<<"; #"<<mp[d]<<endl;
    }
    return 0;
}