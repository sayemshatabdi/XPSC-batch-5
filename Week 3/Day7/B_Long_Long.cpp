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
        ll cnt=0, ans=0,l=0,r=0;
        bool flag=false;
        while(r<n)
        {
            if(v[r]<0)
            {
                if(!flag) 
                {
                    cnt++;
                    flag=true;
                }
                while(v[r]<=0)
                {
                    if(r>=n) break;
                    ans+=(v[r]*(-1));
                    r++;
                }
                
            }
            else
            {
                ans+=v[r];
                r++;
                flag=false;
            }
        }
        cout<<ans<<" "<<cnt<<endl;
    }
    return 0;
}