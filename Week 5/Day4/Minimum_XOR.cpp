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
        int n,XOR=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            XOR^=v[i];
        }
        int ans=XOR;
        for(int i=0;i<n;i++)
        {
            int cur=XOR^v[i];
            ans=min(ans,cur);
        }
        cout<<ans<<endl;
    }
    return 0;
}