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
        string a;
        cin>>a;
        
        vector<ll>v(n);
        ll ans=0;
        
        for(ll i=0; i<n; i++)
        {
            if(a[i]=='L')
            ans=ans+i;
            else
            ans=ans+n-i-1;
            
            if(a[i]=='L'){
                v[i]=n-i-1-(i);
            }else{
                v[i]=i-(n-i-1);
            }
        }
        sort(v.rbegin(),v.rend());
        
        for(ll i=0; i<n; i++)
        {
            if(v[i]>0)
            {
                ans=ans+v[i];
            }
            cout<<ans<<" ";
        }
        cout<<"\n";
    }
    return 0;
}