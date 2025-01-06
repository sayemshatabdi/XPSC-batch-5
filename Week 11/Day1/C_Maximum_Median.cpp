#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    auto ok=[&](long long mid)
    {
        long long cnt=0;
        for(int i=n/2;i<n;i++)
        {
            if(v[i]<mid)
            {
                cnt+=(mid-v[i]);
            }
        }
        return cnt<=k;
    };
    int l=0,r=2e9,mid,ans;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(ok(mid))
        {
            l=mid+1;
            ans=mid;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}