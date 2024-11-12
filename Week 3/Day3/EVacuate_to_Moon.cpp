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
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>cap(n);
        for(int i=0;i<n;i++)
        {
            cin>>cap[i];
        }
        vector<int>p(m);
        for(int i=0;i<m;i++)
        {
            cin>>p[i];
        }
        sort(cap.rbegin(),cap.rend());
        sort(p.rbegin(),p.rend());
        int ans=0;
        for(int i=0;i<min(n,m);i++)
        {
            if(p[i]*k<=cap[i])
            {
                ans+=p[i]*k;
            }
            else
            {
                ans+=cap[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}