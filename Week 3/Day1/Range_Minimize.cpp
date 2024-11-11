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
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll ans=INT_MAX;
        if(n<=3)
        {
            cout<<"0"<<endl;
        }
        else
        {
            sort(v.begin(),v.end());
            ll mx1=INT_MIN,mx2=INT_MIN,mn1=INT_MAX,mn2=INT_MAX,mx3=INT_MIN,mn3=INT_MAX;
            for(ll i=2;i<n;i++)
            {
                // cout<<v[i]<<" ";
                mx1=max(mx1,v[i]);
                mn1=min(mn1,v[i]);
            }
            for(ll i=0;i<n-2;i++)
            {
                // cout<<v[i]<<" ";
                mx2=max(mx2,v[i]);
                mn2=min(mn2,v[i]);
            }
            for(int i=1;i<n-1;i++)
            {
                mx3=max(mx3,v[i]);
                mn3=min(mn3,v[i]);
            }
            // cout<<mx1<<" "<<mn1<<endl;
            // cout<<mx2<<" "<<mn2<<endl;
            // cout<<mx3<<" "<<mn3<<endl;
            cout<<min({(mx1-mn1),(mx2-mn2),(mx3-mn3)})<<endl;
        }
        
    }
    return 0;
}