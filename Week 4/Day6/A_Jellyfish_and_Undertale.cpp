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
        int a,b,n;
        cin>>a>>b>>n;
        vector<int>v(n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int ans=b;
        for(int i=0;i<n;i++)
        {
            ans+=min(v[i],a-1);
        }
        cout<<ans<<endl;
    }
    return 0;
}