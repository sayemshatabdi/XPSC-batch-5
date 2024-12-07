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
        ll n,mx=INT_MIN,sum=0,cnt=0;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(ll i=0;i<n;i++)
        {
            sum+=v[i];
            mx=max(mx,v[i]);
            if((sum-mx) == mx)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}