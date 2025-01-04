#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<int> v(n),ans;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        mp[v[i]]=i;
    }
    sort(v.begin(),v.end());
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        auto it1=lower_bound(v.begin(),v.end(),a);
        auto it2 =upper_bound(v.begin(),v.end(),b);
        int count = it2 - it1;
        ans.push_back(count);   
    }
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}