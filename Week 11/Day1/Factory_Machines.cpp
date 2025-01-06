#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,p;
    cin>>n>>p;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    auto ok=[&](long long mid)
    {
        long long cnt=0;
        for(int i=0;i<n;i++)
        {
            cnt+=(mid/v[i]);
            if(cnt>=p)
            {
                return true;
            }
        }
        return false;
    };
    long long int l=1,r=1e18,mid,ans;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(ok(mid))
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}