#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        if(mp.size()<=1)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int mx=INT_MIN;
            for(auto[x,y]:mp)
            {
                mx=max(y,mx);
            }
            int ans=0;
            while(mx<n)
            {
                int r=n-mx;
                int add=mx;
                ans++;
                ans+=min(r,add);
                mx+=min(r,add);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}