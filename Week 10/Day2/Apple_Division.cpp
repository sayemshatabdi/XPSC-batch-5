#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll ans=INT_MAX;
    for(ll mask=0;mask<(1<<n);mask++)
    {
        ll sum1=0,sum2=0;
        for(ll k=0;k<n;k++)
        {
            if((mask>>k)&1)
            {
                sum1+=v[k];
            }
            else 
            {
                sum2+=v[k];
            }
        }
        ll dif=abs(sum1-sum2);
        ans=min(ans,dif);
    }
    cout<<ans<<endl;
    return 0;
}