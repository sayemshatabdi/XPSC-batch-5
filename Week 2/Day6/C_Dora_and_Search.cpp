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
        set<ll>s;
        bool flag=false;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            s.insert(v[i]);
        }
        ll l=0,r=n-1;
        while(l<r)
        {
            // if(s.size()<=0) break;
            ll mx=*s.rbegin(),mn=*s.begin(); 
            if(v[l]!=mn && v[l]!=mx && v[r]!=mx && v[r]!=mn)
            {
                cout<<l+1<<" "<<r+1<<endl;
                flag=true;
                break;
            }
            else if((v[l]==mn && v[r]==mx) || (v[l]==mx && v[r]==mn))
            {
                l++;
                r--;
                s.erase(s.begin());
                auto it=s.end();
                it--;
                s.erase(it);
            }
            else if(v[l]==mx || v[l]==mn)
            {
                
                if(v[l]==mn)
                {
                    s.erase(s.begin());
                    l++;
                }
                else
                {
                    auto it=s.end();
                    it--;
                    s.erase(it);
                    l++;
                }
            }
            else if(v[r]==mx || v[r]==mn)
            {
                
                if(v[r]==mn)
                {
                    s.erase(s.begin());
                    r--;
                }
                else
                {
                    auto it=s.end();
                    it--;
                    s.erase(it);
                    r--;
                }
            }
        }
        if(!flag) cout<<"-1"<<endl;
    }
    return 0;
}