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
        ll n,d,t;
        cin>>n>>d>>t;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll l=0,r=0,cnt=0,ans=0;
        while(r<n)
        {
            if(v[r]<=t)
            {
                while(v[r]<=t)
                {
                    if(r>=n) break;
                    cnt++;
                    r++;
                }
                if(cnt>=d)
                {
                    ll a=cnt-d+1;
                    ans+=((a*(a+1))/2);
                }
                cnt=0;
            }
            else
            {
                r++;
            }
            
        }
        cout<<ans<<endl;
    }
    return 0;
}