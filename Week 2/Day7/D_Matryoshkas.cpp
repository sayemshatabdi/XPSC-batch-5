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
        map<int,int>mp;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int val=v[i];
            if(mp[val]!=0)
            {
                ans++;
                while(mp[val]>0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}