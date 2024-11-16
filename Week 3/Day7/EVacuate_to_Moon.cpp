#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll>cap(n);
        for(ll i=0;i<n;i++)
        {
            cin>>cap[i];
        }
        vector<ll>p(m);
        for(ll i=0;i<m;i++)
        {
            cin>>p[i];
        }
        sort(cap.rbegin(),cap.rend());
        sort(p.rbegin(),p.rend());
        ll ans=0;
        for(ll i=0;i<min(n,m);i++)
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