#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        mp[a]++;
    }
    int ans=INT_MIN;
    for(auto [x,y] :mp)
    {
        ans=max(ans,y);
    }
    cout<<ans;
    return 0;
}