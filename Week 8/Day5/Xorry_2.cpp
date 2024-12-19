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
        ll n;
        cin>>n;
        ll b= (1 << __lg(n));
        ll a=b^n;
        ll cnt=0,x=0;
        x+=b;
        for(ll i=0;i<=__lg(b);i++)
        {
            if(!((a>>i)&1) && !((b>>i)&1) && (x+(1LL>>i))<n)
            {
                cnt++;
                x+=(1LL<<i);
            }
        }
        ll ans=(1<<cnt);
        cout<<ans<<endl;
    }
    return 0;
}
